/*
 * XREFs of RtlInitializeHandleTable @ 0x18007FA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlInitializeHandleTable(int a1, int a2, __int64 a3)
{
  int result; // eax

  *(_OWORD *)a3 = 0LL;
  result = a2 & 0x7FFFFFFF;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  if ( a2 >= 0 )
    result = a2;
  *(_DWORD *)a3 = a1;
  *(_DWORD *)(a3 + 8) = (unsigned int)a2 >> 31;
  *(_DWORD *)(a3 + 4) = result;
  return result;
}
