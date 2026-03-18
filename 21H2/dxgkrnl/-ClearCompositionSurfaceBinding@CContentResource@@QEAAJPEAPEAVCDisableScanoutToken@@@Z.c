/*
 * XREFs of ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x1C0081084
 * Callers:
 *     ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x1C007EA24 (-RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ??1CContentResource@@UEAA@XZ @ 0x1C0080FEC (--1CContentResource@@UEAA@XZ.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C008131C (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     ?Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z @ 0x1C0082974 (-Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CContentResource::ClearCompositionSurfaceBinding(
        CContentResource *this,
        struct CDisableScanoutToken **a2)
{
  int v2; // edi
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v6; // rbp

  v2 = 0;
  if ( *((_QWORD *)this + 6) )
  {
    Global = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(CContentResource *, _QWORD))(*((_QWORD *)Global + 38073) + 280LL))(
      this,
      *(_QWORD *)(*((_QWORD *)this + 6) + 24LL));
    v6 = *((_QWORD *)this + 7);
    v2 = CContentResource::RebindCompositionSurfaceBuffer(this, 0LL);
    if ( v2 >= 0 )
      v2 = CDisableScanoutToken::Create(*((struct CompositionSurfaceObject **)this + 6), v6, a2);
    ObfDereferenceObject(*((PVOID *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  return (unsigned int)v2;
}
