/*
 * XREFs of SepZwLockRegistryKey @ 0x1407D1350
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1403FA310 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
