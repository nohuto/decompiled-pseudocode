/*
 * XREFs of ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x1802044F0
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x180204608 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180277950 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 */

__int64 __fastcall CFilterEffect::CreateResource(CFilterEffect *this, struct CD3DDevice *a2, struct CD2DEffect **a3)
{
  const struct _GUID *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct CD2DEffect *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = (const struct _GUID *)(*(__int64 (__fastcall **)(CFilterEffect *))(*(_QWORD *)this + 200LL))(this);
  v6 = CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)a2 + 16), v5, &v10);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x2FEu);
    if ( v10 )
      (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    *a3 = v10;
  }
  return v8;
}
