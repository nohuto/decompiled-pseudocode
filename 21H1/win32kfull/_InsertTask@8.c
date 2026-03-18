/*
 * XREFs of _InsertTask@8 @ 0x155B50
 * Callers:
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _xxxUserYield@4 @ 0x9875A (_xxxUserYield@4.c)
 *     _zzzInitTask@48 @ 0x142324 (_zzzInitTask@48.c)
 *     _DirectedScheduleTask@16 @ 0x1559F9 (_DirectedScheduleTask@16.c)
 *     _xxxDirectedYield@4 @ 0x155BCE (_xxxDirectedYield@4.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall InsertTask(int a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  _DWORD *i; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *result; // eax

  v2 = (_DWORD *)(*(_DWORD *)(a1 + 200) + 8);
  v3 = a2[2];
  for ( i = (_DWORD *)*v2; i; i = (_DWORD *)*i )
  {
    if ( i == a2 )
    {
      v6 = (_DWORD *)*a2;
      *v2 = *a2;
      while ( v6 && v3 >= v6[2] )
      {
        v2 = v6;
        v6 = (_DWORD *)*v6;
      }
      break;
    }
    if ( v3 < i[2] )
    {
      while ( 1 )
      {
        v5 = (_DWORD *)*i;
        if ( (_DWORD *)*i == a2 )
          break;
        i = (_DWORD *)*i;
        if ( !v5 )
          goto LABEL_15;
      }
      *i = *a2;
      break;
    }
    v2 = i;
  }
LABEL_15:
  result = (_DWORD *)*v2;
  *a2 = *v2;
  *v2 = a2;
  return result;
}
