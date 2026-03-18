/*
 * XREFs of ??0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTipPointSource@@I_K@Z @ 0x1801C37CC
 * Callers:
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801C3B30 (-CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComp.c)
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801F0840 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

CSuperWetInkScribble *__fastcall CSuperWetInkScribble::CSuperWetInkScribble(
        CSuperWetInkScribble *this,
        struct IDCompositionDirectInkSuperWetStrokePartner *a2,
        struct CGenericInkTipPointSource *a3,
        int a4,
        unsigned __int64 a5)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CSuperWetInkScribbleBase::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 4) = a5;
  *(_QWORD *)this = &CSuperWetInkScribble::`vftable';
  *((_DWORD *)this + 6) = a4;
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  return this;
}
