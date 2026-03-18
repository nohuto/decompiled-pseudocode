/*
 * XREFs of ?Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z @ 0x18003E1F8
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x18003FC68 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CD2DBrush@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1Brush@@@Z @ 0x18003E3DC (--0CD2DBrush@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1Brush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBrush::Create(struct CD2DResourceManager *a1, struct ID2D1Brush *a2, struct CD2DBrush **a3)
{
  CD2DBrush *v6; // rax
  unsigned int v7; // ecx
  CD2DBrush *v8; // rax
  struct CD2DBrush *v9; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  CD2DBrush *v14; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CD2DBrush *)DefaultHeap::Alloc(0x80uLL);
  if ( !v6 )
  {
    v14 = 0LL;
    goto LABEL_8;
  }
  v8 = CD2DBrush::CD2DBrush(v6, a1, a2);
  v14 = v8;
  v9 = v8;
  if ( !v8 )
  {
LABEL_8:
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0xEu, 0LL);
    goto LABEL_5;
  }
  (*(void (__fastcall **)(CD2DBrush *))(*(_QWORD *)v8 + 8LL))(v8);
  v10 = (*(__int64 (__fastcall **)(struct CD2DBrush *))(*(_QWORD *)v9 + 48LL))(v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x10u, 0LL);
  }
  else
  {
    v14 = 0LL;
    *a3 = v9;
  }
LABEL_5:
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v14);
  return v12;
}
