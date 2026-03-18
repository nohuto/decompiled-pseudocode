/*
 * XREFs of ?QueryGlyphAttrs@PFFOBJ@@QAEPAU_FD_GLYPHATTR@@PAU_FONTOBJ@@K@Z @ 0x2292FD
 * Callers:
 *     _FONTOBJ_pQueryGlyphAttrs@8 @ 0x1F3574 (_FONTOBJ_pQueryGlyphAttrs@8.c)
 * Callees:
 *     ??1ATTACHOBJ@@QAE@XZ @ 0x8735E (--1ATTACHOBJ@@QAE@XZ.c)
 *     ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C (--0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z.c)
 */

struct _FD_GLYPHATTR *__thiscall PFFOBJ::QueryGlyphAttrs(PFFOBJ *this, struct _FONTOBJ *a2, unsigned int a3)
{
  int (__stdcall *v3)(struct _FONTOBJ *, unsigned int); // esi
  int v4; // esi
  _BYTE v6[8]; // [esp+4h] [ebp-8h] BYREF

  v3 = *(int (__stdcall **)(struct _FONTOBJ *, unsigned int))(*(_DWORD *)(*(_DWORD *)this + 60) + 2244);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v6, this);
  if ( v3 )
    v4 = v3(a2, a3);
  else
    v4 = 0;
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v6);
  return (struct _FD_GLYPHATTR *)v4;
}
