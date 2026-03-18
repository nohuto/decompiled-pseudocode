/*
 * XREFs of ??1CoordMap@@QEAA@XZ @ 0x18005A684
 * Callers:
 *     ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x18005A654 (--1CNineGridDrawListBrush@@UEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CoordMap::~CoordMap(CoordMap *this)
{
  __int64 v2; // rcx
  CoordMap *v3; // rdx
  __int64 v4; // rax
  CoordMap *v5; // rcx
  __int64 v6; // rax
  CoordMap *v7; // rcx
  __int64 v8; // rax

  v2 = *((_QWORD *)this + 47);
  v3 = (CoordMap *)*((_QWORD *)this + 46);
  v4 = (v2 - (__int64)v3) >> 4;
  if ( v4 )
    *((_QWORD *)this + 47) = v2 - 16 * v4;
  *((_QWORD *)this + 46) = 0LL;
  if ( v3 == (CoordMap *)((char *)this + 392) )
    v3 = 0LL;
  DefaultHeap::Free(v3);
  v5 = (CoordMap *)*((_QWORD *)this + 23);
  v6 = (__int64)(*((_QWORD *)this + 24) - (_QWORD)v5) >> 4;
  if ( v6 )
    *((_QWORD *)this + 24) -= 16 * v6;
  *((_QWORD *)this + 23) = 0LL;
  if ( v5 == (CoordMap *)((char *)this + 208) )
    v5 = 0LL;
  DefaultHeap::Free(v5);
  v7 = *(CoordMap **)this;
  v8 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4;
  if ( v8 )
    *((_QWORD *)this + 1) -= 16 * v8;
  *(_QWORD *)this = 0LL;
  if ( v7 == (CoordMap *)((char *)this + 24) )
    v7 = 0LL;
  DefaultHeap::Free(v7);
}
