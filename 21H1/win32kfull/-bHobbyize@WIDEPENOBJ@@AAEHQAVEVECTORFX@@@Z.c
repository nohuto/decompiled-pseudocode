/*
 * XREFs of ?bHobbyize@WIDEPENOBJ@@AAEHQAVEVECTORFX@@@Z @ 0x23532D
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x2356FB (-bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?bBeginFigure@WIDEPATHOBJ@@QAEHXZ @ 0x234D6E (-bBeginFigure@WIDEPATHOBJ@@QAEHXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z @ 0x236568 (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QAEXXZ @ 0x236BBC (-vEndFigure@WIDEPATHOBJ@@QAEXXZ.c)
 */

int __thiscall WIDEPENOBJ::bHobbyize(WIDEPENOBJ *this, struct EVECTORFX *const a2)
{
  int v3; // eax
  struct _POINTFIX **v4; // esi
  _DWORD *v5; // edi
  int v6; // ecx
  struct _POINTFIX *v7; // esi
  struct _POINTFIX *v8; // edi
  int result; // eax

  v3 = *((_DWORD *)a2 + 1) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * *(_DWORD *)a2;
  if ( v3 >= 10816 )
    return 0;
  if ( v3 >= 576 )
  {
    if ( v3 >= 1600 )
    {
      if ( v3 >= 3136 )
      {
        if ( v3 >= 5184 )
        {
          if ( v3 >= 7744 )
          {
            v4 = (struct _POINTFIX **)&off_268F08;
            v5 = &unk_268F0C;
          }
          else
          {
            v4 = (struct _POINTFIX **)&off_268F00;
            v5 = &unk_268F04;
          }
        }
        else
        {
          v4 = (struct _POINTFIX **)&off_268EF8;
          v5 = &unk_268EFC;
        }
      }
      else
      {
        v4 = (struct _POINTFIX **)&off_268EF0;
        v5 = &unk_268EF4;
      }
    }
    else
    {
      v4 = (struct _POINTFIX **)&off_268EE8;
      v5 = &unk_268EEC;
    }
  }
  else
  {
    v4 = (struct _POINTFIX **)&WIDEPENOBJ::ahob;
    v5 = &unk_268EE4;
  }
  if ( !WIDEPATHOBJ::bBeginFigure(this) )
    return 0;
  v7 = *v4;
  v8 = &v7[*v5];
  while ( v7 < v8 )
    WIDEPATHOBJ::vAddPoint(this, v7++, v6);
  WIDEPATHOBJ::vEndFigure(this);
  result = 1;
  *((_DWORD *)this + 21) = 1;
  return result;
}
