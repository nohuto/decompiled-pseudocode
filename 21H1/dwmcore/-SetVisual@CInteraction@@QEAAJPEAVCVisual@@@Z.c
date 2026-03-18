/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800DBE50
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x18007D530 (-Release@CVisual@@UEAAKXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DBD48 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180093288 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800975C8 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x18015A820 (McTemplateU0xx_EventWriteTransfer.c)
 */

__int64 __fastcall CInteraction::SetVisual(CInteraction *this, struct CVisual *a2)
{
  __int64 v2; // rbx
  struct CWeakResourceReference **v3; // rsi
  __int64 v4; // rax
  unsigned int v7; // edi
  struct CVisual *v8; // rax
  int v9; // eax

  v2 = 0LL;
  v3 = (struct CWeakResourceReference **)((char *)this + 104);
  v4 = *((_QWORD *)this + 13);
  v7 = 0;
  if ( v4 )
    v8 = *(struct CVisual **)(v4 + 16);
  else
    v8 = 0LL;
  if ( a2 != v8
    && (ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 13), a2)
    && (v9 = CWeakReference<CVisual>::Create(a2, v3), v7 = v9, v9 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v9, 0xC9u, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
  {
    if ( *v3 )
      v2 = *((_QWORD *)*v3 + 2);
    McTemplateU0xx_EventWriteTransfer(this, &INTERACTION_VISUAL_UPDATE, (char *)this + 8, v2);
  }
  return v7;
}
