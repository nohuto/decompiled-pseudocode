/*
 * XREFs of ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x180062F50
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180062434 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180064188 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007B998 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18007BD08 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIDeviceTarget@@@Z @ 0x18007BE08 (-QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800AF5F8 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800AF624 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x1800B1470 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIDeviceTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x1800C9D7C (--0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIDeviceTarget@@PEAUID2D1Bitmap1@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PushTarget(CD2DContext *this, struct ID2DContextOwner *a2, struct IDeviceTarget *a3)
{
  char *v3; // rsi
  int v4; // eax
  struct ID2D1PrivateDepthBuffer *v5; // r15
  CD2DTarget *v6; // rbp
  __int64 v7; // r13
  struct ID2DContextOwner *v9; // r14
  CD2DContext *v10; // rdi
  __int64 v11; // rdx
  int v12; // ebx
  char *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  CD2DTarget **v16; // r14
  struct ID2DContextOwner **v17; // rdx
  struct ID2D1Bitmap1 *v18; // rcx
  unsigned int v19; // eax
  CD2DTarget *v20; // r8
  unsigned int v21; // edx
  CD2DTarget *v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // r9d
  int v32; // eax
  int v33; // esi
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // [rsp+20h] [rbp-48h]
  struct ID2D1Bitmap1 *v38; // [rsp+70h] [rbp+8h] BYREF
  struct ID2DContextOwner *v39; // [rsp+78h] [rbp+10h]
  CD2DTarget *v40; // [rsp+88h] [rbp+20h] BYREF

  v39 = a2;
  v38 = 0LL;
  v3 = (char *)this + 376;
  v4 = *((_DWORD *)this + 100);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a2;
  v10 = this;
  if ( v4 )
    v7 = *(_QWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)(v4 - 1));
  if ( *((_QWORD *)this + 24) )
  {
    v12 = -2003292412;
    v37 = 600;
LABEL_41:
    v31 = v12;
LABEL_43:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v31, v37, 0LL);
    goto LABEL_15;
  }
  v11 = *((_QWORD *)this + 22);
  if ( v11 )
  {
    this = (CD2DContext *)*((_QWORD *)this + 23);
    if ( this )
    {
      CBatchOptimizer::Flush(this);
      v11 = *((_QWORD *)v10 + 22);
    }
    *(_DWORD *)(v11 + 52) = *((_DWORD *)v10 + 8);
    v26 = *((_QWORD *)v10 + 22);
    *((_QWORD *)v10 + 22) = 0LL;
    if ( v26 )
    {
      v27 = *((_DWORD *)v3 + 6);
      v28 = 0LL;
      if ( v27 )
        v28 = *(_QWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)(v27 - 1));
      CDrawListEntryBatch::QueueForRender((CDrawListEntryBatch *)v26, *(struct IDeviceTarget **)(v28 + 24));
      v29 = CD2DContext::DrawCustomCallbackRendererInternal(v10, (struct ID2D1PrivateCompositorRenderer *)v26);
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x225u, 0LL);
      CDrawListEntry::Release((CDrawListEntry *)(v26 + 8));
    }
  }
  v12 = *((_DWORD *)v10 + 278);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v12, 0x25Du, 0LL);
    goto LABEL_55;
  }
  v13 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 1) + 16LL) + 8;
  v14 = (*(__int64 (__fastcall **)(char *, struct ID2D1Bitmap1 **, _QWORD))(*(_QWORD *)v13 + 16LL))(v13, &v38, 0LL);
  v12 = v14;
  if ( v14 < 0 )
  {
    v31 = v14;
    v37 = 607;
    goto LABEL_43;
  }
  v15 = (*(__int64 (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a3 + 48LL))(a3);
  v5 = (struct ID2D1PrivateDepthBuffer *)v15;
  if ( !v7 )
  {
    v16 = (CD2DTarget **)((char *)v10 + 472);
    v17 = (struct ID2DContextOwner **)*((_QWORD *)v10 + 59);
    if ( v17 )
    {
      v18 = v17[4];
      if ( v38 == v18 && (struct ID2DContextOwner *)v15 == v17[5] )
      {
        *v17 = v39;
        v19 = *((_DWORD *)v3 + 6);
        v20 = *v16;
        v40 = *v16;
        v21 = v19 + 1;
        if ( v19 + 1 < v19 )
        {
          v12 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else
        {
          if ( v21 <= *((_DWORD *)v3 + 5) )
          {
            v12 = 0;
            *(_QWORD *)(*(_QWORD *)v3 + 8LL * v19) = v20;
            *((_DWORD *)v3 + 6) = v21;
LABEL_14:
            *v16 = 0LL;
            goto LABEL_15;
          }
          v32 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, &v40);
          v12 = v32;
          if ( v32 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v32, 0xC0u, 0LL);
        }
        if ( v12 >= 0 )
          goto LABEL_14;
        v37 = 625;
        goto LABEL_41;
      }
    }
    SAFE_DELETE<CD2DTarget>((char *)v10 + 472);
    v9 = v39;
  }
  v23 = (CD2DTarget *)operator new(0x50uLL);
  if ( v23 )
    v6 = CD2DTarget::CD2DTarget(v23, v9, *((struct CD2DFactory **)v10 + 27), a3, v38, v5);
  if ( !v6 )
  {
    v12 = -2147024882;
    v37 = 645;
    goto LABEL_41;
  }
  v24 = *((_DWORD *)v3 + 6);
  v40 = v6;
  v25 = v24 + 1;
  if ( v24 + 1 < v24 )
  {
    v33 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v25 <= *((_DWORD *)v3 + 5) )
    {
      v12 = 0;
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * v24) = v6;
      *((_DWORD *)v3 + 6) = v25;
      goto LABEL_27;
    }
    v35 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, &v40);
    v33 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v35, 0xC0u, 0LL);
  }
  v12 = v33;
  if ( v33 >= 0 )
  {
LABEL_27:
    if ( *((_BYTE *)v10 + 485) )
    {
      if ( v7 )
        *(_BYTE *)(v7 + 48) = 0;
      CD2DTarget::ApplyState(v6, v10);
    }
    goto LABEL_15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x28Au, 0LL);
LABEL_55:
  if ( v6 )
    CD2DTarget::`scalar deleting destructor'(v6, v36);
LABEL_15:
  if ( v38 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v5 + 16LL))(v5);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((char *)v10 - 16, (unsigned int)v12, 0LL);
}
