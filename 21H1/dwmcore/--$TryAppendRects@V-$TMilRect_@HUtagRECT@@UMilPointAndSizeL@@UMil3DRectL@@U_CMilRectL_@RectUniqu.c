/*
 * XREFs of ??$TryAppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18001F49C
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180055150 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800284CC (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077E4C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::TryAppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>(
        FastRegion::CRegion *this,
        int *a2)
{
  unsigned int v2; // edi
  int v3; // r11d
  int v4; // esi
  int v5; // r9d
  int v6; // r10d
  int v7; // r14d
  _DWORD *v9; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v10[18]; // [rsp+40h] [rbp-71h] BYREF

  v2 = 0;
  v9 = v10;
  v10[0] = 0;
  v3 = *a2;
  v4 = a2[2];
  v5 = a2[1];
  v6 = a2[3];
  if ( *a2 >= v4 || v5 >= v6 )
  {
    v10[0] = 0;
  }
  else
  {
    v10[0] = 2;
    v10[7] = v3;
    v10[8] = v4;
    v10[1] = v3;
    v10[4] = 16;
    v10[2] = v4;
    v10[3] = v5;
    v10[6] = 16;
    v10[5] = v6;
  }
  v7 = FastRegion::CRegion::Union(this, (const struct CRegion *)&v9);
  if ( v7 < 0 )
    v2 = v7;
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v9);
  return v2;
}
