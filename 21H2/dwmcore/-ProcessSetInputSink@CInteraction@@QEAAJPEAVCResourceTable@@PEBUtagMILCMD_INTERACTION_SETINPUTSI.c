/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800E0CA8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800E0D28 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     McTemplateU0pp_EventWriteTransfer @ 0x180180C5C (McTemplateU0pp_EventWriteTransfer.c)
 */

__int64 __fastcall CInteraction::ProcessSetInputSink(CInteraction *this, struct CResourceTable *a2, void **a3)
{
  int updated; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v10; // rbx

  updated = CInteraction::UpdateInputSink(this, a3[1]);
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, updated, 0x17Fu);
  }
  else
  {
    v8 = *((_QWORD *)this + 14);
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 16);
      if ( v10 )
      {
        CVisual::PropagateFlags(v10, 0x10u);
        *(_BYTE *)(v10 + 100) |= 0x40u;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
      McTemplateU0pp_EventWriteTransfer(v6, &EVTDESC_INTERACTION_SET_INPUT_SINK, this, a3[1]);
  }
  return v7;
}
