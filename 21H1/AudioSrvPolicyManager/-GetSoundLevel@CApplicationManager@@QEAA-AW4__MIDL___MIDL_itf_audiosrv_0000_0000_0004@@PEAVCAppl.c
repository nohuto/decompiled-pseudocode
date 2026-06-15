/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x1800243C8
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x1800245EC (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180024798 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x1800163AC (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180016D30 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180016DA4 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180017834 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x1800179A4 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180017FB8 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180018030 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800180A8 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180018120 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x1800181C8 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x180026D10 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(__int64 a1, CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rsi

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *((_DWORD *)a2 + 144) )
  {
    v4 = *((_DWORD *)a2 + 145);
    goto LABEL_18;
  }
  if ( *((_DWORD *)a2 + 52) )
    goto LABEL_4;
  v5 = (int)CApplication::Category((__int64)a2);
  if ( (unsigned int)CApplication::IsMutedForSleep(a2) )
    goto LABEL_6;
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2)
    || (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
    && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
    && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
    && ((unsigned int)CApplication::GetTotalActiveRenderStreamCount(a2)
     || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2))
    || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2)
    && ((unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2)
     || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2)) )
  {
LABEL_4:
    v4 = 2;
    goto LABEL_18;
  }
  if ( !dword_1800487F8[v5] )
LABEL_6:
    v4 = 0;
  else
    v4 = 2 - ((unsigned int)CApplication::HasDuckedStream(a2) != 0);
LABEL_18:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v4;
}
