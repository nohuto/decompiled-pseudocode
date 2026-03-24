/*
 * XREFs of ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180064010
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180063EEC (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800D3828 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800987FC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18009D198 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800C51F4 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

bool __fastcall CSecondaryBitmap::IsRegionValid(_DWORD *a1, int *a2, __int64 a3)
{
  _DWORD *v3; // rsi
  int v5; // r9d
  int v6; // eax
  int v7; // r10d
  int v8; // r11d
  int v9; // edx
  const struct FastRegion::Internal::CRgnData **v10; // r14
  bool v11; // di
  bool v12; // di
  int v14; // eax
  _DWORD *v15; // [rsp+20h] [rbp-60h] BYREF
  _DWORD Mem[3]; // [rsp+28h] [rbp-58h] BYREF
  _DWORD v17[2]; // [rsp+34h] [rbp-4Ch] BYREF
  _DWORD v18[13]; // [rsp+3Ch] [rbp-44h] BYREF
  _BYTE vars0[24]; // [rsp+80h] [rbp+0h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]

  v3 = Mem;
  v15 = Mem;
  if ( a2 )
  {
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    v8 = a2[3];
  }
  else
  {
    v5 = *a1;
    v6 = a1[1];
    v7 = a1[2];
    v8 = a1[3];
  }
  if ( v6 >= v8 || v5 >= v7 )
  {
    v9 = 0;
  }
  else
  {
    v17[0] = v6;
    Mem[1] = v5;
    Mem[2] = v7;
    v18[2] = v5;
    v17[1] = (unsigned int)vars0 - 60 - (unsigned int)v17;
    v9 = 2;
    v18[3] = v7;
    v18[0] = v8;
    v18[1] = (unsigned int)vars0 - 60 - (unsigned int)v18 + 8;
  }
  Mem[0] = v9;
  v10 = (const struct FastRegion::Internal::CRgnData **)(a1 + 4);
  v11 = v9
     && *(_DWORD *)*v10
     && FastRegion::Internal::CRgnData::Intersects((const struct FastRegion::Internal::CRgnData *)Mem, *v10);
  v12 = !v11;
  if ( a3 )
  {
    if ( v12 )
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)a3 = 0;
      return v12;
    }
    v14 = FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v15, (const struct CRegion *)v10);
    if ( v14 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v14, retaddr);
    CRegion::GetBoundingRect((CRegion *)&v15, (struct MilRectU *)a3);
    v3 = v15;
  }
  if ( Mem != v3 )
    operator delete(v3);
  return v12;
}
