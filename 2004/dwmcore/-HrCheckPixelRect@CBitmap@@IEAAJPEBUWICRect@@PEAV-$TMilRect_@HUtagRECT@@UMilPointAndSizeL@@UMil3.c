/*
 * XREFs of ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180092A1C
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180091980 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180092230 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800803D8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180092D04 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180092D88 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall CBitmap::HrCheckPixelRect(__int64 a1, int *a2, __int64 a3)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r8d
  unsigned int v10; // r8d
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v16; // [rsp+20h] [rbp-38h]
  _DWORD v17[3]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 176);
  v4 = *(_DWORD *)(a1 + 180);
  *(_QWORD *)a3 = 0LL;
  v6 = 0;
  *(_DWORD *)(a3 + 8) = v3;
  *(_DWORD *)(a3 + 12) = v4;
  if ( !a2 )
    return v6;
  v7 = *a2;
  v8 = (unsigned int)a2[1];
  v18 = 0;
  v17[0] = v7;
  v17[1] = v8;
  if ( v7 < 0 )
  {
    v16 = 628;
LABEL_22:
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, v16, 0LL);
    return v6;
  }
  v9 = a2[2];
  if ( v9 < 0 )
  {
    v16 = 629;
    goto LABEL_22;
  }
  v10 = v7 + v9;
  if ( v10 < v7 )
  {
    v16 = 630;
    goto LABEL_22;
  }
  if ( v10 > 0x7FFFFFFF )
  {
    v16 = 631;
    goto LABEL_22;
  }
  v17[2] = v10;
  if ( (int)v8 < 0 )
  {
    v16 = 633;
    goto LABEL_22;
  }
  v11 = a2[3];
  if ( v11 < 0 )
  {
    v16 = 634;
    goto LABEL_22;
  }
  v12 = v8 + v11;
  if ( v12 < (unsigned int)v8 )
  {
    v16 = 635;
    goto LABEL_22;
  }
  if ( v12 > 0x7FFFFFFF )
  {
    v16 = 636;
    goto LABEL_22;
  }
  v18 = v12;
  TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a3, v17);
  if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(v17)
    && (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(
                          v17,
                          v14,
                          v13,
                          v14) )
  {
    return v6;
  }
  return 2147942487LL;
}
