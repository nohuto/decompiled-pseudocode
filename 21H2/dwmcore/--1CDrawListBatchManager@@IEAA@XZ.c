/*
 * XREFs of ??1CDrawListBatchManager@@IEAA@XZ @ 0x180021810
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800217BC (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x180022734 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008EF8C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CDrawListBatchManager::~CDrawListBatchManager(CDrawListBatchManager *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  CDrawListBatchManager::DestroyDeviceResources(this);
  v2 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    *v2 = &CBatchOptimizer::`vftable';
    `vector destructor iterator'(v2 + 10, 0x208uLL, 8uLL, (void (*)(void *))SharedStateLayer::~SharedStateLayer);
    operator delete(v2, 0x1098uLL);
  }
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v3 + 8);
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v4);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 80);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 40);
  DynArrayImpl<1>::~DynArrayImpl<1>(this);
}
