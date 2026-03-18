/*
 * XREFs of PiDrvDbOverlayNodeHive @ 0x1408B2298
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x1408B3A44 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     memset @ 0x140408F80 (memset.c)
 *     _RegRtlQueryValue @ 0x140617A84 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140617E18 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x1406B06C4 (_PnpCtxRegCreateKey.c)
 *     _RegRtlEnumKey @ 0x1407502BC (_RegRtlEnumKey.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B1CF8 (PiDrvDbOverlayCopyKeys.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbOverlayNodeHive(__int64 a1, const wchar_t *a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // r8d
  int v8; // ebx
  wchar_t **v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // eax
  int v16; // eax
  unsigned int *PoolWithTag; // r14
  ULONG i; // r15d
  int v19; // eax
  int v20; // edi
  int v21; // esi
  char *v22; // r8
  int v24; // [rsp+20h] [rbp-89h]
  int v25; // [rsp+20h] [rbp-89h]
  __int64 v26; // [rsp+40h] [rbp-69h] BYREF
  int v27; // [rsp+48h] [rbp-61h] BYREF
  int v28; // [rsp+4Ch] [rbp-5Dh] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE v31; // [rsp+60h] [rbp-49h] BYREF
  HANDLE v32; // [rsp+68h] [rbp-41h] BYREF
  HANDLE v33; // [rsp+70h] [rbp-39h] BYREF
  HANDLE v34; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v35[8]; // [rsp+80h] [rbp-29h] BYREF

  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  v32 = 0LL;
  v31 = 0LL;
  LODWORD(v6) = 0;
  KeyHandle = 0LL;
  v33 = 0LL;
  Handle = 0LL;
  v27 = 0;
  v28 = 0;
  HIDWORD(v26) = 0;
  if ( wcsicmp(a2, L"SYSTEM") )
  {
    if ( !wcsicmp(a2, L"SOFTWARE") && (*(_DWORD *)(a1 + 492) & 0x20) == 0 )
      goto LABEL_3;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 492);
    if ( (v7 & 0x10) == 0 )
    {
LABEL_3:
      v8 = 0;
      goto LABEL_48;
    }
    v9 = off_14097FB88;
    do
    {
      v10 = (__int64)*v9++;
      v11 = (unsigned int)v6;
      v6 = (unsigned int)(v6 + 1);
      v35[v11] = v10;
    }
    while ( (unsigned int)v6 < 4 );
    if ( (v7 & 0xC0) != 0 )
    {
      v12 = SysCtxRegOpenKey(0LL, a3, (__int64)L"ControlSet001\\Services", 0, 0x20019u, (__int64)&KeyHandle);
      v8 = v12;
      if ( v12 == -1073741772 )
      {
        KeyHandle = 0LL;
      }
      else if ( v12 < 0 )
      {
        goto LABEL_48;
      }
    }
    v35[v6] = L"ControlSet001\\Services";
    LODWORD(v6) = v6 + 1;
  }
  v13 = (unsigned int)v6;
  v14 = v6 + 1;
  v35[v13] = L"Setup\\ResolveFilePaths";
  v15 = SysCtxRegOpenKey(
          0LL,
          2147483650LL,
          (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\DriverHiveOverlays",
          0,
          0x20019u,
          (__int64)&v32);
  v8 = v15;
  if ( v15 == -1073741772 )
  {
    v32 = 0LL;
  }
  else
  {
    if ( v15 < 0 )
      goto LABEL_48;
    v16 = SysCtxRegOpenKey(0LL, (__int64)v32, (__int64)a2, 0, 0x20019u, (__int64)&v31);
    v8 = v16;
    if ( v16 == -1073741772 )
    {
      v31 = 0LL;
    }
    else if ( v16 < 0 )
    {
      goto LABEL_48;
    }
  }
  v8 = SysCtxRegOpenKey(0LL, 2147483650LL, (__int64)a2, 0, 0x2001Fu, (__int64)&v34);
  if ( v8 >= 0 )
  {
    v8 = PiDrvDbOverlayCopyKeys(a3, 0LL, (char *)v34, 0LL, v24, (__int64)v35, v14, (__int64)v31);
    if ( v8 >= 0 )
    {
      if ( KeyHandle )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x62647050u);
        if ( !PoolWithTag )
        {
          v8 = -1073741670;
          goto LABEL_48;
        }
        for ( i = 0; ; ++i )
        {
          LODWORD(v26) = 260;
          v19 = RegRtlEnumKey(KeyHandle, i, PoolWithTag, (unsigned int *)&v26);
          if ( v19 == -2147483622 )
          {
LABEL_47:
            ExFreePoolWithTag(PoolWithTag, 0);
            goto LABEL_48;
          }
          if ( v19 < 0
            || (int)SysCtxRegOpenKey(0LL, (__int64)KeyHandle, (__int64)PoolWithTag, 0, 0x20019u, (__int64)&Handle) < 0 )
          {
            continue;
          }
          LODWORD(v26) = 4;
          if ( (int)RegRtlQueryValue(Handle, L"Type", (_DWORD *)&v26 + 1, &v27, (unsigned int *)&v26) < 0
            || v26 != 0x400000004LL )
          {
            break;
          }
          LODWORD(v26) = 4;
          if ( (int)RegRtlQueryValue(Handle, L"Start", (_DWORD *)&v26 + 1, &v28, (unsigned int *)&v26) < 0
            || v26 != 0x400000004LL )
          {
            v20 = v27;
LABEL_35:
            v28 = 0;
            v21 = 0;
            goto LABEL_36;
          }
          v20 = v27;
          v21 = v28;
LABEL_36:
          ZwClose(Handle);
          if ( !v20 )
            continue;
          if ( (v20 & 0xB) == 0 || v21 == 2 )
          {
            if ( (*(_DWORD *)(a1 + 492) & 0x80u) == 0 )
              continue;
          }
          else if ( (*(_DWORD *)(a1 + 492) & 0x40) == 0 )
          {
            continue;
          }
          v22 = (char *)v33;
          if ( !v33 )
          {
            v8 = PnpCtxRegCreateKey(0LL, (char *)v34, L"ControlSet001\\Services", 0, 0x2001Fu, 0LL, &v33, 0LL);
            if ( v8 < 0 )
              goto LABEL_47;
            v22 = (char *)v33;
          }
          v8 = PiDrvDbOverlayCopyKeys(
                 (__int64)KeyHandle,
                 (__int64)PoolWithTag,
                 v22,
                 (const WCHAR *)PoolWithTag,
                 v25,
                 0LL,
                 0,
                 0LL);
          if ( v8 < 0 )
            goto LABEL_47;
        }
        v20 = 0;
        v27 = 0;
        goto LABEL_35;
      }
    }
  }
LABEL_48:
  if ( v31 )
    ZwClose(v31);
  if ( v32 )
    ZwClose(v32);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v33 )
    ZwClose(v33);
  if ( v34 )
    ZwClose(v34);
  return (unsigned int)v8;
}
