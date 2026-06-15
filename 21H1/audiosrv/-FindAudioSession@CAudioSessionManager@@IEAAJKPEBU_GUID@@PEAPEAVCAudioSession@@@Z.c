/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800CF5A4
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800CF2C8 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002CB20 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?FindNextNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@PEAV312@@Z @ 0x1800CF770 (-FindNextNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?GetValueAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@PEAU__POSITION@@@Z @ 0x1800D0004 (-GetValueAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        int a2,
        const struct _GUID *a3,
        struct CAudioSession **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  char *v6; // rbp
  struct CAudioSession *v8; // rdi
  __int64 v9; // rcx
  __int64 StartPosition; // rbx
  __int64 v11; // rax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v6 = (char *)this + 56;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64)v6);
  if ( StartPosition )
  {
    do
    {
      v8 = *(struct CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetValueAt(
                                       v9,
                                       StartPosition);
      if ( v8 && *((_DWORD *)v8 + 179) == a2 )
      {
        v11 = *((_QWORD *)v8 + 85) - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
        if ( !v11 )
          v11 = *((_QWORD *)v8 + 86) - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
        if ( !v11 )
          break;
      }
      v8 = 0LL;
      StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FindNextNode(
                        v6,
                        StartPosition);
    }
    while ( StartPosition );
    if ( v8 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  *a4 = v8;
  if ( v4 )
    LeaveCriticalSection(v4);
  return v8 == 0LL ? 0x80070002 : 0;
}
