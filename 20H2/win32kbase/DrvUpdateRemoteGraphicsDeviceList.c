/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1C01497A8
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D000 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0060D80 (UserIsUserCritSecIn.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C0086BC4 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CB5AC (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  __int64 v0; // rdx
  struct tagREMOTE_CONTEXT *v1; // rcx
  __int64 v2; // rax
  struct tagGRAPHICS_DEVICE *i; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // eax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v2 = WdLogNewEntry5_WdAssertion(v1, v0);
    WdLogEvent5_WdAssertion(v2);
  }
  GreCleanupRemoteAdapterContext(v1);
  if ( !gRemoteSessionUseWddm )
  {
    for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
    {
      if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 && !*((_QWORD *)i + 35) )
      {
        v14 = 0;
        *((_QWORD *)i + 37) = 0LL;
        v4 = ((__int64 (__fastcall *)(char *, char *, char *, char *, char *))qword_1C024A9A8)(
               (char *)i + 280,
               (char *)i + 296,
               (char *)i + 304,
               (char *)i + 288,
               &v14);
        v8 = v4;
        if ( v4 >= 0 )
        {
          v11 = *((_DWORD *)i + 41);
          if ( v14 )
            v12 = v11 | 4;
          else
            v12 = v11 & 0xFFFFFFFB;
          *((_DWORD *)i + 41) = v12;
          DrvUpdateRemoteAdapterInfo(i);
        }
        else
        {
          v9 = WdLogNewEntry5_WdError(v6, v5, v7);
          *(_QWORD *)(v9 + 24) = i;
          *(_QWORD *)(v9 + 32) = v8;
          WdLogEvent5_WdError(v9, v10);
        }
      }
    }
  }
  return 1LL;
}
