/*
 * XREFs of PipProcessPendingObjects @ 0x140A920E0
 * Callers:
 *     PipProcessPendingOsExtensionResources @ 0x140A54388 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A54414 (PipProcessPendingServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     _PnpCtxRegQueryValue @ 0x14061A094 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x14063562C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x1407C4164 (_PnpCtxRegEnumKey.c)
 *     PnpCheckDriverDependencies @ 0x1408A1BA8 (PnpCheckDriverDependencies.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipProcessPendingObjects(
        void *a1,
        __int64 (__fastcall *a2)(unsigned int *, void *, _QWORD, char *),
        __int64 a3,
        int (__fastcall *a4)(unsigned int *, void *, void *, _QWORD))
{
  _WORD *PoolWithTag; // rbx
  unsigned int v5; // esi
  int v9; // eax
  ULONG i; // r14d
  __int64 v11; // rcx
  int v12; // edi
  int Value; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[3]; // [rsp+31h] [rbp-CFh] BYREF
  SIZE_T NumberOfBytes; // [rsp+34h] [rbp-CCh] BYREF
  void *v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21[132]; // [rsp+50h] [rbp-B0h] BYREF

  NumberOfBytes = 260LL;
  PoolWithTag = 0LL;
  v17 = 0;
  v5 = 0;
  v20 = 0LL;
  v9 = PnpCtxRegEnumKey((__int64)a1, a1, 0, v21, (unsigned int *)&NumberOfBytes);
  for ( i = 1; ; ++i )
  {
    v12 = v9;
    if ( v9 == -2147483622 || v9 == -1073741444 )
      break;
    if ( v9 < 0 )
      goto LABEL_29;
    if ( (int)PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (int)a1, (int)v21, 0, 1, (__int64)&v20) >= 0 )
    {
      if ( !a2 )
        goto LABEL_8;
      v17 = 0;
      v12 = a2(v21, v20, 0LL, &v17);
      if ( v12 < 0 )
        goto LABEL_29;
      if ( !v17 )
      {
LABEL_8:
        LODWORD(NumberOfBytes) = v5;
        Value = PnpCtxRegQueryValue(
                  v11,
                  v20,
                  (__int64)L"DependOnFirmware",
                  (__int64)&NumberOfBytes + 4,
                  (__int64)PoolWithTag,
                  (__int64)&NumberOfBytes);
        if ( Value == -1073741789 || Value == -2147483643 )
        {
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0x42706E50u);
          v5 = NumberOfBytes;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42706E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741670;
          Value = PnpCtxRegQueryValue(
                    v15,
                    v20,
                    (__int64)L"DependOnFirmware",
                    (__int64)&NumberOfBytes + 4,
                    (__int64)PoolWithTag,
                    (__int64)&NumberOfBytes);
        }
        if ( Value == -1073741772 )
        {
          if ( PoolWithTag )
          {
            if ( v5 >= 2 )
              *PoolWithTag = 0;
LABEL_19:
            if ( PoolWithTag )
            {
              if ( v5 >= 2 )
              {
                if ( *PoolWithTag )
                {
                  v18[0] = 0;
                  if ( (int)PnpCheckDriverDependencies(PoolWithTag, v18, v14) < 0 || !v18[0] )
                    goto LABEL_26;
                }
              }
            }
          }
          if ( a4(v21, a1, v20, 0LL) >= 0 )
            --i;
          goto LABEL_26;
        }
        if ( Value < 0 )
          goto LABEL_26;
        goto LABEL_19;
      }
    }
LABEL_26:
    LODWORD(NumberOfBytes) = 260;
    v9 = PnpCtxRegEnumKey(v11, a1, i, v21, (unsigned int *)&NumberOfBytes);
  }
  v12 = 0;
LABEL_29:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x42706E50u);
  return (unsigned int)v12;
}
