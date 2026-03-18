/*
 * XREFs of ClientNoMemoryPopup @ 0x1C022867C
 * Callers:
 *     xxxSnapWindow @ 0x1C015527C (xxxSnapWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientNoMemoryPopup(__int64 a1)
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
  UserSessionSwitchLeaveCrit(a1);
  EtwTraceBeginCallback(86LL);
  KeUserModeCallback(86LL, 0LL, 0LL, &v3, &v2);
  EtwTraceEndCallback(86LL);
  return EnterCrit(0LL, 1LL);
}
