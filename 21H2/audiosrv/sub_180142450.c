/*
 * XREFs of sub_180142450 @ 0x180142450
 * Callers:
 *     <none>
 * Callees:
 *     sub_180141200 @ 0x180141200 (sub_180141200.c)
 *     sub_180141540 @ 0x180141540 (sub_180141540.c)
 */

__int64 __fastcall sub_180142450(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rax
  int v8; // eax

  v3 = 0;
  if ( a3 )
  {
    v7 = sub_180141200((_QWORD **)(a1 + 72), a2);
    if ( !v7 )
    {
      v8 = sub_180141540((_QWORD *)a1);
      if ( v8 < 0 )
        return (unsigned int)v8;
      v7 = sub_180141200((_QWORD **)(a1 + 72), a2);
    }
    *a3 = v7 != 0LL;
    return v3;
  }
  return (unsigned int)-2147467261;
}
