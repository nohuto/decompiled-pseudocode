/*
 * XREFs of ?SetOrAppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x180173894
 * Callers:
 *     ?AppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x18016FBAC (-AppendUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCComposi.c)
 *     ?SetUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x1801752A4 (-SetUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCCompositio.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180098DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18009DCF8 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18016A6F0 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 *     ??$insert@PEAPEAVCCompositionTextLine@@X@?$vector@PEAVCCompositionTextLine@@V?$allocator@PEAVCCompositionTextLine@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@PEAPEAVCCompositionTextLine@@1@Z @ 0x18016B410 (--$insert@PEAPEAVCCompositionTextLine@@X@-$vector@PEAVCCompositionTextLine@@V-$allocator@PEAVCCo.c)
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendUnderlines(
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x200Au, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>(this, (__int64)this + 664);
    std::vector<CCompositionTextLine *>::insert<CCompositionTextLine * *,void>(
      (_QWORD *)this + 83,
      &v10,
      *((char **)this + 84),
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    CResource::NotifyOnChanged(*((_QWORD *)this + 31), 0, 0LL);
  }
  return v8;
}
