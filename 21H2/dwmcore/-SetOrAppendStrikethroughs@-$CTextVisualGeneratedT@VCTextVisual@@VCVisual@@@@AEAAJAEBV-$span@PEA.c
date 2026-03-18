/*
 * XREFs of ?SetOrAppendStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x1801A40CC
 * Callers:
 *     ?AppendStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x18019FC68 (-AppendStrikethroughs@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCCom.c)
 *     ?SetStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x1801A5844 (-SetStrikethroughs@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCCompos.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180046E80 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019A7F4 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 *     ??$insert@PEAPEAVCCompositionTextLine@@$0A@@?$vector@PEAVCCompositionTextLine@@V?$allocator@PEAVCCompositionTextLine@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@PEAPEAVCCompositionTextLine@@1@Z @ 0x18019BF6C (--$insert@PEAPEAVCCompositionTextLine@@$0A@@-$vector@PEAVCCompositionTextLine@@V-$allocator@PEAV.c)
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendStrikethroughs(
        CResource *this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v6 = CResource::RegisterNNotifiersInternal(this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x205Fu);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>(this, (struct CResource ***)this + 94);
    std::vector<CCompositionTextLine *>::insert<CCompositionTextLine * *,0>(
      (_QWORD *)this + 94,
      &v10,
      *((_BYTE **)this + 95),
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    CResource::NotifyOnChanged(*((_QWORD *)this + 32), 0, 0LL);
  }
  return v8;
}
