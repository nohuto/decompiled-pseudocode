/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x140242AAC
 * Callers:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x14035B660 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x14035B750 (KeDisableTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 */

bool __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1)
{
  char v2; // al

  KiAcquireKobjectLockSafe(a1);
  v2 = *(_BYTE *)(a1 + 1);
  if ( (v2 & 0x20) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v2 = *(_BYTE *)(a1 + 1);
  }
  return (v2 & 0x20) != 0;
}
