/*
 * XREFs of ClientLoadLocalT1Fonts @ 0x1C0009968
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C0009720 (xxxLW_LoadFonts.c)
 * Callees:
 *     <none>
 */

__int64 ClientLoadLocalT1Fonts()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(77LL);
  KeUserModeCallback(77LL, 0LL, 0LL, &v2, &v1);
  EtwTraceEndCallback(77LL);
  return EnterCrit(0LL, 1LL);
}
