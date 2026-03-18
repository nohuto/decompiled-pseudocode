/*
 * XREFs of ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0132174
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0132ED0 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C0132CC4 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     ?bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z @ 0x1C013373C (-bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z.c)
 *     ?bNextFigure@READER@@IEAAHXZ @ 0x1C0134220 (-bNextFigure@READER@@IEAAHXZ.c)
 */

STYLER *__fastcall STYLER::STYLER(STYLER *this, struct EPATHOBJ *a2, struct _LINEATTRS *a3)
{
  int v3; // ebp
  int v6; // eax
  unsigned int v7; // edx
  PFLOAT_LONG pstyle; // rcx
  __int64 cstyle; // rax

  *(_QWORD *)this = a2;
  v3 = 1;
  *(_DWORD *)a2 &= ~8u;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 72LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  *((_DWORD *)this + 10) |= 1u;
  if ( (unsigned int)READER::bNextFigure(this) )
  {
    READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
    *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
    v6 = 1;
  }
  else
  {
    v6 = 4;
  }
  *((_DWORD *)this + 126) = v6;
  EXFORMOBJ::EXFORMOBJ((STYLER *)((char *)this + 808), (STYLER *)((char *)this + 768), 0);
  if ( !a3->pstyle || !a3->cstyle )
    v3 = 0;
  v7 = *((_DWORD *)this + 10) | 2;
  if ( !v3 )
    v7 = *((_DWORD *)this + 10) & 0xFFFFFFFD;
  *((_DWORD *)this + 10) = v7;
  if ( (v7 & 2) != 0 )
  {
    pstyle = a3->pstyle;
    *((_QWORD *)this + 90) = pstyle;
    *((_QWORD *)this + 91) = pstyle;
    cstyle = a3->cstyle;
    *((_DWORD *)this + 10) = v7 & 0xFFFFFFFB;
    *((_QWORD *)this + 92) = &pstyle[cstyle];
  }
  return this;
}
