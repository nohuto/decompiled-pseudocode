/*
 * XREFs of ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x1800220D4
 * Callers:
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x180021FEC (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 * Callees:
 *     ??0CSharedDirect3DResources@CDrawListEntryBatch@@AEAA@XZ @ 0x18002216C (--0CSharedDirect3DResources@CDrawListEntryBatch@@AEAA@XZ.c)
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x18003C908 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall CDrawListEntryBatch::CSharedDirect3DResources::Create(
        struct CD3DDevice *a1,
        struct CDrawListEntryBatch::CSharedDirect3DResources **a2)
{
  CDrawListEntryBatch::CSharedDirect3DResources *v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax
  CDrawListEntryBatch::CSharedDirect3DResources *v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  v4 = (CDrawListEntryBatch::CSharedDirect3DResources *)DefaultHeap::Alloc(0x4E0uLL);
  if ( v4
    && (v6 = CDrawListEntryBatch::CSharedDirect3DResources::CSharedDirect3DResources(v4),
        (v7 = (CDrawListEntryBatch::CSharedDirect3DResources *)v6) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 8));
    v8 = CDrawListEntryBatch::CSharedDirect3DResources::Init(v7, a1);
    v10 = v8;
    if ( v8 >= 0 )
    {
      *a2 = v7;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x19u, 0LL);
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x18u, 0LL);
  }
  return v10;
}
