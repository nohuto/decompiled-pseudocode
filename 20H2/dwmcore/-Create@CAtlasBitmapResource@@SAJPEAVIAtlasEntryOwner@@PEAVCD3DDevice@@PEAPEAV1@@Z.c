/*
 * XREFs of ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x180207984
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180207334 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z @ 0x1802077DC (--0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z.c)
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18024901C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 */

__int64 __fastcall CAtlasBitmapResource::Create(
        struct IAtlasEntryOwner *a1,
        struct CD3DDevice *a2,
        struct CAtlasBitmapResource **a3)
{
  CAtlasBitmapResource *v6; // rax
  __int64 v7; // rcx
  struct CAtlasBitmapResource *v8; // rbx
  int GradientStrip; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  struct CAtlasBitmapResource *v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = (CAtlasBitmapResource *)DefaultHeap::Alloc(0x78uLL);
  if ( v6 )
    v8 = CAtlasBitmapResource::CAtlasBitmapResource(v6, a1);
  else
    v8 = 0LL;
  v13 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CAtlasBitmapResource *))(*(_QWORD *)v8 + 8LL))(v8);
    GradientStrip = CAtlasManager::AllocateGradientStrip(
                      (CAtlasManager *)(((unsigned __int64)a2 + 560) & -(__int64)(a2 != 0LL)),
                      (struct CAtlasBitmapResource *)((char *)v8 + 48));
    v11 = GradientStrip;
    if ( GradientStrip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, GradientStrip, 0x19u, 0LL);
    }
    else
    {
      v13 = 0LL;
      *a3 = v8;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v11;
}
