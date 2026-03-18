/*
 * XREFs of ?GetInfo@CBufferRealization@@QEBAXPEAUCSM_REALIZATION_INFO@@_N@Z @ 0x1C0007B4C
 * Callers:
 *     ?GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x1C0007990 (-GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBufferRealization::GetInfo(CBufferRealization *this, struct CSM_REALIZATION_INFO *a2, char a3)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 40);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 7);
  if ( a3 )
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 8);
}
