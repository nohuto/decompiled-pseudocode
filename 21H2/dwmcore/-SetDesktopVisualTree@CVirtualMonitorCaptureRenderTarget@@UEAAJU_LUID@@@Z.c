/*
 * XREFs of ?SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJU_LUID@@@Z @ 0x1801C6140
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x180025294 (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::SetDesktopVisualTree(
        CVirtualMonitorCaptureRenderTarget *this,
        struct _LUID a2)
{
  __int64 *v2; // r14
  struct CVisualTree **v3; // rdi
  CResource *v6; // rcx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, struct _LUID, struct CVisualTree **); // rbp
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  v2 = (__int64 *)*((_QWORD *)this + 2);
  v3 = (struct CVisualTree **)((char *)this + 2056);
  v6 = (CResource *)*((_QWORD *)this + 257);
  v7 = *v2;
  *v3 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, struct _LUID, struct CVisualTree **))(v7 + 56);
  if ( v6 )
    CResource::InternalRelease(v6);
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v8)(v2, a2, v3);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x25u);
  else
    CRenderTarget::SetVisualTree(this, *v3);
  return v11;
}
