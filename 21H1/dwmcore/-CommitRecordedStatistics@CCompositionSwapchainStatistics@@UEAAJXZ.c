/*
 * XREFs of ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJXZ @ 0x18020F070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSwapchainStatistics::CommitRecordedStatistics(CCompositionSwapchainStatistics *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 92) && *((_DWORD *)this + 22) )
    *((_BYTE *)this + 92) = 0;
  *((_DWORD *)this + 22) = 0;
  return result;
}
