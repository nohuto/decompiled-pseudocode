/*
 * XREFs of MiShouldLockPteDirectly @ 0x1402F2EBC
 * Callers:
 *     MiIsPageTableLocked @ 0x1402F2A1C (MiIsPageTableLocked.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402F2CE8 (MiUnlockNestedPageTableWritePte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiShouldLockPteDirectly(__int64 a1, unsigned __int64 a2)
{
  return (*(_BYTE *)(a1 + 184) & 7) == 0 || a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL;
}
