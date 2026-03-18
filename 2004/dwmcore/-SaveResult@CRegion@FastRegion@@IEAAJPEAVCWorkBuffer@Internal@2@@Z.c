/*
 * XREFs of ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180043640
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18004011C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041B60 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180041D40 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800430D0 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180044738 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall FastRegion::CRegion::SaveResult(
        FastRegion::CRegion *this,
        struct FastRegion::Internal::CWorkBuffer *a2)
{
  int *v2; // rdi
  int v4; // r8d
  int *v5; // r10
  int v6; // ebx
  int *v7; // r14
  int v8; // eax
  int v9; // esi
  __int64 v10; // r9
  int *v11; // rcx
  int v12; // r14d
  _DWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  void *v20; // r15
  int v21; // ebx

  v2 = (int *)*((_QWORD *)a2 + 1);
  v4 = *v2;
  if ( !*v2 )
  {
    **(_DWORD **)this = 0;
    return 0LL;
  }
  if ( (int *)((char *)a2 + 16) != v2 )
  {
    v21 = *(_DWORD *)a2;
    *(_DWORD *)a2 = 0;
    *((_QWORD *)a2 + 1) = (char *)a2 + 16;
    FastRegion::CRegion::FreeMemory(this);
    *((_DWORD *)this + 2) = v21;
    result = 0LL;
    *(_QWORD *)this = v2;
    return result;
  }
  v5 = *(int **)this;
  v6 = v2[2 * v4 + 2] + 8 * v4 - v2[4] - 12 + 8 * (v4 - 1) + 24;
  v7 = (int *)((char *)this + 8);
  v8 = 60;
  if ( (FastRegion::CRegion *)((char *)this + 8) != *(FastRegion::CRegion **)this )
    v8 = *v7;
  if ( v8 < v6 )
  {
    v20 = DefaultHeap::Alloc(v6);
    if ( !v20 )
      return 2147942414LL;
    FastRegion::CRegion::FreeMemory(this);
    *(_QWORD *)this = v20;
    *v7 = v6;
    v5 = *(int **)this;
    v4 = *v2;
  }
  *v5 = v4;
  v9 = 0;
  v5[1] = v2[1];
  v5[2] = v2[2];
  v10 = (__int64)v2 + v2[4] + 12;
  v11 = &v5[2 * v4 + 3];
  if ( v4 > 0 )
  {
    v12 = 4 * (((char *)&v5[2 * v4] - ((char *)v2 + v2[4])) >> 2);
    v13 = v5 + 3;
    do
    {
      *v13 = *(_DWORD *)((char *)v13 + (char *)v2 - (char *)v5);
      v13 += 2;
      v14 = v9++;
      v5[2 * v14 + 4] = (_DWORD)v2 + 8 * v14 + v12 + v2[2 * v14 + 4] - ((_DWORD)v5 + 8 * v14);
    }
    while ( v9 < *v5 );
  }
  v15 = (__int64)&v2[2 * *v2 + 1];
  v16 = (unsigned __int64)((int)v15 + *(_DWORD *)(v15 + 4) - v2[4] - ((int)v2 + 12)) >> 2;
  v17 = (int)v16;
  if ( (int)v16 > 0 )
  {
    v18 = v10 - (_QWORD)v11;
    do
    {
      *v11 = *(int *)((char *)v11 + v18);
      ++v11;
      --v17;
    }
    while ( v17 );
  }
  return 0LL;
}
