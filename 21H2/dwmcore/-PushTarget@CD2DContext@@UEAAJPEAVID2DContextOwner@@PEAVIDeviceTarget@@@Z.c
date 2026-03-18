/*
 * XREFs of ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x18007EE30
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18007E9E4 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180268E4C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x180020BF4 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180020C1C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007FAC8 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIDeviceTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x1800809A4 (--0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIDeviceTarget@@PEAUID2D1Bitmap1@@.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180080A78 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD2DContext::PushTarget(CD2DContext *this, struct ID2DContextOwner *a2, struct IDeviceTarget *a3)
{
  char *v3; // rdi
  int v4; // eax
  struct ID2D1PrivateDepthBuffer *v8; // r14
  __int64 v9; // r13
  int v10; // ebx
  char *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  CD2DTarget *v15; // rcx
  CD2DTarget *v16; // rax
  CD2DTarget *v17; // rbp
  unsigned int v18; // eax
  unsigned int v19; // edx
  CD2DTarget **v21; // r15
  _QWORD *v22; // rax
  struct ID2D1Bitmap1 *v23; // rcx
  unsigned int v24; // eax
  CD2DTarget *v25; // r8
  unsigned int v26; // edx
  int v27; // edi
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  struct ID2D1Bitmap1 *v37; // [rsp+70h] [rbp+8h] BYREF
  CD2DTarget *v38; // [rsp+88h] [rbp+20h] BYREF

  v3 = (char *)this + 328;
  v4 = *((_DWORD *)this + 88);
  v37 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( v4 )
    v9 = *(_QWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)(v4 - 1));
  if ( *((_QWORD *)this + 19) )
  {
    v10 = -2003292412;
    v35 = 599;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, v10, v35);
    goto LABEL_16;
  }
  CD2DContext::FlushDrawList(this);
  v10 = *((_DWORD *)this + 268);
  if ( v10 < 0 )
  {
    v35 = 604;
    goto LABEL_42;
  }
  v11 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 1) + 16LL) + 8;
  v12 = (*(__int64 (__fastcall **)(char *, struct ID2D1Bitmap1 **, _QWORD))(*(_QWORD *)v11 + 16LL))(v11, &v37, 0LL);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x25Eu);
    goto LABEL_16;
  }
  v8 = (struct ID2D1PrivateDepthBuffer *)(*(__int64 (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a3 + 48LL))(a3);
  if ( !v9 )
  {
    v21 = (CD2DTarget **)((char *)this + 424);
    v22 = (_QWORD *)*((_QWORD *)this + 53);
    if ( !v22 || (v23 = (struct ID2D1Bitmap1 *)v22[4], v37 != v23) || v8 != (struct ID2D1PrivateDepthBuffer *)v22[5] )
    {
      SAFE_DELETE<CD2DTarget>((CD2DTarget **)this + 53, v14);
      goto LABEL_7;
    }
    *v22 = a2;
    v24 = *((_DWORD *)v3 + 6);
    v25 = *v21;
    v38 = *v21;
    v26 = v24 + 1;
    if ( v24 + 1 < v24 )
    {
      v10 = -2147024362;
      v27 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      if ( v26 <= *((_DWORD *)v3 + 5) )
      {
        v10 = 0;
        *(_QWORD *)(*(_QWORD *)v3 + 8LL * v24) = v25;
        *((_DWORD *)v3 + 6) = v26;
LABEL_27:
        *v21 = 0LL;
        goto LABEL_16;
      }
      v29 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, &v38);
      v27 = v29;
      v10 = v29;
      if ( v29 >= 0 )
        goto LABEL_27;
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0xC0u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x270u);
    goto LABEL_16;
  }
LABEL_7:
  v15 = (CD2DTarget *)DefaultHeap::Alloc(0x50uLL);
  if ( !v15 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v16 = CD2DTarget::CD2DTarget(v15, a2, *((struct CD2DFactory **)this + 22), a3, v37, v8);
  v17 = v16;
  if ( !v16 )
  {
    v10 = -2147024882;
    v35 = 644;
    goto LABEL_42;
  }
  v38 = v16;
  v18 = *((_DWORD *)v3 + 6);
  v19 = v18 + 1;
  if ( v18 + 1 < v18 )
  {
    v10 = -2147024362;
    v31 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v31, 0x289u);
    CD2DTarget::`scalar deleting destructor'(v17);
    goto LABEL_16;
  }
  if ( v19 <= *((_DWORD *)v3 + 5) )
  {
    v10 = 0;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL * v18) = v17;
    *((_DWORD *)v3 + 6) = v19;
    goto LABEL_12;
  }
  v33 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, &v38);
  v31 = v33;
  v10 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v33, 0xC0u);
    goto LABEL_39;
  }
LABEL_12:
  if ( *((_BYTE *)this + 437) )
  {
    if ( v9 )
      *(_BYTE *)(v9 + 73) = 0;
    CD2DTarget::ApplyState(v17, this);
  }
LABEL_16:
  if ( v37 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v8 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v8 + 16LL))(v8);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((char *)this - 16, (unsigned int)v10, 0LL);
}
