/*
 * XREFs of PopPowerRequestCompare @ 0x1406DA140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerRequestCompare(struct _RTL_AVL_TABLE *Table, _DWORD *FirstStruct, _DWORD *SecondStruct)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // edx

  v3 = FirstStruct[2];
  result = 0LL;
  v5 = SecondStruct[2];
  if ( v3 >= v5 )
  {
    LOBYTE(result) = v3 <= v5;
    return (unsigned int)(result + 1);
  }
  return result;
}
