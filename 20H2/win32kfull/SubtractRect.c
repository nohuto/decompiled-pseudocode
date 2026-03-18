/*
 * XREFs of SubtractRect @ 0x1C003F10C
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0041CAC (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     CreateSpb @ 0x1C0156560 (CreateSpb.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C0219A24 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02352B8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 */

_BOOL8 __fastcall SubtractRect(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // r11d
  int v9; // r10d
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = 0LL;
  v5 = IntersectRect(&v11, a2, a3);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  if ( v5 )
  {
    v6 = *(_DWORD *)(a2 + 4);
    v7 = (int)v11 <= *(_DWORD *)a2;
    if ( SDWORD1(v11) <= v6 )
      ++v7;
    v8 = *(_DWORD *)(a2 + 8);
    if ( SDWORD2(v11) >= v8 )
      ++v7;
    v9 = *(_DWORD *)(a2 + 12);
    if ( SHIDWORD(v11) >= v9 )
      ++v7;
    if ( v7 == 4 )
    {
      *(_OWORD *)a1 = 0LL;
      return 0LL;
    }
    if ( v7 == 3 )
    {
      if ( (int)v11 > *(_DWORD *)a2 )
      {
        *(_DWORD *)(a1 + 8) = v11;
      }
      else if ( SDWORD2(v11) < v8 )
      {
        *(_DWORD *)a1 = DWORD2(v11);
      }
      else if ( SDWORD1(v11) > v6 )
      {
        *(_DWORD *)(a1 + 12) = DWORD1(v11);
      }
      else if ( SHIDWORD(v11) < v9 )
      {
        *(_DWORD *)(a1 + 4) = HIDWORD(v11);
      }
    }
  }
  return *(_DWORD *)a1 < *(_DWORD *)(a1 + 8) && *(_DWORD *)(a1 + 4) < *(_DWORD *)(a1 + 12);
}
