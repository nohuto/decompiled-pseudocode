/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x1801E4310
 * Callers:
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801E4870 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180044678 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800446B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800AC334 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C0B90 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(int **a1, __int64 a2)
{
  int RectangleCount; // eax
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rdx
  FastRegion::Internal::CRgnData *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-48h]
  _BYTE v10[8]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]
  _DWORD *v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  RectangleCount = FastRegion::CRegion::GetRectangleCount(a1);
  v5 = *(_DWORD *)(a2 + 24);
  v6 = DynArrayImpl<0>::AddMultiple(a2, 16, RectangleCount, 0LL);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
  FastRegion::Internal::CRgnData::BeginIterator(
    (FastRegion::Internal::CRgnData *)*a1,
    (struct FastRegion::CRegion::Iterator *)v10);
  while ( (unsigned __int64)v12 < v11 )
  {
    DWORD1(v9) = *v12;
    HIDWORD(v9) = v12[2];
    v7 = 2 * v14;
    LODWORD(v9) = *(_DWORD *)(v13 + 4 * v7);
    DWORD2(v9) = *(_DWORD *)(v13 + 4 * v7 + 4);
    v8 = (FastRegion::Internal::CRgnData *)(2LL * v5);
    *(_OWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v8) = v9;
    FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v10);
    ++v5;
  }
}
