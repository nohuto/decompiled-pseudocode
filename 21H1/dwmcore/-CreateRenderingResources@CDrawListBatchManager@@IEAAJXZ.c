/*
 * XREFs of ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1800A1AC8
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1800A17D0 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18003742C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x1800A2128 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z.c)
 *     ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x1800A5738 (--0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::CreateRenderingResources(CDrawListBatchManager *this)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  CDrawListEntry *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  CBatchOptimizer *v10; // rax
  char *v11; // rsi
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v1 = (__int64)this - 24;
  if ( !this )
    v1 = -24LL;
  v3 = (__int64)this + 1104;
  v4 = 1128LL;
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
    v11 = (char *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v10;
    if ( v11 )
    {
      *(_QWORD *)v11 = &CBatchOptimizer::`vftable';
      `vector destructor iterator'(
        v11 + 80,
        520LL,
        8LL,
        (void (__fastcall *)(char *))SharedStateLayer::~SharedStateLayer);
      operator delete(v11);
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
