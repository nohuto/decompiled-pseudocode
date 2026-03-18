/*
 * XREFs of ClientDeliverUserApc @ 0x1C011A028
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0096AE0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C01220F4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientDeliverUserApc(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, 0LL);
  EtwTraceBeginCallback(85LL);
  KeUserModeCallback(85LL, 0LL, 0LL, &v3, &v2);
  EtwTraceEndCallback(85LL);
  return EnterCrit(0LL, 1LL);
}
