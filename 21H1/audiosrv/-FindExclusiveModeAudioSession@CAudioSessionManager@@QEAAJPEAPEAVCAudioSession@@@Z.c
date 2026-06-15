/*
 * XREFs of ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800CF698
 * Callers:
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800EE044 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002CB20 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800C94EC (-IsExclusiveModeSession@CAudioSession@@QEAAHXZ.c)
 *     ?FindNextNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@PEAV312@@Z @ 0x1800CF770 (-FindNextNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?GetValueAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@PEAU__POSITION@@@Z @ 0x1800D0004 (-GetValueAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::FindExclusiveModeAudioSession(
        CAudioSessionManager *this,
        struct CAudioSession **a2)
{
  char *v3; // rbp
  struct CAudioSession *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  __int64 v6; // rcx
  __int64 StartPosition; // rbx
  CAudioSession **ValueAt; // rax

  v3 = (char *)this + 56;
  v4 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64)v3);
  if ( StartPosition )
  {
    do
    {
      ValueAt = (CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetValueAt(
                                    v6,
                                    StartPosition);
      v4 = *ValueAt;
      if ( *ValueAt && (unsigned int)CAudioSession::IsExclusiveModeSession(*ValueAt) )
        break;
      v4 = 0LL;
      StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FindNextNode(
                        v3,
                        StartPosition);
    }
    while ( StartPosition );
    if ( v4 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  *a2 = v4;
  if ( v5 )
    LeaveCriticalSection(v5);
  return v4 == 0LL ? 0x80070490 : 0;
}
