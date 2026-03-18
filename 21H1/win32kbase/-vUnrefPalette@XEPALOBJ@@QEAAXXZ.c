/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C008C080
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000FF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C008C080 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C009AF68 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00CF040 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C014C6C0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0080048 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C008030C (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C008C080 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?FreePaletteMemory@@YAXPEAVPALETTE@@@Z @ 0x1C008C520 (-FreePaletteMemory@@YAXPEAVPALETTE@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(struct OBJECT **this)
{
  struct OBJECT *v2; // rcx
  struct OBJECT *v3; // rdx
  struct OBJECT *v4; // rcx
  unsigned __int8 *v5; // rax
  struct OBJECT *v6; // rdi
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v2 = *this;
  if ( v2 )
  {
    if ( (*((_DWORD *)v2 + 6) & 0x1000000) != 0 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)v2, 0, 1, 0, 8, 0LL) )
    {
      v6 = *this;
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v7, *this, 0, 0, 1);
      if ( v8 )
      {
        TrackHmgrReferenceDecrement(*(_BYTE *)(v7 + 14), v6);
        --*((_DWORD *)v6 + 2);
        HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
        if ( v8 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
      }
    }
    else
    {
      v3 = *this;
      v4 = *this;
      if ( (*((_DWORD *)*this + 6) & 0x800) != 0 && *((_QWORD *)v3 + 6) )
      {
        v9 = *((_QWORD *)v3 + 6);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v9);
        v4 = *this;
        v3 = *this;
      }
      if ( v4 != *((struct OBJECT **)v4 + 15) )
      {
        v9 = *((_QWORD *)v4 + 15);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v9);
        v4 = *this;
        v3 = *this;
      }
      v5 = (unsigned __int8 *)*((_QWORD *)v4 + 13);
      if ( v5 )
      {
        if ( v5 != gpRGBXlate )
        {
          Win32FreePool(*((_QWORD *)v4 + 13));
          v4 = *this;
        }
        *((_QWORD *)v4 + 13) = 0LL;
        v3 = *this;
      }
      FreePaletteMemory(v3);
    }
    *this = 0LL;
  }
}
