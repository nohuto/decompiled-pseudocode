/*
 * XREFs of PbmUnregisterPlaybackManagerNotifications @ 0x180028D60
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001AFA0 (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001B060 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020FBC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmUnregisterPlaybackManagerNotifications(void *a1, int a2, int a3)
{
  int Process; // edi
  CApplicationManager *v6; // rdi
  struct CProcess *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  struct CProcess *v9; // rbx
  struct CProcess *v11; // [rsp+20h] [rbp-18h] BYREF

  Process = 0;
  v11 = 0LL;
  if ( !g_ApplicationManager )
    return (unsigned int)Process;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v11);
  if ( Process >= 0 )
  {
    if ( !a2 )
    {
      v6 = g_ApplicationManager;
      v7 = v11;
      v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      CProcess::RegisteredForSoundLevelNotifications((__int64)v7, 0, a3);
      goto LABEL_7;
    }
    if ( a2 == 1 )
    {
      v6 = g_ApplicationManager;
      v7 = v11;
      v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      CProcess::RegisteredForTrackStateNotifications((__int64)v7, 0, a3);
LABEL_7:
      CApplicationManager::Unregister(v6, v7);
      if ( v8 )
        LeaveCriticalSection(v8);
      Process = 0;
    }
  }
  v9 = v11;
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v11 + 32LL))(v11);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
  }
  return (unsigned int)Process;
}
