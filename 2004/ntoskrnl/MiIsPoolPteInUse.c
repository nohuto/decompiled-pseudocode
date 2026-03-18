/*
 * XREFs of MiIsPoolPteInUse @ 0x14032EC94
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1402B4FA0 (MiLinkPoolCommitChain.c)
 *     MiEvictPageTableLock @ 0x14032E85C (MiEvictPageTableLock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPoolPteInUse(__int16 a1)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) == 0 )
    return (a1 & 0x3E0) != 0LL;
  return result;
}
