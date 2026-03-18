/*
 * XREFs of ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02C11FC
 * Callers:
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C0292A20 (FONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0060E84 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00657A0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

struct _FD_GLYPHATTR *__fastcall PFFOBJ::QueryGlyphAttrs(PFFOBJ *this, struct _FONTOBJ *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 (__fastcall *v6)(struct _FONTOBJ *, _QWORD); // rbx
  __int64 v7; // rdi
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3;
  v6 = *(__int64 (__fastcall **)(struct _FONTOBJ *, _QWORD))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3376LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v9, this, a3, a4);
  v7 = 0LL;
  if ( v6 )
    v7 = v6(a2, v5);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v9);
  return (struct _FD_GLYPHATTR *)v7;
}
