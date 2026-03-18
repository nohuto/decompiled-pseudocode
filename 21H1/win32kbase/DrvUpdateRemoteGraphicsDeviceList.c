/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1C0151FC8
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01252E0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C000E594 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     UserIsUserCritSecIn @ 0x1C00B4D20 (UserIsUserCritSecIn.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CBAEC (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  __int64 v0; // rdx
  struct tagREMOTE_CONTEXT *v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  struct tagGRAPHICS_DEVICE *i; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // eax
  char v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v4 = WdLogNewEntry5_WdAssertion(v1, v0, v2, v3);
    WdLogEvent5_WdAssertion(v4);
  }
  GreCleanupRemoteAdapterContext(v1);
  if ( !gRemoteSessionUseWddm )
  {
    for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
    {
      if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 && !*((_QWORD *)i + 35) )
      {
        v15 = 0;
        *((_QWORD *)i + 37) = 0LL;
        v6 = ((__int64 (__fastcall *)(char *, char *, char *, char *, char *))qword_1C02529C8)(
               (char *)i + 280,
               (char *)i + 296,
               (char *)i + 304,
               (char *)i + 288,
               &v15);
        v10 = v6;
        if ( v6 >= 0 )
        {
          v12 = *((_DWORD *)i + 41);
          if ( v15 )
            v13 = v12 | 4;
          else
            v13 = v12 & 0xFFFFFFFB;
          *((_DWORD *)i + 41) = v13;
          DrvUpdateRemoteAdapterInfo(i);
        }
        else
        {
          v11 = WdLogNewEntry5_WdError(v8, v7, v9);
          *(_QWORD *)(v11 + 24) = i;
          *(_QWORD *)(v11 + 32) = v10;
          WdLogEvent5_WdError(v11);
        }
      }
    }
  }
  return 1LL;
}
