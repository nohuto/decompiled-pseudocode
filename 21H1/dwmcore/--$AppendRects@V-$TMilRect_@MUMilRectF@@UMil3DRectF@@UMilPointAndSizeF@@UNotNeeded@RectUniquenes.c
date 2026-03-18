/*
 * XREFs of ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180077D20
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180053160 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060B20 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18026A190 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800284CC (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077E4C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        FastRegion::CRegion *this,
        float *a2)
{
  int v2; // r11d
  int v3; // edi
  int v4; // r9d
  int v5; // r10d
  int v6; // eax
  void *lpMem; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v8[18]; // [rsp+38h] [rbp-71h] BYREF
  void *retaddr; // [rsp+108h] [rbp+5Fh]

  v8[0] = 0;
  lpMem = v8;
  v2 = (int)*a2;
  v3 = (int)a2[2];
  v4 = (int)a2[1];
  v5 = (int)a2[3];
  if ( v2 >= v3 || v4 >= v5 )
  {
    v8[0] = 0;
  }
  else
  {
    v8[0] = 2;
    v8[7] = v2;
    v8[8] = v3;
    v8[1] = v2;
    v8[4] = 16;
    v8[2] = v3;
    v8[3] = v4;
    v8[6] = 16;
    v8[5] = v5;
  }
  v6 = FastRegion::CRegion::Union(this, (const struct CRegion *)&lpMem);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
  if ( v8 != lpMem )
    operator delete(lpMem);
}
