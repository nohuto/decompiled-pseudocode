/*
 * XREFs of ?SetEmitterGeometry@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x180175140
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x180170D50 (--R-$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetEmitterGeometry(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx

  v2 = 0;
  if ( a2 != this[91] )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 138LL)
      || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 100LL)
      || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 57LL)
      || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 124LL) )
    {
      v6 = CResource::RegisterNotifier((CResource *)this, a2);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1B95u, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[91]);
        this[91] = a2;
        v9 = (__int64)this[789];
        this[789] = 0LL;
        if ( v9 )
          std::default_delete<EmitterShapes::CSpawner>::operator()(v8, v9);
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*this + 9))(this, 0LL, 0LL);
      }
    }
    else
    {
      v2 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303421, 0x1B94u, 0LL);
    }
  }
  return v2;
}
