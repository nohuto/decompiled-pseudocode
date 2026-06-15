/*
 * XREFs of PbmRegisterPlaybackManagerNotifications @ 0x180028CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180020BD4 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180020CB8 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmRegisterPlaybackManagerNotifications(void *a1, int a2, int a3)
{
  int Process; // edi
  __int64 v6; // rcx
  int v7; // eax
  struct CProcess *v8; // rbx
  struct CProcess *v10; // [rsp+20h] [rbp-18h] BYREF

  Process = 0;
  v10 = 0LL;
  if ( !g_ApplicationManager )
    return (unsigned int)Process;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v10);
  if ( Process >= 0 )
  {
    if ( !a2 )
    {
      v7 = CApplicationManager::RegisterSoundLevelNotificationClient(v6, v10, a3);
      goto LABEL_7;
    }
    if ( a2 == 1 )
    {
      v7 = CApplicationManager::RegisterTrackStateNotificationClient(v6, v10, a3);
LABEL_7:
      Process = v7;
    }
  }
  v8 = v10;
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v10 + 32LL))(v10);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  }
  return (unsigned int)Process;
}
