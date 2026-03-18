/*
 * XREFs of ?bNextFigure@READER@@IAEHXZ @ 0x2354C7
 * Callers:
 *     ??0LINER@@QAE@AAVEPATHOBJ@@@Z @ 0x234A8A (--0LINER@@QAE@AAVEPATHOBJ@@@Z.c)
 *     ?vNextPoint@LINER@@AAEXXZ @ 0x236DD5 (-vNextPoint@LINER@@AAEXXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall READER::bNextFigure(READER *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // ecx

  v2 = *((_DWORD *)this + 6) & 1;
  if ( v2 )
  {
    v3 = EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 4));
    v4 = *((_DWORD *)this + 6);
    if ( v3 )
      v5 = v4 | 1;
    else
      v5 = v4 & 0xFFFFFFFE;
    v6 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 6) = v5;
    v7 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 4) = v7;
    *((_DWORD *)this + 5) = v7 + 8 * v6;
    return v6 != 0 ? v2 : 0;
  }
  return v2;
}
