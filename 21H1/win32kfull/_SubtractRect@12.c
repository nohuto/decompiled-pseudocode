/*
 * XREFs of _SubtractRect@12 @ 0x9A66A
 * Callers:
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     ?FBitsTouch@@YGHPAUtagWND@@PAUtagRECT@@PAUtagSPB@@K@Z @ 0x17E08B (-FBitsTouch@@YGHPAUtagWND@@PAUtagRECT@@PAUtagSPB@@K@Z.c)
 *     ?MNGetPopupBoundsRect@@YGXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z @ 0x19685B (-MNGetPopupBoundsRect@@YGXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 */

BOOL __fastcall SubtractRect(int *a1, int *a2, int *a3)
{
  int v4; // eax
  int *v5; // ecx
  int *v6; // esi
  int v7; // eax
  int v9; // [esp+Ch] [ebp-20h] BYREF
  int v10; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+14h] [ebp-18h]
  int v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+20h] [ebp-Ch]
  int *v15; // [esp+24h] [ebp-8h]
  int v16; // [esp+34h] [ebp+8h]

  v15 = a2;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v4 = IntersectRect(&v9, a2, a3);
  v5 = v15;
  v6 = v15;
  *a1 = *v15;
  a1[1] = *++v6;
  a1[2] = *++v6;
  a1[3] = v6[1];
  if ( v4 )
  {
    v14 = *v5;
    v7 = v9 <= v14;
    v13 = v5[1];
    if ( v10 <= v13 )
      ++v7;
    v16 = v5[2];
    if ( v11 >= v16 )
      ++v7;
    v15 = (int *)v5[3];
    if ( v12 >= (int)v15 )
      ++v7;
    if ( v7 == 4 )
    {
      *a1 = 0;
      a1[1] = 0;
      a1[2] = 0;
      a1[3] = 0;
      return 0;
    }
    if ( v7 == 3 )
    {
      if ( v9 > v14 )
      {
        a1[2] = v9;
      }
      else if ( v11 < v16 )
      {
        *a1 = v11;
      }
      else if ( v10 > v13 )
      {
        a1[3] = v10;
      }
      else if ( v12 < (int)v15 )
      {
        a1[1] = v12;
      }
    }
  }
  return *a1 < a1[2] && a1[1] < a1[3];
}
