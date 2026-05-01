/*
 * XREFs of ?ShouldSwitchToDesktop@DelayedTileActivationCallSite@@UEAAJXZ @ 0x1803CF810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DelayedTileActivationCallSite::ShouldSwitchToDesktop(DelayedTileActivationCallSite *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_BYTE *)this + 29) || !*((_BYTE *)this + 28) )
    return 1LL;
  return result;
}
