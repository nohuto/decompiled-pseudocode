/*
 * XREFs of ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x18002B070
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x18002AD78 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x18002A14C (--0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z.c)
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x18002B570 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800520D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180094910 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::CreateRenderingResources(CDrawListBatchManager *this)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  CDrawListEntry *v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  CBatchOptimizer *v10; // rax
  _QWORD *v11; // rsi
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v1 = (__int64)this - 24;
  if ( !this )
    v1 = -24LL;
  v3 = (__int64)this + 1104;
  v4 = 1128;
  if ( !this )
    v3 = 1128LL;
  v5 = *(_DWORD *)v3;
  if ( *(int *)v3 < 0 )
  {
    v12 = 100;
    goto LABEL_21;
  }
  v6 = (CDrawListEntry *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
  if ( v6 )
    CDrawListEntry::Release(v6);
  v7 = CDrawListEntryBatch::CSharedDirect3DResources::Create(
         (struct CD3DDevice *)(v1 & -(__int64)(this != 0LL)),
         (struct CDrawListEntryBatch::CSharedDirect3DResources **)this + 20);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x67u, 0LL);
  }
  else if ( CCommonRegistryData::EnablePrimitiveReordering
         && (!*(_QWORD *)((v1 & -(__int64)(this != 0LL)) + 0x260) || CCommonRegistryData::UseHWDrawListEntriesOnWARP) )
  {
    v10 = (CBatchOptimizer *)DefaultHeap::Alloc(0x1098uLL);
    if ( v10 )
      v10 = CBatchOptimizer::CBatchOptimizer(v10, this);
    v11 = (_QWORD *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v10;
    if ( v11 )
    {
      *v11 = &CBatchOptimizer::`vftable';
      `vector destructor iterator'(v11 + 10, 0x208uLL, 8uLL, (void (*)(void *))SharedStateLayer::~SharedStateLayer);
      operator delete(v11, 0x1098uLL);
      v10 = (CBatchOptimizer *)*((_QWORD *)this + 22);
    }
    if ( !v10 )
    {
      v5 = -2147024882;
      v12 = 113;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v5, v12, 0LL);
    }
  }
  return v5;
}
