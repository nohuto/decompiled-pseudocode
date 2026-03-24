/*
 * XREFs of HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect @ 0x1C0011690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect(__int64 a1)
{
  _WORD *v1; // rax
  unsigned int v2; // r8d
  __int16 v3; // cx

  v1 = *(_WORD **)(a1 + 960);
  v2 = 3005;
  v3 = v1[92];
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 44LL) & 2) != 0 && (v3 & 1) != 0 && (v3 & 2) == 0 )
    return 3089;
  return v2;
}
