/*
 * XREFs of PiDrvDbOverlayCopyKeys @ 0x1408B1CF8
 * Callers:
 *     PiDrvDbOverlayCopyKeys @ 0x1408B1CF8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B2298 (PiDrvDbOverlayNodeHive.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403CDDD0 (_wcsnicmp.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwQueryKey @ 0x1403F25F0 (ZwQueryKey.c)
 *     _RegRtlQueryValue @ 0x140617A84 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140617E18 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x1406B06C4 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegEnumValue @ 0x1406B2554 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406B268C (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x1407502BC (_RegRtlEnumKey.c)
 *     _RegRtlSetValue @ 0x140752584 (_RegRtlSetValue.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B1CF8 (PiDrvDbOverlayCopyKeys.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbOverlayCopyKeys(
        __int64 a1,
        __int64 a2,
        char *a3,
        const WCHAR *a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  ULONG v10; // esi
  unsigned int *PoolWithTag; // rdi
  PVOID v12; // r15
  int InfoKey; // ebx
  int v14; // eax
  __int64 v15; // rcx
  ULONG v16; // esi
  ULONG v17; // eax
  unsigned int v18; // r12d
  ULONG i; // r13d
  int v20; // eax
  __int64 v21; // rcx
  ULONG v22; // r14d
  __int64 v23; // rsi
  unsigned int v24; // r12d
  const wchar_t **v25; // r14
  __int64 v26; // rdx
  __int16 v27; // ax
  ULONG v28; // ecx
  HANDLE v29; // rdx
  int v30; // eax
  ULONG v31; // r13d
  int v32; // eax
  SIZE_T v33; // r14
  ULONG v35; // [rsp+40h] [rbp-69h] BYREF
  ULONG NumberOfBytes; // [rsp+44h] [rbp-65h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+48h] [rbp-61h] BYREF
  ULONG v38; // [rsp+4Ch] [rbp-5Dh] BYREF
  unsigned int v39; // [rsp+50h] [rbp-59h]
  ULONG ResultLength; // [rsp+54h] [rbp-55h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-41h]
  int v44; // [rsp+6Ch] [rbp-3Dh] BYREF
  ULONG v45; // [rsp+70h] [rbp-39h] BYREF
  ULONG v46; // [rsp+74h] [rbp-35h] BYREF
  HANDLE v47; // [rsp+78h] [rbp-31h] BYREF
  PVOID P; // [rsp+80h] [rbp-29h]
  __int64 v49; // [rsp+88h] [rbp-21h]
  __int64 v50; // [rsp+90h] [rbp-19h]
  __int64 KeyInformation; // [rsp+98h] [rbp-11h] BYREF
  int v52; // [rsp+A0h] [rbp-9h]

  v49 = a6;
  v10 = 0;
  v50 = a8;
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
  KeyInformation = 0LL;
  v52 = 0;
  v12 = 0LL;
  v47 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v44 = 0;
  v45 = 0;
  v35 = 0;
  v38 = 0;
  v39 = 0;
  NumberOfBytes = 0;
  v46 = 0;
  ResultLength = 0;
  v43 = a7;
  InfoKey = SysCtxRegOpenKey(0LL, a1, a2, 8u, 0x20019u, (__int64)&KeyHandle);
  if ( InfoKey >= 0 )
  {
    if ( ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) >= 0 )
    {
      if ( (KeyInformation & 0x200000000LL) != 0 )
      {
        InfoKey = -2147483603;
        goto LABEL_84;
      }
      v10 = (KeyInformation & 0x100000000LL) != 0;
    }
    v14 = PnpCtxRegCreateKey(0LL, a3, a4, v10, 0x6001Fu, 0LL, &v47, &v45);
    v16 = 0;
    InfoKey = v14;
    if ( v14 >= 0 )
    {
      if ( (int)PnpCtxRegQueryInfoKey(v15, (int)KeyHandle, 0, (int)&v35, 0LL, (__int64)&v38, (__int64)&NumberOfBytes) < 0 )
      {
        v18 = 0;
      }
      else
      {
        v17 = v38;
        if ( v35 > v38 )
          v17 = v35;
        v18 = 2 * v17 + 2;
        v39 = v18;
        if ( 2 * v17 != -2 )
        {
          PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v18, 0x62647050u);
          if ( !PoolWithTag )
          {
            InfoKey = -1073741670;
            goto LABEL_84;
          }
        }
      }
      if ( (!NumberOfBytes || (v12 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x62647050u)) != 0LL)
        && (!v49 || !a7 || (P = ExAllocatePoolWithTag(PagedPool, 8LL * a7, 0x62647050u)) != 0LL) )
      {
        for ( i = 0; ; ++i )
        {
          v38 = i;
          NumberOfBytes_4 = v18 >> 1;
          v20 = RegRtlEnumKey(KeyHandle, i, PoolWithTag, &NumberOfBytes_4);
          if ( v20 == -2147483622 )
            goto LABEL_59;
          if ( v20 == -1073741789 )
          {
            v18 = 2 * NumberOfBytes_4;
            v39 = 2 * NumberOfBytes_4;
            if ( PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, 0);
            PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v18, 0x62647050u);
            if ( PoolWithTag )
            {
              --i;
              continue;
            }
LABEL_57:
            InfoKey = -1073741670;
            goto LABEL_80;
          }
          if ( v20 < 0 )
            goto LABEL_58;
          v22 = 0;
          v35 = 0;
          if ( !v49 )
            goto LABEL_43;
          v23 = NumberOfBytes_4;
          if ( !NumberOfBytes_4 )
            goto LABEL_42;
          v24 = 0;
          if ( !v43 )
            goto LABEL_41;
          v25 = (const wchar_t **)v49;
          while ( wcsnicmp(*v25, (const wchar_t *)PoolWithTag, (unsigned int)(v23 - 1)) )
          {
LABEL_37:
            ++v24;
            ++v25;
            if ( v24 >= v43 )
              goto LABEL_40;
          }
          v26 = (__int64)&(*v25)[v23];
          v27 = *(_WORD *)(v26 - 2);
          if ( v27 )
            break;
          LODWORD(v23) = 0;
LABEL_40:
          i = v38;
          v22 = v35;
LABEL_41:
          v18 = v39;
          if ( !(_DWORD)v23 )
          {
            v16 = 0;
            continue;
          }
LABEL_42:
          v16 = 0;
LABEL_43:
          if ( !v50 )
            goto LABEL_50;
          v20 = SysCtxRegOpenKey(0LL, v50, (__int64)PoolWithTag, 0, 0x20019u, (__int64)&Handle);
          if ( v20 == -1073741772 )
          {
            Handle = 0LL;
            continue;
          }
          if ( v20 < 0 )
          {
LABEL_58:
            InfoKey = v20;
LABEL_59:
            if ( InfoKey >= 0 )
            {
              v31 = NumberOfBytes;
              while ( 1 )
              {
                NumberOfBytes_4 = v18 >> 1;
                NumberOfBytes = v31;
                v32 = PnpCtxRegEnumValue(
                        v21,
                        KeyHandle,
                        v16,
                        PoolWithTag,
                        (__int64)&NumberOfBytes_4,
                        (__int64)&v46,
                        v12,
                        (__int64)&NumberOfBytes);
                if ( v32 == -2147483622 )
                  break;
                if ( v32 == -1073741789 )
                {
                  if ( NumberOfBytes_4 > v18 >> 1 )
                  {
                    v18 = 2 * NumberOfBytes_4;
                    if ( PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v18, 0x62647050u);
                    if ( !PoolWithTag )
                      goto LABEL_57;
                  }
                  v33 = NumberOfBytes;
                  if ( NumberOfBytes > v31 )
                  {
                    v31 = NumberOfBytes;
                    if ( v12 )
                      ExFreePoolWithTag(v12, 0);
                    v12 = ExAllocatePoolWithTag(PagedPool, v33, 0x62647050u);
                    if ( !v12 )
                      goto LABEL_16;
                  }
                  --v16;
                }
                else
                {
                  if ( v32 < 0 )
                  {
                    InfoKey = v32;
                    goto LABEL_78;
                  }
                  if ( v45 != 2
                    || (ResultLength = 0,
                        (unsigned int)RegRtlQueryValue(v47, (const WCHAR *)PoolWithTag, 0LL, 0LL, &ResultLength) != -1073741789) )
                  {
                    InfoKey = RegRtlSetValue(v47, (const WCHAR *)PoolWithTag, v46, v12, NumberOfBytes);
                    if ( InfoKey < 0 )
                      goto LABEL_78;
                  }
                }
                ++v16;
              }
            }
            goto LABEL_78;
          }
          InfoKey = PnpCtxRegQueryInfoKey(v21, (int)Handle, (int)&v44, 0, 0LL, 0LL, 0LL);
          if ( InfoKey < 0 )
            goto LABEL_59;
          if ( !v44 )
          {
            ZwClose(Handle);
            v29 = 0LL;
            Handle = 0LL;
            goto LABEL_51;
          }
LABEL_50:
          v29 = Handle;
LABEL_51:
          v30 = PiDrvDbOverlayCopyKeys(
                  (_DWORD)KeyHandle,
                  (_DWORD)PoolWithTag,
                  (_DWORD)v47,
                  (_DWORD)PoolWithTag,
                  0,
                  (unsigned __int64)P & -(__int64)(v22 != 0),
                  v22,
                  (__int64)v29);
          InfoKey = v30;
          if ( v30 == -2147483603 )
          {
            InfoKey = 0;
            continue;
          }
          if ( v30 < 0 )
            goto LABEL_78;
        }
        if ( v27 == 92 && P )
        {
          v28 = v35;
          *((_QWORD *)P + v35) = v26;
          v35 = v28 + 1;
        }
        goto LABEL_37;
      }
LABEL_16:
      InfoKey = -1073741670;
LABEL_78:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_80:
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
LABEL_84:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v47 )
    ZwClose(v47);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)InfoKey;
}
