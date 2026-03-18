/*
 * XREFs of MmIsExecutivePagingDisabled @ 0x140313790
 * Callers:
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 * Callees:
 *     <none>
 */

_BOOL8 MmIsExecutivePagingDisabled()
{
  return (dword_140D051B4 & 1) != 0;
}
