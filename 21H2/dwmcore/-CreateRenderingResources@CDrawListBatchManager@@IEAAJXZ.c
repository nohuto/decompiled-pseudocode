/*
 * XREFs of ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x180021FEC
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x180021B54 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x1800220D4 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z.c)
 *     ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x18002400C (--0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008EF8C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::CreateRenderingResources(CDrawListBatchManager *this)
{
  __int64 v2; // rax
  bool v3; // zf
  unsigned __int64 v4; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // edi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rcx
  CBatchOptimizer *v12; // rax
  _QWORD *v13; // rsi
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v2 = (__int64)this + 1064;
  v3 = this == 0LL;
  v4 = (unsigned __int64)this - 24;
  v5 = 1088;
  if ( v3 )
    v2 = 1088LL;
  v6 = *(_DWORD *)v2;
  if ( *(int *)v2 < 0 )
  {
    v14 = 100;
    goto LABEL_21;
  }
  v7 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v7 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
  v8 = CDrawListEntryBatch::CSharedDirect3DResources::Create(
         (struct CD3DDevice *)(v4 & -(__int64)(this != 0LL)),
         (struct CDrawListEntryBatch::CSharedDirect3DResources **)this + 15);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x67u, 0LL);
  }
  else if ( CCommonRegistryData::EnablePrimitiveReordering )
  {
    v10 = (__int64)this + 544;
    if ( !this )
      v10 = 568LL;
    if ( !*(_QWORD *)v10 || CCommonRegistryData::UseHWDrawListEntriesOnWARP )
    {
      v12 = (CBatchOptimizer *)DefaultHeap::Alloc(0x1098uLL);
      if ( v12 )
        v12 = CBatchOptimizer::CBatchOptimizer(v12, this);
      v13 = (_QWORD *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v12;
      if ( v13 )
      {
        *v13 = &CBatchOptimizer::`vftable';
        `vector destructor iterator'(v13 + 10, 0x208uLL, 8uLL, (void (*)(void *))SharedStateLayer::~SharedStateLayer);
        operator delete(v13, 0x1098uLL);
        v12 = (CBatchOptimizer *)*((_QWORD *)this + 17);
      }
      if ( !v12 )
      {
        v6 = -2147024882;
        v14 = 112;
LABEL_21:
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, v14, 0LL);
      }
    }
  }
  return v6;
}
