/*
 * XREFs of ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x1803A14E4
 * Callers:
 *     ?GetThumbnailLocation@CSwitchItemElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1803A08D0 (-GetThumbnailLocation@CSwitchItemElement@@UEAA-AUCRect@Geometry@@XZ.c)
 *     ?HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1803A09A0 (-HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1803A1AC0 (-v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboard.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180012934 (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18008E5A6 (GetThreadUILanguage_0.c)
 *     ?_CalcThumbnailRect@CSwitchItemElement@@IEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1803A1318 (-_CalcThumbnailRect@CSwitchItemElement@@IEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

void __fastcall CSwitchItemElement::_GetLayoutRects(
        CSwitchItemElement *this,
        struct Geometry::CRect *a2,
        struct Geometry::CRect *a3,
        struct Geometry::CRect *a4)
{
  int v5; // ebx
  int v9; // r9d
  int v10; // r10d
  int v11; // r13d
  int v12; // edx
  int v13; // eax
  int v14; // r12d
  int v15; // edi
  unsigned int v16; // ecx
  int v17; // eax
  LANGID ThreadUILanguage_0; // ax
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+24h] [rbp-54h]
  __int128 v24; // [rsp+28h] [rbp-50h]
  __int128 v25; // [rsp+38h] [rbp-40h]
  __int128 v26; // [rsp+48h] [rbp-30h] BYREF
  int v27[4]; // [rsp+58h] [rbp-20h] BYREF

  v5 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v9 = v5 - *((_DWORD *)this + 93);
  v10 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15) - *((_DWORD *)this + 95);
  v11 = v9 - *((_DWORD *)this + 107);
  v12 = *((_DWORD *)this + 94);
  v13 = *((_DWORD *)this + 110);
  v14 = v11 - v13;
  DWORD1(v24) = v12 + *((_DWORD *)this + 108);
  v15 = v11 - v13;
  v22 = *((_DWORD *)this + 92);
  HIDWORD(v24) = *((_DWORD *)this + 111) + DWORD1(v24);
  v16 = v12 + *((_DWORD *)this + 98);
  *(_QWORD *)&v25 = __PAIR64__(v16, v22);
  v23 = v13;
  v17 = v9;
  if ( *((_QWORD *)this + 75) )
    v17 = v14;
  HIDWORD(v25) = v16 + *((_DWORD *)this + 85);
  if ( !*((_QWORD *)this + 75) )
    v15 = v9;
  DWORD2(v25) = v17;
  LODWORD(v24) = v14;
  if ( !*((_QWORD *)this + 75) )
    v14 = v9;
  DWORD2(v24) = v11;
  v27[1] = v16 + *((_DWORD *)this + 85) + *((_DWORD *)this + 99);
  v27[0] = v22;
  v27[2] = v9;
  v27[3] = v10;
  CSwitchItemElement::_CalcThumbnailRect((__int64)this, &v26, v27);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
  {
    LODWORD(v24) = v5 - v11;
    DWORD2(v24) = v5 - v11 + v23;
    v19 = v5 - v14;
    v20 = v5 - DWORD2(v26);
    LODWORD(v25) = v19;
    DWORD2(v25) = v19 + v15 - v22;
    v21 = v20 - v26;
    LODWORD(v26) = v20;
    DWORD2(v26) += v21;
  }
  if ( a2 )
    *(_OWORD *)a2 = v24;
  if ( a3 )
    *(_OWORD *)a3 = v25;
  if ( a4 )
    *(_OWORD *)a4 = v26;
}
