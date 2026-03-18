/*
 * XREFs of ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C01479EC
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C00264BC (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0060E84 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00657A0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryTrueTypeOutline(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        __int64 a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        unsigned int a7,
        struct tagTTPOLYGONHEADER *a8)
{
  unsigned int v8; // edi
  __int64 (__fastcall *v10)(_QWORD, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, unsigned int, struct tagTTPOLYGONHEADER *); // rbx
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  v8 = a4;
  v10 = *(__int64 (__fastcall **)(_QWORD, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, unsigned int, struct tagTTPOLYGONHEADER *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3080LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v12, this, (__int64)a3, a4);
  LODWORD(v10) = v10(0LL, a3, v8, a5, a6, a7, a8);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v12);
  return (unsigned int)v10;
}
