/*
 * XREFs of PipMigratePnpState @ 0x140A52084
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     _PnpCtxRegQueryValue @ 0x14061A094 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCreateKey @ 0x140630370 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406306B4 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14063562C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetMatchingDeviceList @ 0x140773AE0 (_CmGetMatchingDeviceList.c)
 *     _PnpCtxOpenMachine @ 0x1407A475C (_PnpCtxOpenMachine.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1407B1628 (_PnpCtxRegEnumKeyWithCallback.c)
 *     _PnpCtxCloseMachine @ 0x140974714 (_PnpCtxCloseMachine.c)
 *     _PnpCtxRegCopyTree @ 0x140974A4C (_PnpCtxRegCopyTree.c)
 *     _PnpCtxRegSetValue @ 0x140974B24 (_PnpCtxRegSetValue.c)
 */

__int64 PipMigratePnpState()
{
  char v0; // si
  PERESOURCE *v1; // rdi
  int v2; // eax
  __int64 v3; // rcx
  int CachedContextBaseKey; // ebx
  int Value; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  int MatchingDeviceList; // eax
  __int64 v13; // [rsp+20h] [rbp-49h]
  __int64 v14; // [rsp+28h] [rbp-41h]
  void *v15; // [rsp+40h] [rbp-29h] BYREF
  void *v16; // [rsp+48h] [rbp-21h] BYREF
  void *v17; // [rsp+50h] [rbp-19h] BYREF
  int v18; // [rsp+58h] [rbp-11h] BYREF
  __int64 Source2; // [rsp+60h] [rbp-9h] BYREF
  __int64 v20; // [rsp+68h] [rbp-1h] BYREF
  PERESOURCE *v21; // [rsp+70h] [rbp+7h] BYREF
  void *v22; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD Source1[8]; // [rsp+80h] [rbp+17h] BYREF
  int v24; // [rsp+D0h] [rbp+67h] BYREF
  int v25; // [rsp+D8h] [rbp+6Fh] BYREF
  int v26; // [rsp+E0h] [rbp+77h] BYREF
  int v27; // [rsp+E8h] [rbp+7Fh] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v0 = 0;
  v25 = 0;
  v1 = 0LL;
  v26 = 0;
  v27 = 0;
  v15 = 0LL;
  Source1[0] = 0LL;
  Source2 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v18 = 0;
  v2 = PnpCtxRegOpenKey(
         *(__int64 *)&PiPnpRtlCtx,
         -2147483646,
         (int)L"System\\Setup\\Upgrade\\PnP",
         0,
         131103,
         (__int64)&v16);
  CachedContextBaseKey = v2;
  if ( v2 == -1073741772 )
    goto LABEL_2;
  if ( v2 >= 0 )
  {
    v24 = 4;
    Value = PnpCtxRegQueryValue(v3, v16, (__int64)L"MigrationStatus", (__int64)&v25, (__int64)&v26, (__int64)&v24);
    CachedContextBaseKey = Value;
    if ( Value != -1073741772 )
    {
      if ( Value < 0 )
        goto LABEL_3;
      if ( v25 != 4 || v24 != 4 )
      {
        CachedContextBaseKey = -1073741823;
        goto LABEL_47;
      }
    }
    v7 = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (int)v16, (int)L"CurrentControlSet", 0, 131103, (__int64)&v17);
    CachedContextBaseKey = v7;
    if ( v7 == -1073741772 )
    {
LABEL_2:
      CachedContextBaseKey = 0;
      goto LABEL_3;
    }
    if ( v7 >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(__int64 *)&PiPnpRtlCtx,
                               (int)v17,
                               (int)L"Control\\DeviceMigration",
                               0,
                               131097,
                               (__int64)&v15);
      if ( CachedContextBaseKey >= 0 )
      {
        v24 = 8;
        CachedContextBaseKey = PnpCtxRegQueryValue(
                                 v3,
                                 v15,
                                 (__int64)L"MigrationTime",
                                 (__int64)&v25,
                                 (__int64)&Source2,
                                 (__int64)&v24);
        if ( CachedContextBaseKey >= 0 )
        {
          if ( v25 == 3 && v24 == 8 )
          {
            PnpCtxRegCloseKey(v3, v15);
            v15 = 0LL;
            CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v20);
            if ( CachedContextBaseKey < 0 )
              goto LABEL_3;
            CachedContextBaseKey = PnpCtxRegCreateKey(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     v20,
                                     (__int64)L"Control\\DeviceMigration",
                                     0,
                                     0x20006u,
                                     0LL,
                                     (__int64)&v15,
                                     0LL);
            if ( CachedContextBaseKey < 0 )
              goto LABEL_3;
            v24 = 8;
            v8 = PnpCtxRegQueryValue(v3, v15, (__int64)L"MigrationTime", (__int64)&v25, (__int64)Source1, (__int64)&v24);
            CachedContextBaseKey = v8;
            if ( v8 == -1073741772 )
              goto LABEL_32;
            if ( v8 < 0 )
              goto LABEL_3;
            if ( v25 == 3 && v24 == 8 )
            {
              if ( RtlCompareMemory(Source1, &Source2, 8uLL) == 8 )
              {
                CachedContextBaseKey = -1073741791;
                goto LABEL_3;
              }
LABEL_32:
              v26 = 259;
              CachedContextBaseKey = PnpCtxRegSetValue(v3, v16, L"MigrationStatus", 4u, &v26, 4u);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_3;
              CachedContextBaseKey = PnpCtxRegSetValue(v3, v15, L"MigrationTime", 3u, &Source2, 8u);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_3;
              v24 = 4;
              v0 = 1;
              CachedContextBaseKey = PnpCtxRegQueryValue(
                                       v3,
                                       v16,
                                       (__int64)L"TargetVersion",
                                       (__int64)&v25,
                                       (__int64)&v27,
                                       (__int64)&v24);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_50;
              if ( v25 != 4 || v24 != 4 )
              {
                CachedContextBaseKey = -1073741823;
                goto LABEL_50;
              }
              if ( (v27 & 0xFFFF0000) != 0xA000000 )
              {
                CachedContextBaseKey = -1073741735;
                goto LABEL_50;
              }
              CachedContextBaseKey = PnpCtxRegCopyTree(v3, (int)v17, 0, v20, 0LL);
              if ( CachedContextBaseKey < 0 )
                goto LABEL_50;
              v9 = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (int)v17, (int)L"Services", 0, 131097, (__int64)&v22);
              CachedContextBaseKey = v9;
              if ( v9 != -1073741772 )
              {
                if ( v9 < 0 )
                  goto LABEL_50;
                CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(
                                         *(__int64 *)&PiPnpRtlCtx,
                                         v22,
                                         (__int64)PipMigrateCleanServiceCallback,
                                         0LL);
                if ( CachedContextBaseKey < 0 )
                  goto LABEL_50;
              }
              v11 = PnpCtxOpenMachine(v3, 0LL, v10, -1LL, v13, v14, &v21);
              v1 = v21;
              CachedContextBaseKey = v11;
              if ( v11 < 0 )
                goto LABEL_50;
              MatchingDeviceList = CmGetMatchingDeviceList(
                                     (__int64)v21,
                                     (__int64)&PipMigrateResetDeviceCallback,
                                     0LL,
                                     0LL,
                                     0,
                                     (__int64)&v18,
                                     0);
              CachedContextBaseKey = MatchingDeviceList;
              if ( MatchingDeviceList == -1073741789 )
              {
                CachedContextBaseKey = 0;
                goto LABEL_50;
              }
              if ( MatchingDeviceList < 0 )
                goto LABEL_50;
LABEL_47:
              if ( !v0 )
              {
LABEL_51:
                if ( v1 )
                  PnpCtxCloseMachine(v1);
                goto LABEL_3;
              }
LABEL_50:
              v26 = CachedContextBaseKey;
              PnpCtxRegSetValue(v3, v16, L"MigrationStatus", 4u, &v26, 4u);
              goto LABEL_51;
            }
          }
          CachedContextBaseKey = -1073741823;
        }
      }
    }
  }
LABEL_3:
  if ( v22 )
    PnpCtxRegCloseKey(v3, v22);
  if ( v15 )
    PnpCtxRegCloseKey(v3, v15);
  if ( v17 )
    PnpCtxRegCloseKey(v3, v17);
  if ( v16 )
    PnpCtxRegCloseKey(v3, v16);
  return (unsigned int)CachedContextBaseKey;
}
