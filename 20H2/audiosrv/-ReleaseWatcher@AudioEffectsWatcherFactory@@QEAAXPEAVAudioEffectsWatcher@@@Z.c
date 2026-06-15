/*
 * XREFs of ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800C5968
 * Callers:
 *     s_afxCloseAudioEffectsWatcher @ 0x1800C5C10 (s_afxCloseAudioEffectsWatcher.c)
 *     s_afxOpenAudioEffectsWatcher @ 0x1800C5CB0 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x1800C4F14 (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x1800C58E8 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C5BA0 (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioEffectsWatcherFactory::ReleaseWatcher(
        AudioEffectsWatcherFactory *this,
        struct AudioEffectsWatcher *a2)
{
  EnterCriticalSection(&TheAudioEffectsWatcherFactory);
  if ( !(unsigned int)AudioEffectsWatcher::ReleaseAppRef(a2) )
  {
    ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt(
      &qword_18019EEE8,
      *((_QWORD *)a2 + 10));
    AudioEffectsWatcher::`scalar deleting destructor'(a2);
  }
  LeaveCriticalSection(&TheAudioEffectsWatcherFactory);
}
