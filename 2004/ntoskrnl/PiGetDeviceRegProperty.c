/*
 * XREFs of PiGetDeviceRegProperty @ 0x1405DD1A8
 * Callers:
 *     IoGetDeviceProperty @ 0x1405DCC50 (IoGetDeviceProperty.c)
 *     IopPnPDispatch @ 0x140739C80 (IopPnPDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     wcschr @ 0x1403D0910 (wcschr.c)
 *     wcsstr @ 0x1403D0B90 (wcsstr.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1405E046C (_CmGetDeviceRegProp.c)
 *     PnpFindAlternateStringData @ 0x140700374 (PnpFindAlternateStringData.c)
 *     RtlFormatMessageEx @ 0x14090DBA8 (RtlFormatMessageEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiGetDeviceRegProperty(int a1, __int64 a2, int a3, unsigned int a4, WCHAR *Src, PULONG ReturnLength)
{
  va_list v8; // r13
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
  va_list v22; // rax
  unsigned int v23; // edx
  wchar_t *v24; // rax
  ULONG NumberOfBytes; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int NumberOfBytes_4; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  wchar_t *Str; // [rsp+60h] [rbp-A0h] BYREF
  PWSTR MessageFormat; // [rsp+68h] [rbp-98h]
  PWSTR Buffer; // [rsp+70h] [rbp-90h]
  va_list Arguments[20]; // [rsp+80h] [rbp-80h] BYREF

  NumberOfBytes_4 = a4;
  v8 = 0LL;
  NumberOfBytes = *ReturnLength;
  Buffer = Src;
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
        *ReturnLength = NumberOfBytes;
    }
    else
    {
      if ( v27 == 1 )
      {
LABEL_15:
        NumberOfBytes_4 = NumberOfBytes;
        Str = v13;
        MessageFormat = v13;
        AlternateStringData = PnpFindAlternateStringData(v13, NumberOfBytes, &Str, &NumberOfBytes_4);
        v15 = NumberOfBytes_4;
        v16 = Str;
        if ( AlternateStringData )
        {
          MessageFormat = Str;
          v18 = wcsstr(Str, L";(");
          v8 = (va_list)v18;
          if ( v18 )
          {
            v20 = ((unsigned int)v15 >> 1) - 2;
            if ( v16[v20] == 41 )
            {
              *v18 = 0;
              v8 = (va_list)(v18 + 2);
              v16[v20] = 0;
              memset(&Arguments[1], 0, 0x98uLL);
              v21 = (const wchar_t *)v8;
              Arguments[0] = v8;
              for ( NumberOfBytes_4 = 1; ; NumberOfBytes_4 = v23 + 1 )
              {
                v24 = wcschr(v21, 0x2Cu);
                if ( !v24 )
                  break;
                *v24 = 0;
                v22 = (va_list)(v24 + 1);
                v23 = NumberOfBytes_4;
                if ( NumberOfBytes_4 >= 0x13 )
                {
                  v17 = 1;
                  goto LABEL_17;
                }
                Arguments[NumberOfBytes_4] = v22;
                v21 = (const wchar_t *)v22;
              }
            }
          }
        }
        v17 = 0;
LABEL_17:
        if ( *ReturnLength < (unsigned int)v15 )
        {
          v10 = -1073741789;
        }
        else if ( v8 )
        {
          if ( v17 )
            v10 = -1073741619;
          else
            v10 = RtlFormatMessageEx(MessageFormat, 0, 0, 0, 1u, Arguments, Buffer, *ReturnLength, ReturnLength, 0LL);
        }
        else
        {
          memmove(Buffer, v16, v15);
        }
        *ReturnLength = v15;
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
    *ReturnLength = NumberOfBytes;
  return v10;
}
