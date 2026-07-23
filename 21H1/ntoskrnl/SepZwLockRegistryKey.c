/*
 * XREFs of SepZwLockRegistryKey @ 0x1407BF5F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1403F44B0 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
