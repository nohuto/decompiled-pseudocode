/*
 * XREFs of ??1AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18006956C
 * Callers:
 *     _dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__ @ 0x18007CD10 (_dynamic_atexit_destructor_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800BC468 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 */

void __fastcall AudioEffectsWatcherFactory::~AudioEffectsWatcherFactory(AudioEffectsWatcherFactory *this)
{
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll(&qword_18019EEE8);
  DeleteCriticalSection(&TheAudioEffectsWatcherFactory);
}
