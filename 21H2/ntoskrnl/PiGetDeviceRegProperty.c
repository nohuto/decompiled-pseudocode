/*
 * XREFs of PiGetDeviceRegProperty @ 0x1406401E8
 * Callers:
 *     IoGetDeviceProperty @ 0x14063FC90 (IoGetDeviceProperty.c)
 *     IopPnPDispatch @ 0x14074F750 (IopPnPDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     wcschr @ 0x1403D3F10 (wcschr.c)
 *     wcsstr @ 0x1403D4190 (wcsstr.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     _CmGetDeviceRegProp @ 0x14064146C (_CmGetDeviceRegProp.c)
 *     PnpFindAlternateStringData @ 0x1406B16AC (PnpFindAlternateStringData.c)
 *     RtlFormatMessageEx @ 0x140910E98 (RtlFormatMessageEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiGetDeviceRegProperty(int a1, __int64 a2, int a3, unsigned int a4, wchar_t *Src, int *a6)
{
  __int64 v8; // r13
  int DeviceRegProp; // eax
  unsigned int v10; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // rsi
  int AlternateStringData; // eax
  size_t v15; // r15
  wchar_t *v16; // r12
  char v17; // cl
  wchar_t *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  const wchar_t *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  wchar_t *v24; // rax
  unsigned int NumberOfBytes; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int NumberOfBytes_4; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  wchar_t *Str; // [rsp+60h] [rbp-A0h] BYREF
  int v29[2]; // [rsp+68h] [rbp-98h]
  NTSTRSAFE_PWSTR v30; // [rsp+70h] [rbp-90h]
  __int64 v31[20]; // [rsp+80h] [rbp-80h] BYREF

  NumberOfBytes_4 = a4;
  v8 = 0LL;
  NumberOfBytes = *a6;
  v30 = Src;
  v27 = 0;
  DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, a1, 0, a4, (__int64)&v27, (__int64)Src, (__int64)&NumberOfBytes, 0);
  v10 = DeviceRegProp;
  if ( a3 == 1 )
  {
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp != -1073741789 )
        return v10;
    }
    else if ( v27 != 1 )
    {
      return (unsigned int)-1073741584;
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6F697050u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( v10 != -1073741789 )
    {
      memmove(PoolWithTag, Src, NumberOfBytes);
      goto LABEL_15;
    }
    v19 = CmGetDeviceRegProp(
            PiPnpRtlCtx,
            a1,
            0,
            NumberOfBytes_4,
            (__int64)&v27,
            (__int64)PoolWithTag,
            (__int64)&NumberOfBytes,
            0);
    v10 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -1073741789 )
        *a6 = NumberOfBytes;
    }
    else
    {
      if ( v27 == 1 )
      {
LABEL_15:
        NumberOfBytes_4 = NumberOfBytes;
        Str = v13;
        *(_QWORD *)v29 = v13;
        AlternateStringData = PnpFindAlternateStringData(v13, NumberOfBytes, &Str, &NumberOfBytes_4);
        v15 = NumberOfBytes_4;
        v16 = Str;
        if ( AlternateStringData )
        {
          *(_QWORD *)v29 = Str;
          v18 = wcsstr(Str, L";(");
          v8 = (__int64)v18;
          if ( v18 )
          {
            v20 = ((unsigned int)v15 >> 1) - 2;
            if ( v16[v20] == 41 )
            {
              *v18 = 0;
              v8 = (__int64)(v18 + 2);
              v16[v20] = 0;
              memset(&v31[1], 0, 0x98uLL);
              v21 = (const wchar_t *)v8;
              v31[0] = v8;
              for ( NumberOfBytes_4 = 1; ; NumberOfBytes_4 = v23 + 1 )
              {
                v24 = wcschr(v21, 0x2Cu);
                if ( !v24 )
                  break;
                *v24 = 0;
                v22 = (__int64)(v24 + 1);
                v23 = NumberOfBytes_4;
                if ( NumberOfBytes_4 >= 0x13 )
                {
                  v17 = 1;
                  goto LABEL_17;
                }
                v31[NumberOfBytes_4] = v22;
                v21 = (const wchar_t *)v22;
              }
            }
          }
        }
        v17 = 0;
LABEL_17:
        if ( *a6 < (unsigned int)v15 )
        {
          v10 = -1073741789;
        }
        else if ( v8 )
        {
          if ( v17 )
            v10 = -1073741619;
          else
            v10 = RtlFormatMessageEx(v29[0], 0, 0, 0, 1, (__int64)v31, v30, *a6, (__int64)a6);
        }
        else
        {
          memmove(v30, v16, v15);
        }
        *a6 = v15;
        goto LABEL_21;
      }
      v10 = -1073741584;
    }
LABEL_21:
    ExFreePoolWithTag(v13, 0);
    return v10;
  }
  if ( DeviceRegProp >= 0 )
  {
    if ( v27 != a3 )
      v10 = -1073741584;
    if ( (v10 & 0x80000000) == 0 )
      goto LABEL_8;
  }
  if ( v10 == -1073741789 )
LABEL_8:
    *a6 = NumberOfBytes;
  return v10;
}
