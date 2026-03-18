/*
 * XREFs of ??1CDrawListBatchManager@@IEAA@XZ @ 0x1800A4BE0
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800A4D6C (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18003742C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800A3B80 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 */

void __fastcall CDrawListBatchManager::~CDrawListBatchManager(CDrawListEntry **this)
{
  char *v2; // rdi
  CDrawListEntry *v3; // rcx
  CDrawListEntry *v4; // rcx

  CDrawListBatchManager::DestroyDeviceResources((CDrawListBatchManager *)this);
  v2 = (char *)this[22];
  if ( v2 )
  {
    *(_QWORD *)v2 = &CBatchOptimizer::`vftable';
    `vector destructor iterator'(v2 + 80, 520LL, 8LL, (void (__fastcall *)(char *))SharedStateLayer::~SharedStateLayer);
    operator delete(v2);
  }
  v3 = this[21];
  if ( v3 )
    CDrawListEntry::Release((CDrawListEntry *)((char *)v3 + 8));
  v4 = this[20];
  if ( v4 )
    CDrawListEntry::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 15));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 10));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 5));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this);
}
