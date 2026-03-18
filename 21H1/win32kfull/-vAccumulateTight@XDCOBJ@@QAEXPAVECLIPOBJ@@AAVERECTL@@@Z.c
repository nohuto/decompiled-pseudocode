/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734
 * Callers:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     ?ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z @ 0x53A9C (-ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     ?NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPADPAU_DRAWSTREAMINFO@@@Z @ 0x5E070 (-NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPAD.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E (-bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 *     _NtGdiSetPixel@16 @ 0xC0162 (_NtGdiSetPixel@16.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _NtGdiFastPolyPolyline@16 @ 0xF7700 (_NtGdiFastPolyPolyline@16.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiUpdateColors@4 @ 0x21EB48 (_NtGdiUpdateColors@4.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __thiscall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ECLIPOBJ *a2, LONG *a3)
{
  int v3; // ecx
  int v4; // eax
  LONG v5; // ebx
  int right; // edx
  int top; // esi
  LONG *v8; // edi
  XDCOBJ *v9; // ebx
  _DWORD v10[2]; // [esp+10h] [ebp-28h] BYREF
  int v11; // [esp+18h] [ebp-20h] BYREF
  XDCOBJ *v12; // [esp+1Ch] [ebp-1Ch]
  LONG v13; // [esp+20h] [ebp-18h] BYREF
  struct _RECTL v14; // [esp+24h] [ebp-14h] BYREF

  v12 = this;
  v3 = *(_DWORD *)this;
  v14.left = *a3;
  v14.top = a3[1];
  v14.right = a3[2];
  v14.bottom = a3[3];
  v4 = *(_DWORD *)(v3 + 28) & 1;
  v5 = v14.left - *(_DWORD *)(v3 + 8 * v4 + 1048);
  v14.left = v5;
  right = v14.right - *(_DWORD *)(v3 + 8 * v4 + 1048);
  v14.right = right;
  top = v14.top - *(_DWORD *)(v3 + 8 * v4 + 1052);
  v14.top = top;
  v14.bottom -= *(_DWORD *)(v3 + 8 * v4 + 1052);
  if ( (*(_BYTE *)(v3 + 24) & 0x40) != 0 )
  {
    v8 = (LONG *)(v3 + 1112);
    v13 = *(_DWORD *)(v3 + 1112);
    if ( v13 == *(_DWORD *)(v3 + 1120) || *(_DWORD *)(v3 + 1116) == *(_DWORD *)(v3 + 1124) )
    {
      *v8 = v14.left;
      *(_DWORD *)(v3 + 1116) = v14.top;
      *(_DWORD *)(v3 + 1120) = v14.right;
      *(_DWORD *)(v3 + 1124) = v14.bottom;
    }
    else
    {
      if ( v5 < v13 )
      {
        *v8 = v5;
        right = v14.right;
        top = v14.top;
      }
      if ( top < *(_DWORD *)(v3 + 1116) )
      {
        *(_DWORD *)(v3 + 1116) = top;
        right = v14.right;
      }
      if ( right > *(_DWORD *)(v3 + 1120) )
        *(_DWORD *)(v3 + 1120) = right;
      if ( v14.bottom > *(_DWORD *)(v3 + 1124) )
        *(_DWORD *)(v3 + 1124) = v14.bottom;
    }
    v9 = v12;
    v13 = *(_DWORD *)(*(_DWORD *)v12 + 1172);
    if ( v13 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v10);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
      if ( v10[0] )
      {
        if ( v11 )
        {
          RGNOBJ::vSet((RGNOBJ *)&v11, &v14);
          if ( RGNOBJ::bMerge((RGNOBJ *)v10, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v11, 0xEu) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v13, (struct RGNOBJ *)v10);
            *(_DWORD *)(*(_DWORD *)v9 + 1172) = v13;
          }
        }
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v11);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
      if ( v12 == (XDCOBJ *)1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v10);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v10);
      if ( v10[1] == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v10);
    }
  }
}
