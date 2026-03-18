/*
 * XREFs of _xxxClientThreadSetup@0 @ 0x9C45E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall xxxClientThreadSetup()
{
  int v0; // esi
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  v3 = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(84);
  v0 = KeUserModeCallback(84, 0, 0, &v2, &v3);
  EtwTraceEndCallback(84);
  EnterCrit(0, 1);
  return v0;
}
