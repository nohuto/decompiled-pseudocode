/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x14027FEE0
 * Callers:
 *     KeSetTimer2 @ 0x14022C550 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x14027FB40 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x14027FC30 (KeDisableTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 */

bool __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al

  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, a4);
  v5 = *(_BYTE *)(a1 + 1);
  if ( (v5 & 0x20) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v5 = *(_BYTE *)(a1 + 1);
  }
  return (v5 & 0x20) != 0;
}
