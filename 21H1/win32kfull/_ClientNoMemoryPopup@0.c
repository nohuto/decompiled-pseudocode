/*
 * XREFs of _ClientNoMemoryPopup@0 @ 0x18A0CE
 * Callers:
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 * Callees:
 *     <none>
 */

int __stdcall ClientNoMemoryPopup()
{
  int v1; // [esp+4h] [ebp-8h] BYREF
  int v2; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  v2 = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(86);
  KeUserModeCallback(86, 0, 0, &v1, &v2);
  EtwTraceEndCallback(86);
  return EnterCrit(0, 1);
}
