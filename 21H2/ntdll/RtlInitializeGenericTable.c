/*
 * XREFs of RtlInitializeGenericTable @ 0x18007E3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeGenericTable(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  a1[5] = a2;
  a1[2] = a1 + 1;
  a1[1] = a1 + 1;
  a1[3] = a1 + 1;
  result = a5;
  a1[8] = a5;
  *a1 = 0LL;
  a1[4] = 0LL;
  a1[6] = a3;
  a1[7] = a4;
  return result;
}
