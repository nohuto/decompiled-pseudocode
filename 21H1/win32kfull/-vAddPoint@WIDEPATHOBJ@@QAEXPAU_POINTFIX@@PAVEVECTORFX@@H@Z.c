/*
 * XREFs of ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23659C
 * Callers:
 *     ?vAddEndCap@WIDENER@@IAEXXZ @ 0x2361D5 (-vAddEndCap@WIDENER@@IAEXXZ.c)
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddLeft@WIDENER@@IAEXAAVEVECTORFX@@H@Z @ 0x2364C6 (-vAddLeft@WIDENER@@IAEXAAVEVECTORFX@@H@Z.c)
 *     ?vAddNice@@YGXAAVWIDEPATHOBJ@@PAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23650C (-vAddNice@@YGXAAVWIDEPATHOBJ@@PAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddStartCap@WIDENER@@IAEXXZ @ 0x2368E0 (-vAddStartCap@WIDENER@@IAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall WIDEPATHOBJ::vAddPoint(WIDEPATHOBJ *this, struct _POINTFIX *a2, struct EVECTORFX *a3, int a4)
{
  _DWORD *v5; // ecx
  FIX x; // eax
  int v7; // ebx
  int v8; // ecx

  v5 = (_DWORD *)*((_DWORD *)this + 18);
  if ( (unsigned int)v5 < *((_DWORD *)this + 19) )
  {
    x = a2->x;
    v7 = *(_DWORD *)a3;
    if ( a4 )
    {
      *v5 = x - v7;
      v8 = a2->y - *((_DWORD *)a3 + 1);
    }
    else
    {
      *v5 = v7 + x;
      v8 = *((_DWORD *)a3 + 1) + a2->y;
    }
    *(_DWORD *)(*((_DWORD *)this + 18) + 4) = v8;
    *((_DWORD *)this + 18) += 8;
  }
  else
  {
    WIDEPATHOBJ::vGrowPathAndAddPoint(this, a2, a3, a4);
  }
}
