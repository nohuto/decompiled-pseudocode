/*
 * XREFs of ??1ScopedRead@ReaderWriterLock@@QEAA@XZ @ 0x18003D5C4
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKgl_::_1_::dtor$3 @ 0x180046EEA (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--LoadKgl_--_1_--dtor$3.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::CheckKGLForGameFromGameConfig_::_1_::dtor$0 @ 0x180046EFC (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--CheckKGLForGameFromGameCo_ea_180046EFC.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedRead::~ScopedRead(PSRWLOCK *this)
{
  ReleaseSRWLockShared(*this);
}
