/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x14027F1AC
 * Callers:
 *     KeCancelTimer2 @ 0x1402754B0 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1402755A0 (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
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
