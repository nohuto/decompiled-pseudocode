/*
 * XREFs of SepZwLockRegistryKey @ 0x1407C2B50
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1403F5740 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
