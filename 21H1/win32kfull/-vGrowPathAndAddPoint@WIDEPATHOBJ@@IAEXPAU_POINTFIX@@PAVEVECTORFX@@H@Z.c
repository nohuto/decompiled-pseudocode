/*
 * XREFs of ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x236BF0
 * Callers:
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z @ 0x236568 (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23659C (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@@IAEHXZ @ 0x235295 (-bGrowPath@WIDEPATHOBJ@@IAEHXZ.c)
 *     ?bValid@WIDEPATHOBJ@@QBEHXZ @ 0x235B14 (-bValid@WIDEPATHOBJ@@QBEHXZ.c)
 */

void __thiscall WIDEPATHOBJ::vGrowPathAndAddPoint(
        WIDEPATHOBJ *this,
        struct _POINTFIX *a2,
        struct EVECTORFX *a3,
        int a4)
{
  WIDEPATHOBJ *v5; // ecx
  int *v6; // ecx
  int v7; // edx
  int v8; // eax

  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 24) + 12) = (*((_DWORD *)this + 18)
                                                             - *(_DWORD *)(*((_DWORD *)this + 2) + 24)
                                                             - 16) >> 3;
  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 16) + 4) = *(_DWORD *)(*((_DWORD *)this + 2) + 24)
                                                           + 8
                                                           * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 24) + 12)
                                                           + 16;
  if ( WIDEPATHOBJ::bValid(this) )
  {
    if ( WIDEPATHOBJ::bGrowPath(v5) )
    {
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 24) + 8) = 0;
      *(struct _POINTFIX *)*((_DWORD *)this + 18) = *a2;
      if ( a3 )
      {
        v6 = (int *)*((_DWORD *)this + 18);
        v7 = *(_DWORD *)a3;
        v8 = *v6;
        if ( a4 )
        {
          *v6 = v8 - v7;
          *(_DWORD *)(*((_DWORD *)this + 18) + 4) -= *((_DWORD *)a3 + 1);
        }
        else
        {
          *v6 = v7 + v8;
          *(_DWORD *)(*((_DWORD *)this + 18) + 4) += *((_DWORD *)a3 + 1);
        }
      }
      *((_DWORD *)this + 18) += 8;
    }
    else
    {
      *((_DWORD *)this + 17) = 1;
    }
  }
}
