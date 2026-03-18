/*
 * XREFs of ?QueryTrueTypeOutline@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KHPAU_GLYPHDATA@@KPAUtagTTPOLYGONHEADER@@@Z @ 0x22933A
 * Callers:
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 * Callees:
 *     ??1ATTACHOBJ@@QAE@XZ @ 0x8735E (--1ATTACHOBJ@@QAE@XZ.c)
 *     ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C (--0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z.c)
 */

int __thiscall PFFOBJ::QueryTrueTypeOutline(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        int a5,
        struct _GLYPHDATA *a6,
        unsigned int a7,
        struct tagTTPOLYGONHEADER *a8)
{
  int (__stdcall *v8)(_DWORD, struct _FONTOBJ *, unsigned int, int, struct _GLYPHDATA *, unsigned int, struct tagTTPOLYGONHEADER *); // esi
  int v9; // esi
  _BYTE v11[8]; // [esp+4h] [ebp-8h] BYREF

  v8 = *(int (__stdcall **)(_DWORD, struct _FONTOBJ *, unsigned int, int, struct _GLYPHDATA *, unsigned int, struct tagTTPOLYGONHEADER *))(*(_DWORD *)(*(_DWORD *)this + 60) + 2096);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v11, this);
  v9 = v8(0, a3, a4, a5, a6, a7, a8);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v11);
  return v9;
}
