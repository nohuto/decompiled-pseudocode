/*
 * XREFs of ?CommitRecordedStatistics@CFlipExSwapchainStatistics@@UEAAJXZ @ 0x1800218D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CFlipExSwapchainStatistics::CommitRecordedStatistics(CFlipExSwapchainStatistics *this)
{
  unsigned int v1; // edi
  int v2; // eax
  unsigned int v3; // ecx
  int v5; // ebx
  unsigned int v6; // ecx

  v1 = 0;
  v2 = NtSetCompositionSurfaceBufferUsage(
         *(_QWORD *)(*((_QWORD *)this + 1) + 32LL),
         *((_QWORD *)this + 1) + 136LL,
         *((unsigned int *)this + 4),
         *((unsigned int *)this + 5));
  if ( v2 < 0 )
  {
    v5 = v2 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2 | 0x10000000, 0x9Eu, 0LL);
    if ( v5 < 0 )
    {
      v1 = v5;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x59u, 0LL);
    }
  }
  return v1;
}
