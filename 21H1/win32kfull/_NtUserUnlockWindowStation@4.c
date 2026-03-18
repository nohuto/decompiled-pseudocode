/*
 * XREFs of _NtUserUnlockWindowStation@4 @ 0xAE79A
 * Callers:
 *     <none>
 * Callees:
 *     __UnlockWindowStation@4 @ 0xAE7E4 (__UnlockWindowStation@4.c)
 */

int __stdcall NtUserUnlockWindowStation(int a1)
{
  int v1; // esi
  PVOID Object; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  Object = 0;
  EnterCrit(0, 1);
  if ( (int)ValidateHwinsta(a1, 1, 0, &Object) >= 0 )
  {
    v1 = _UnlockWindowStation(Object);
    ObfDereferenceObject(Object);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
