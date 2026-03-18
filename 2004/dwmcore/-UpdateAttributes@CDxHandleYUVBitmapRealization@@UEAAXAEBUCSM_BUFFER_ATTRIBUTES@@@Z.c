/*
 * XREFs of ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180264738
 * Callers:
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800F3890 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x18003E984 (-CalcDisplayRestriction@CBitmapRealization@@KA-AVDisplayId@@_NPEAUHMONITOR__@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180092D04 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800C7D2C (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800D07E0 (--8@YA_NAEBUtagRECT@@0@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::UpdateAttributes(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  int v2; // ebx
  _DWORD *v3; // rsi
  const struct CSM_BUFFER_ATTRIBUTES *v4; // r9
  CDxHandleYUVBitmapRealization *v5; // r10
  char v6; // di
  int v7; // ecx
  int *v8; // rax
  int v9; // ecx
  char v10; // al
  bool v11; // zf
  int v12; // edx
  int v13; // eax
  __int64 v14; // r10
  char v15; // r11
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this - 58);
  v3 = (_DWORD *)((char *)this - 336);
  v4 = a2;
  v5 = this;
  v16 = *((_OWORD *)this - 21);
  v6 = v2 != DisplayId::None && v2 != DisplayId::All;
  v7 = *((_DWORD *)a2 + 29) & 1;
  if ( v7 != (*((_DWORD *)v5 - 67) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)v5 - 47) )
  {
    v8 = CBitmapRealization::CalcDisplayRestriction(&v17, v7, *((_QWORD *)a2 + 1));
    v9 = *v8;
    *((_DWORD *)v5 - 58) = *v8;
    v10 = v9 != DisplayId::None && v9 != DisplayId::All;
    if ( v6 != v10 )
    {
      v11 = v10 == 0;
      v12 = *((_DWORD *)g_pComposition + 70);
      v13 = v12 + 1;
      if ( v11 )
        v13 = v12 - 1;
      *((_DWORD *)g_pComposition + 70) = v13;
    }
  }
  if ( v2 == *((_DWORD *)v5 - 58)
    && *((_DWORD *)v4 + 16) == *((_DWORD *)v5 - 80)
    && *((_DWORD *)v4 + 23) == *((_DWORD *)v5 - 73)
    && *((_DWORD *)v4 + 24) == *((_DWORD *)v5 - 72) )
  {
    operator==((_DWORD *)v4 + 25, (_DWORD *)v5 - 71);
  }
  *((_OWORD *)v5 - 24) = *(_OWORD *)v4;
  *((_OWORD *)v5 - 23) = *((_OWORD *)v4 + 1);
  *((_OWORD *)v5 - 22) = *((_OWORD *)v4 + 2);
  *((_OWORD *)v5 - 21) = *((_OWORD *)v4 + 3);
  *((_OWORD *)v5 - 20) = *((_OWORD *)v4 + 4);
  *((_OWORD *)v5 - 19) = *((_OWORD *)v4 + 5);
  *((_OWORD *)v5 - 18) = *((_OWORD *)v4 + 6);
  *((_QWORD *)v5 - 34) = *((_QWORD *)v4 + 14);
  if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(&v16, v3) )
  {
    *(_BYTE *)(v14 - 200) = 0;
    v15 = 1;
  }
  if ( v15 )
    CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)(v14 - 480), 0);
}
