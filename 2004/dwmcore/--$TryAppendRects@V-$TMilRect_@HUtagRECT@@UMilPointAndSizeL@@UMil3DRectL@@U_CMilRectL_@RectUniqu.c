/*
 * XREFs of ??$TryAppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18001ED9C
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18006C580 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003F2EC (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180044738 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::TryAppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>(
        FastRegion::CRegion *this,
        int *a2)
{
  unsigned int v2; // edi
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d
  int v6; // esi
  int v7; // r14d
  _DWORD *v9; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v10[18]; // [rsp+40h] [rbp-71h] BYREF

  v2 = 0;
  v9 = v10;
  v10[0] = 0;
  v3 = a2[1];
  v4 = a2[3];
  v5 = *a2;
  v6 = a2[2];
  if ( v3 >= v4 || v5 >= v6 )
  {
    v10[0] = 0;
  }
  else
  {
    v10[0] = 2;
    v10[7] = v5;
    v10[8] = v6;
    v10[1] = v5;
    v10[4] = 16;
    v10[2] = v6;
    v10[3] = v3;
    v10[6] = 16;
    v10[5] = v4;
  }
  v7 = FastRegion::CRegion::Union(this, (const struct CRegion *)&v9);
  if ( v7 < 0 )
    v2 = v7;
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v9);
  return v2;
}
