/*
 * XREFs of ?IsInParallelMode@CPartitionVerticalBlankScheduler@@UEBA_NXZ @ 0x180154100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CPartitionVerticalBlankScheduler::IsInParallelMode(CPartitionVerticalBlankScheduler *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 2794) || *((_DWORD *)this + 2795) )
    return 1;
  return result;
}
