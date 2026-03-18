/*
 * XREFs of ?RecordCompositionMode@CFlipExSwapchainStatistics@@UEAA_NU_LUID@@W4BufferCompositionMode@@@Z @ 0x18001D2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipExSwapchainStatistics::RecordCompositionMode(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == *(_DWORD *)(a1 + 16) )
    return 0;
  *(_DWORD *)(a1 + 16) = a3;
  return 1;
}
