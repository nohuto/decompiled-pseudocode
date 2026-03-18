/*
 * XREFs of _ClientDeliverUserApc@0 @ 0xAB94C
 * Callers:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     ?xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z @ 0xE3788 (-xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall ClientDeliverUserApc()
{
  int v1; // [esp+4h] [ebp-8h] BYREF
  int v2; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  v2 = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(85);
  KeUserModeCallback(85, 0, 0, &v1, &v2);
  EtwTraceEndCallback(85);
  return EnterCrit(0, 1);
}
