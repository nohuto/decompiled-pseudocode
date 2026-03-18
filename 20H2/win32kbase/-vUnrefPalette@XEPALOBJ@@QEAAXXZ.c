/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C004C630
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C001A718 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001DB80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C004C630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0090E30 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00CF790 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00CFCA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0143ED0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C004C630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00CEC74 (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00CEC98 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(XEPALOBJ *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rcx
  unsigned __int8 *v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 24) & 0x1000000) != 0 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)v2, 0, 1, 0, 8, 0LL) )
    {
      XEPALOBJ::DecShareRefCountAndInvalidatePalette(this);
    }
    else
    {
      v3 = *(_QWORD **)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 24LL) & 0x800) != 0 && v3[6] )
      {
        v5 = v3[6];
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
        v3 = *(_QWORD **)this;
      }
      if ( v3 != (_QWORD *)v3[15] )
      {
        v5 = v3[15];
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
        v3 = *(_QWORD **)this;
      }
      v4 = (unsigned __int8 *)v3[13];
      if ( v4 )
      {
        if ( v4 != gpRGBXlate )
        {
          Win32FreePool(v3[13]);
          v3 = *(_QWORD **)this;
        }
        v3[13] = 0LL;
      }
      XEPALOBJ::FreePaletteMemory(this);
    }
  }
}
