/*
 * XREFs of ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800A5EE8
 * Callers:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180072CD0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072F50 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800A5E8C (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047530 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6118 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>(
        FastRegion::CRegion *this,
        __int64 a2,
        unsigned int a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  unsigned int v8; // esi
  int *v9; // rax
  int v10; // r8d
  int v11; // r10d
  int v12; // r11d
  int v13; // edi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  struct tagRECT v17; // [rsp+20h] [rbp-89h] BYREF
  _DWORD *v18; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v19[18]; // [rsp+38h] [rbp-71h] BYREF
  void *v20[10]; // [rsp+80h] [rbp-29h] BYREF
  void *retaddr; // [rsp+108h] [rbp+5Fh]

  v19[0] = 0;
  v3 = v19;
  v4 = 0;
  v18 = v19;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = v4 + 5;
      if ( a3 < v4 + 5 )
        v8 = a3;
      v9 = (int *)(a2 + 16LL * v4);
      v10 = v9[1];
      v11 = v9[3];
      v12 = *v9;
      v13 = v9[2];
      if ( v10 >= v11 || v12 >= v13 )
      {
        *v3 = 0;
      }
      else
      {
        *v3 = 2;
        v3[7] = v12;
        v3[8] = v13;
        v3[1] = v12;
        v3[4] = 16;
        v3[2] = v13;
        v3[3] = v10;
        v3[6] = 16;
        v3[5] = v11;
      }
      if ( ++v4 < v8 )
      {
        v16 = 16LL * v4 + a2 + 8;
        do
        {
          v17 = *(struct tagRECT *)(v16 - 8);
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)v20, &v17);
          v15 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v18, (const struct CRegion *)v20);
          if ( v15 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v15, retaddr);
          FastRegion::CRegion::FreeMemory(v20);
          ++v4;
          v16 += 16LL;
        }
        while ( v4 < v8 );
      }
      v14 = FastRegion::CRegion::Union(this, (const struct CRegion *)&v18);
      if ( v14 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v14, retaddr);
      if ( v4 >= a3 )
        break;
      v3 = v18;
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v18);
}
