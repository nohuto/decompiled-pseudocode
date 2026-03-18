/*
 * XREFs of BgSetBootGraphicsInformation @ 0x140AB097C
 * Callers:
 *     BgkSetBootGraphicsInformation @ 0x140AB07F4 (BgkSetBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpFwSetBootGraphicsInformation @ 0x14064D750 (BgpFwSetBootGraphicsInformation.c)
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
  if ( (dword_140C0DF90 & 1) != 0 )
    v5 = BgpFwSetBootGraphicsInformation(v4, a2);
  else
    v5 = -1073741823;
  BgpFwReleaseLock();
  return v5;
}
