/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800DB944
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800DB244 (--1CInteraction@@MEAA@XZ.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800DB8DC (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800DB9D0 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x1800DBC28 (--0CInputSinkStruct@@QEAA@XZ.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800DBC7C (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  int v2; // ebx
  CInputSinkStruct **v3; // rsi
  void *v4; // rdi
  CInputSinkStruct *v5; // rax
  CInputSinkStruct *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CInputSinkStruct **)((char *)this + 96);
  v4 = a2;
  if ( !a2 )
  {
    SAFE_DELETE<CInputSinkStruct>((char *)this + 96);
    goto LABEL_8;
  }
  v5 = *v3;
  if ( *v3 )
    goto LABEL_5;
  v6 = (CInputSinkStruct *)DefaultHeap::AllocClear(0x70uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CInputSinkStruct::CInputSinkStruct(v6);
  *v3 = v5;
  if ( v5 )
  {
LABEL_5:
    v8 = CInputSinkStruct::ReplaceInputHandle(v5, v4);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2FEu, 0LL);
    v4 = 0LL;
LABEL_8:
    if ( v2 >= 0 )
      return (unsigned int)v2;
    goto LABEL_13;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x2FAu, 0LL);
LABEL_13:
  if ( v4 )
    NtCloseCompositionInputSink(v4);
  SAFE_DELETE<CInputSinkStruct>(v3);
  return (unsigned int)v2;
}
