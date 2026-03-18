/*
 * XREFs of ??0STYLER@@QAE@AAVEPATHOBJ@@PAU_LINEATTRS@@@Z @ 0x234AE7
 * Callers:
 *     ??0WIDENER@@QAE@AAVEPATHOBJ@@AAVEXFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234B5B (--0WIDENER@@QAE@AAVEPATHOBJ@@AAVEXFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     ??0LINER@@QAE@AAVEPATHOBJ@@@Z @ 0x234A8A (--0LINER@@QAE@AAVEPATHOBJ@@@Z.c)
 */

STYLER *__thiscall STYLER::STYLER(STYLER *this, struct EPATHOBJ *a2, struct _LINEATTRS *a3)
{
  BOOL v4; // edi
  int v5; // edx
  unsigned int v6; // edx
  PFLOAT_LONG pstyle; // ecx
  ULONG cstyle; // eax

  LINER::LINER(this, a2);
  v4 = 0;
  EXFORMOBJ::EXFORMOBJ((STYLER *)((char *)this + 808), (STYLER *)((char *)this + 748), 0);
  if ( a3->pstyle )
    v4 = a3->cstyle != 0;
  v5 = *((_DWORD *)this + 6);
  if ( v4 )
    v6 = v5 | 2;
  else
    v6 = v5 & 0xFFFFFFFD;
  *((_DWORD *)this + 6) = v6;
  if ( (v6 & 2) != 0 )
  {
    pstyle = a3->pstyle;
    *((_DWORD *)this + 174) = pstyle;
    *((_DWORD *)this + 175) = pstyle;
    cstyle = a3->cstyle;
    *((_DWORD *)this + 6) = v6 & 0xFFFFFFFB;
    *((_DWORD *)this + 176) = &pstyle[cstyle];
  }
  return this;
}
