/*
 * XREFs of ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x180202608
 * Callers:
 *     ?SetRoot@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z @ 0x1801A5550 (-SetRoot@-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800471B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x18023E484 (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x180252AE8 (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 */

__int64 __fastcall CSceneVisual::OnRootChanged(CSceneVisual *this)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  CSceneWorld *v4; // rax
  __int64 v5; // rcx
  CSceneWorld *v6; // rax
  struct CContent *v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  CSceneNode *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 91);
  if ( !v1 )
  {
    v14 = CVisual::SetContent((struct CResource **)this, 0LL);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x31u);
      return v10;
    }
    goto LABEL_14;
  }
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
    goto LABEL_7;
  v4 = (CSceneWorld *)DefaultHeap::AllocClear(0xD0uLL);
  if ( !v4 )
  {
    v17 = 0LL;
    goto LABEL_11;
  }
  v6 = CSceneWorld::CSceneWorld(v4, *((struct CComposition **)this + 2), this);
  v17 = (__int64)v6;
  v7 = v6;
  if ( !v6 )
  {
LABEL_11:
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2147024882, 0x24u);
    goto LABEL_12;
  }
  (*(void (__fastcall **)(CSceneWorld *))(*(_QWORD *)v6 + 8LL))(v6);
  v8 = CVisual::SetContent((struct CResource **)this, v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x26u);
LABEL_12:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
    return v10;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
  v3 = *((_QWORD *)this + 32);
  if ( !v3 )
  {
LABEL_14:
    (*(void (__fastcall **)(CSceneVisual *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
    return 0;
  }
LABEL_7:
  v11 = *(CSceneNode **)(v3 + 96);
  v17 = v1;
  v12 = CSceneNode::SetChildren(v11);
  v10 = v12;
  if ( v12 >= 0 )
    goto LABEL_14;
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x2Cu);
  return v10;
}
