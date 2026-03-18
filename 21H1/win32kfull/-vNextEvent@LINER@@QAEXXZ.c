/*
 * XREFs of ?vNextEvent@LINER@@QAEXXZ @ 0x236CF6
 * Callers:
 *     ?vNextStyleEvent@STYLER@@QAEXXZ @ 0x23710F (-vNextStyleEvent@STYLER@@QAEXXZ.c)
 * Callees:
 *     ?vNextPoint@LINER@@AAEXXZ @ 0x236DD5 (-vNextPoint@LINER@@AAEXXZ.c)
 *     ?vZeroFigure@LINER@@AAEXXZ @ 0x237951 (-vZeroFigure@LINER@@AAEXXZ.c)
 */

void __thiscall LINER::vNextEvent(LINER *this)
{
  _DWORD *v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // eax

  *((_DWORD *)this + 169) = *((_DWORD *)this + 52);
  *((_DWORD *)this + 170) = *((_DWORD *)this + 53);
  *((_DWORD *)this + 171) = *((_DWORD *)this + 172);
  LINER::vNextPoint(this);
  v2 = (_DWORD *)*((_DWORD *)this + 172);
  v3 = *((_DWORD *)this + 168);
  if ( !v2[8] )
  {
    v4 = (_DWORD *)*((_DWORD *)this + 172);
    do
    {
      v2 = v4;
      if ( v4[9] )
        break;
      v5 = *((_DWORD *)this + 168);
      if ( v5 )
      {
        if ( v5 != 3 && v5 != 4 )
          break;
      }
      LINER::vNextPoint(this);
      v2 = (_DWORD *)*((_DWORD *)this + 172);
      v4 = v2;
    }
    while ( !v2[8] );
  }
  if ( !v2[10] && !v2[11] )
  {
    v2[10] = v2[8];
    v2[11] = v2[9];
  }
  if ( !v3 )
  {
    v6 = *((_DWORD *)this + 168);
    if ( v6 != 2 )
    {
      if ( v6 != 1 )
      {
        qmemcpy((char *)this + 224, *((const void **)this + 172), 0x58u);
        *((_DWORD *)this + 168) = 0;
        *((_DWORD *)this + 172) = (char *)this + 224;
        return;
      }
      LINER::vNextPoint(this);
    }
    LINER::vZeroFigure(this);
    *((_DWORD *)this + 168) = 7;
  }
}
