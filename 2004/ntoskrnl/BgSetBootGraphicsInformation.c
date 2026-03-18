/*
 * XREFs of BgSetBootGraphicsInformation @ 0x1409F3684
 * Callers:
 *     BgkSetBootGraphicsInformation @ 0x1409F34C4 (BgkSetBootGraphicsInformation.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140228560 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     BgpFwSetBootGraphicsInformation @ 0x1405BEFE0 (BgpFwSetBootGraphicsInformation.c)
 */

__int64 __fastcall BgSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 )
    return 3221225485LL;
  BgpFwAcquireLock();
  if ( (dword_140C13310 & 1) != 0 )
    v5 = BgpFwSetBootGraphicsInformation(v4, a2);
  else
    v5 = -1073741823;
  BgpFwReleaseLock();
  return v5;
}
