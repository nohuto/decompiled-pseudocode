/*
 * XREFs of PopDirectedDripsDiagInsertErrorRecord @ 0x1408F71E8
 * Callers:
 *     PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x1408F816C (PopDirectedDripsDiagTraceBroadcastFailureDevice.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x1408F84EC (PopDirectedDripsDiagTraceProblemDevice.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PopDirectedDripsDiagInsertErrorRecord(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rbx
  __int64 *i; // rcx
  _QWORD *result; // rax

  v3 = (__int64 *)(a1 + 24);
  for ( i = *(__int64 **)(a1 + 24); i; i = (__int64 *)*i )
  {
    if ( i[1] == a2 && *((_DWORD *)i + 4) == a3 )
      break;
    v3 = i;
  }
  result = (_QWORD *)*v3;
  if ( !*v3 )
  {
    result = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x67696450u);
    *v3 = (__int64)result;
    if ( !result )
      return result;
    *(_OWORD *)result = 0LL;
    result[2] = 0LL;
    *(_QWORD *)(*v3 + 8) = a2;
    *(_DWORD *)(*v3 + 16) = a3;
    result = (_QWORD *)*v3;
  }
  ++*((_DWORD *)result + 5);
  return result;
}
