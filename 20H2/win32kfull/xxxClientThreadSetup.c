/*
 * XREFs of xxxClientThreadSetup @ 0x1C01002C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientThreadSetup(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 0;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1);
  EtwTraceBeginCallback(84LL);
  v1 = KeUserModeCallback(84LL, 0LL, 0LL, &v4, &v3);
  EtwTraceEndCallback(84LL);
  EnterCrit(0LL, 1LL);
  return v1;
}
