/*
 * XREFs of _ClientLoadLocalT1Fonts@0 @ 0xD73D6
 * Callers:
 *     _xxxLW_LoadFonts@4 @ 0xD6E2E (_xxxLW_LoadFonts@4.c)
 * Callees:
 *     <none>
 */

int __stdcall ClientLoadLocalT1Fonts()
{
  int v1; // [esp+4h] [ebp-8h] BYREF
  int v2; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  v2 = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(77);
  KeUserModeCallback(77, 0, 0, &v1, &v2);
  EtwTraceEndCallback(77);
  return EnterCrit(0, 1);
}
