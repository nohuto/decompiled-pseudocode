/*
 * XREFs of ?FontManagement@PFFOBJ@@QAEHPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x229271
 * Callers:
 *     ?GetETMFontManagement@@YGHAAVRFONTOBJ@@VPDEVOBJ@@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK4@Z @ 0x210654 (-GetETMFontManagement@@YGHAAVRFONTOBJ@@VPDEVOBJ@@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK4@Z.c)
 *     _NtGdiGetETM@8 @ 0x22132A (_NtGdiGetETM@8.c)
 * Callees:
 *     ??1ATTACHOBJ@@QAE@XZ @ 0x8735E (--1ATTACHOBJ@@QAE@XZ.c)
 *     ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C (--0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z.c)
 */

int __thiscall PFFOBJ::FontManagement(
        PFFOBJ *this,
        struct _SURFOBJ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8)
{
  int v8; // edi
  int (__stdcall *v9)(struct _SURFOBJ *, struct _FONTOBJ *, unsigned int, unsigned int, void *, unsigned int, void *); // esi
  _BYTE v11[8]; // [esp+8h] [ebp-8h] BYREF

  v8 = 0;
  v9 = *(int (__stdcall **)(struct _SURFOBJ *, struct _FONTOBJ *, unsigned int, unsigned int, void *, unsigned int, void *))(*(_DWORD *)(*(_DWORD *)this + 60) + 2088);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v11, this);
  if ( v9 )
    v8 = v9(a2, a3, a4, a5, a6, a7, a8);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v11);
  return v8;
}
