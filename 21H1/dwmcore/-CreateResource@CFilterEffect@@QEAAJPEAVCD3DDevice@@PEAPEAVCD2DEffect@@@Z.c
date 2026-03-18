/*
 * XREFs of ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x1801B66E4
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x18000C30C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x18023BF80 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 */

__int64 __fastcall CFilterEffect::CreateResource(CFilterEffect *this, struct CD3DDevice *a2, struct CD2DEffect **a3)
{
  __int64 v3; // rax
  const struct _GUID *v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct CD2DEffect *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v11 = 0LL;
  v6 = (const struct _GUID *)(*(__int64 (__fastcall **)(CFilterEffect *))(v3 + 216))(this);
  v7 = CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)a2 + 16), v6, &v11);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2FEu, 0LL);
    if ( v11 )
      (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    *a3 = v11;
  }
  return v9;
}
