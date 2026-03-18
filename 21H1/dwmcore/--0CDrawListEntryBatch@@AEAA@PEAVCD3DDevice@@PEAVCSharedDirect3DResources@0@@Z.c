/*
 * XREFs of ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z @ 0x1800A1F3C
 * Callers:
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAPEAVCDrawListEntryBatch@@@Z @ 0x1800A1DC8 (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAPEAVCDrawListEntryBatch@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

CDrawListEntryBatch *__fastcall CDrawListEntryBatch::CDrawListEntryBatch(
        CDrawListEntryBatch *this,
        struct CD3DDevice *a2,
        struct CDrawListEntryBatch::CSharedDirect3DResources *a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax

  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CDrawListEntryBatch::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CDrawListEntryBatch::`vftable'{for `CMILRefCountBase'};
  *((_DWORD *)this + 12) = -1;
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 19) = 1065353216;
  *((_QWORD *)this + 10) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v4 = (_QWORD *)((char *)this + 88);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v5[1] = 0LL;
  *v4 = v5;
  *v5 = v4;
  return this;
}
