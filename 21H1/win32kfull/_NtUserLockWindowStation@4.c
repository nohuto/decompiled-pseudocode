/*
 * XREFs of _NtUserLockWindowStation@4 @ 0xAE400
 * Callers:
 *     <none>
 * Callees:
 *     __LockWindowStation@4 @ 0xAE44A (__LockWindowStation@4.c)
 */

int __stdcall NtUserLockWindowStation(int a1)
{
  int v1; // esi
  PVOID Object; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  Object = 0;
  EnterCrit(0, 1);
  if ( (int)ValidateHwinsta(a1, 1, 0, &Object) >= 0 )
  {
    v1 = _LockWindowStation(Object);
    ObfDereferenceObject(Object);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
