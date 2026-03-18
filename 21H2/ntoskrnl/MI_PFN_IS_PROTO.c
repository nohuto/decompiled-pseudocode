/*
 * XREFs of MI_PFN_IS_PROTO @ 0x14033FA90
 * Callers:
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_PFN_IS_PROTO(__int64 a1)
{
  return *(__int64 *)(a1 + 40) < 0;
}
