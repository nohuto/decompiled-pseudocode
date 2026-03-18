/*
 * XREFs of ?QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z @ 0x85878
 * Callers:
 *     ?pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ @ 0x857A0 (-pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x221B4A (-bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z @ 0x22911D (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QAEKPAPAU_FD_KERNINGPAIR@@@Z @ 0x229413 (-cKernPairs@PFEOBJ@@QAEKPAPAU_FD_KERNINGPAIR@@@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QAE@XZ @ 0x8735E (--1ATTACHOBJ@@QAE@XZ.c)
 *     ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C (--0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QAEHXZ @ 0x87B4A (-bCheckFntFileInfo@PFFOBJ@@QAEHXZ.c)
 */

int __thiscall PFFOBJ::QueryFontTree(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  int (__stdcall *v7)(struct DHPDEV__ *, unsigned int, unsigned int, unsigned int, unsigned int *); // esi
  int v8; // esi
  _BYTE v10[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !PFFOBJ::bCheckFntFileInfo(this) )
    return 0;
  v7 = *(int (__stdcall **)(struct DHPDEV__ *, unsigned int, unsigned int, unsigned int, unsigned int *))(*(_DWORD *)(*(_DWORD *)this + 60) + 2008);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v10, this);
  v8 = v7(a2, a3, a4, a5, a6);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v10);
  return v8;
}
