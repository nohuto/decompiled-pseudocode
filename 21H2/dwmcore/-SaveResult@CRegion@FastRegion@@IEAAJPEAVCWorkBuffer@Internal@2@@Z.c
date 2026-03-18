/*
 * XREFs of ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18008257C
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180082730 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::SaveResult(
        FastRegion::CRegion **this,
        struct FastRegion::Internal::CWorkBuffer *a2)
{
  int *v2; // rsi
  unsigned int v3; // edi
  int v5; // r9d
  FastRegion::CRegion *v6; // rbx
  int *v7; // r15
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  __int64 v11; // r10
  _DWORD *v12; // r8
  _DWORD *v13; // r11
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r10
  int v20; // ebx

  v2 = (int *)*((_QWORD *)a2 + 1);
  v3 = 0;
  v5 = *v2;
  if ( *v2 )
  {
    if ( (int *)((char *)a2 + 16) == v2 )
    {
      v6 = *this;
      v7 = (int *)(this + 1);
      v8 = v2[2 * v5 + 2] + 8 * v5 - v2[4] - 12 + 8 * (v5 - 1) + 24;
      v9 = 60;
      if ( this + 1 != (FastRegion::CRegion **)*this )
        v9 = *v7;
      if ( v9 < v8 )
      {
        v6 = (FastRegion::CRegion *)DefaultHeap::Alloc(v8);
        if ( !v6 )
          return (unsigned int)-2147024882;
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
        *this = v6;
        *v7 = v8;
        v5 = *v2;
      }
      *(_DWORD *)v6 = v5;
      v10 = 0;
      *((_DWORD *)v6 + 1) = v2[1];
      *((_DWORD *)v6 + 2) = v2[2];
      v11 = (__int64)v2 + v2[4] + 12;
      v12 = (_DWORD *)((char *)v6 + 8 * v5 + 12);
      if ( v5 > 0 )
      {
        v13 = (_DWORD *)((char *)v6 + 12);
        do
        {
          *v13 = *(_DWORD *)((char *)v13 + (char *)v2 - (char *)v6);
          v13 += 2;
          v14 = v10++;
          *((_DWORD *)v6 + 2 * v14 + 4) = (_DWORD)v2
                                        + 8 * v14
                                        + 4 * (((__int64)v12 - v11) >> 2)
                                        + v2[2 * v14 + 4]
                                        - ((_DWORD)v6
                                         + 8 * v14);
        }
        while ( v10 < *(_DWORD *)v6 );
      }
      v15 = (__int64)&v2[2 * *v2 + 1];
      v16 = (unsigned __int64)((int)v15 + *(_DWORD *)(v15 + 4) - v2[4] - ((int)v2 + 12)) >> 2;
      v17 = (int)v16;
      if ( (int)v16 > 0 )
      {
        v18 = v11 - (_QWORD)v12;
        do
        {
          *v12 = *(_DWORD *)((char *)v12 + v18);
          ++v12;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v20 = *(_DWORD *)a2;
      *(_DWORD *)a2 = 0;
      *((_QWORD *)a2 + 1) = (char *)a2 + 16;
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
      *this = (FastRegion::CRegion *)v2;
      *((_DWORD *)this + 2) = v20;
    }
  }
  else
  {
    *(_DWORD *)*this = 0;
  }
  return v3;
}
