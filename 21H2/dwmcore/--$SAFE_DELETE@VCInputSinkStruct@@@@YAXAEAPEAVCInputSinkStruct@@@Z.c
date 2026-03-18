/*
 * XREFs of ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800E105C
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800E01C4 (--1CInteraction@@MEAA@XZ.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800E0D28 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z @ 0x1800E0FA0 (-SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE<CInputSinkStruct>(CInputSinkStruct **a1)
{
  CInputSinkStruct *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CInputSinkStruct::SetCompositionInputHandle(*a1, 0LL);
    DefaultHeap::Free(v1);
    *a1 = 0LL;
  }
}
