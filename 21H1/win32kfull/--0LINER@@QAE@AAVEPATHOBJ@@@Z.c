/*
 * XREFs of ??0LINER@@QAE@AAVEPATHOBJ@@@Z @ 0x234A8A
 * Callers:
 *     ??0STYLER@@QAE@AAVEPATHOBJ@@PAU_LINEATTRS@@@Z @ 0x234AE7 (--0STYLER@@QAE@AAVEPATHOBJ@@PAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bNextFigure@READER@@IAEHXZ @ 0x2354C7 (-bNextFigure@READER@@IAEHXZ.c)
 *     ?bNextPoint@READER@@IAEHAAU_POINTFIX@@@Z @ 0x23550D (-bNextPoint@READER@@IAEHAAU_POINTFIX@@@Z.c)
 */

LINER *__thiscall LINER::LINER(LINER *this, struct EPATHOBJ *a2)
{
  int v3; // ebx

  v3 = 1;
  *(_DWORD *)this = a2;
  *(_DWORD *)a2 &= ~8u;
  *(_DWORD *)(*((_DWORD *)a2 + 2) + 52) = *(_DWORD *)(*((_DWORD *)a2 + 2) + 20);
  *((_DWORD *)this + 6) |= 1u;
  if ( READER::bNextFigure(this) )
  {
    READER::bNextPoint(this, (struct _POINTFIX *)this + 26);
    *((_DWORD *)this + 54) = *((_DWORD *)this + 52);
    *((_DWORD *)this + 55) = *((_DWORD *)this + 53);
  }
  else
  {
    v3 = 4;
  }
  *((_DWORD *)this + 122) = v3;
  return this;
}
