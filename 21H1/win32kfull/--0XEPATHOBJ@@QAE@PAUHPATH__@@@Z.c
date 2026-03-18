/*
 * XREFs of ??0XEPATHOBJ@@QAE@PAUHPATH__@@@Z @ 0x1E4555
 * Callers:
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 *     _NtGdiGetPath@16 @ 0x21186F (_NtGdiGetPath@16.c)
 * Callees:
 *     ??0EPATHOBJ@@QAE@XZ @ 0x1E40E7 (--0EPATHOBJ@@QAE@XZ.c)
 *     _XEPATHOBJ_vConstructHPATH@8 @ 0x1E6411 (_XEPATHOBJ_vConstructHPATH@8.c)
 */

XEPATHOBJ *__thiscall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, struct HPATH__ *a2)
{
  EPATHOBJ *v3; // ecx

  EPATHOBJ::EPATHOBJ(this);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 2) = 0;
  XEPATHOBJ_vConstructHPATH(v3, a2);
  return this;
}
