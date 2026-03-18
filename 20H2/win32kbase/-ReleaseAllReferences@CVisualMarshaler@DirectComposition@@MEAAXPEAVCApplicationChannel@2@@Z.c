/*
 * XREFs of ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0096640
 * Callers:
 *     ?ReleaseAllReferences@CLayerVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0096530 (-ReleaseAllReferences@CLayerVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CHostVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0096580 (-ReleaseAllReferences@CHostVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CSpriteVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00965D0 (-ReleaseAllReferences@CSpriteVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@.c)
 *     ?ReleaseAllReferences@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01D6750 (-ReleaseAllReferences@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationCh.c)
 *     ?ReleaseAllReferences@CSceneVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01D6A50 (-ReleaseAllReferences@CSceneVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CTextVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01D6B10 (-ReleaseAllReferences@CTextVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CShapeVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E0140 (-ReleaseAllReferences@CShapeVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CCursorVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E7370 (-ReleaseAllReferences@CCursorVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F24C0 (-ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplication.c)
 *     ?ReleaseAllReferences@CCrossChannelParentVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F2510 (-ReleaseAllReferences@CCrossChannelParentVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicatio.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00599C4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00968D8 (-Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  __int64 v11; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 21);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 21) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 17) = 0LL;
  }
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 18);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 18) = 0LL;
  }
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 19);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    *((_QWORD *)this + 19) = 0LL;
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 28);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
    *((_QWORD *)this + 28) = 0LL;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 20);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 20) = 0LL;
  }
  v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 27);
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    *((_QWORD *)this + 27) = 0LL;
  }
  if ( *((_QWORD *)this + 38) )
    DirectComposition::CResourceMarshalerArray::Clear((DirectComposition::CVisualMarshaler *)((char *)this + 296), a2);
  if ( *((_QWORD *)this + 41) )
    DirectComposition::CResourceMarshalerArray::Clear((DirectComposition::CVisualMarshaler *)((char *)this + 320), a2);
  v11 = *(_QWORD *)this;
  v12 = 0;
  (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, char *))(v11 + 240))(
    this,
    a2,
    &v12);
}
