/*
 * XREFs of KiUpdateChildrenCpuTarget @ 0x140523A20
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x140287FB8 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x140288290 (KiUpdateCpuTargetByRate.c)
 * Callees:
 *     KiUpdateCpuTargetByWeight @ 0x140287FB8 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x140288290 (KiUpdateCpuTargetByRate.c)
 */

char __fastcall KiUpdateChildrenCpuTarget(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  char v5; // si
  unsigned __int16 *v7; // rcx
  char result; // al

  v4 = *a1;
  v5 = a2;
  do
  {
    v7 = (unsigned __int16 *)(v4 - 7);
    LOBYTE(a2) = v5;
    if ( (*((_DWORD *)v4 - 13) & 1) != 0 )
      result = KiUpdateCpuTargetByRate(v7, a2, a3, a4);
    else
      result = KiUpdateCpuTargetByWeight(v7, a2, a3, a4);
    v4 = (_QWORD *)*v4;
  }
  while ( v4 != a1 );
  return result;
}
