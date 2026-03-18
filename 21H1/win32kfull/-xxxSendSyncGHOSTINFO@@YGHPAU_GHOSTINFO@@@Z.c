/*
 * XREFs of ?xxxSendSyncGHOSTINFO@@YGHPAU_GHOSTINFO@@@Z @ 0x170464
 * Callers:
 *     _xxxFrostCrashedWindow@8 @ 0x170644 (_xxxFrostCrashedWindow@8.c)
 * Callees:
 *     _DwmSyncSignalGhost@8 @ 0x1D2F17 (_DwmSyncSignalGhost@8.c)
 */

BOOL __thiscall xxxSendSyncGHOSTINFO(void *this)
{
  int v2; // esi
  BOOL v3; // ebx

  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  v2 = ReferenceDwmApiPort();
  UserSessionSwitchLeaveCrit();
  v3 = DwmSyncSignalGhost(v2, this) >= 0;
  EnterCrit(0, 1);
  return v3;
}
