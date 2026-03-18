/*
 * XREFs of ?NeedsPresent@CFrameInfo@@QEBA_NXZ @ 0x180157E98
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18005BFE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFrameInfo::NeedsPresent(CFrameInfo *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 136) )
    return *((_BYTE *)this + 137) == 0;
  return result;
}
