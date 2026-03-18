/*
 * XREFs of PopDirectedDripsDiagInsertErrorRecord @ 0x14099E7DC
 * Callers:
 *     PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x14099E908 (PopDirectedDripsDiagTraceBroadcastFailureDevice.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x14099EC88 (PopDirectedDripsDiagTraceProblemDevice.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopDirectedDripsDiagInsertErrorRecord(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rbx
  __int64 i; // rcx
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 24);
  for ( i = *(_QWORD *)(a1 + 24); i; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 8) == a2 && *(_DWORD *)(i + 16) == a3 )
      break;
    v3 = (__int64 *)i;
  }
  result = *v3;
  if ( !*v3 )
  {
    result = ExAllocatePool2(256LL, 24LL, 1734960208LL);
    *v3 = result;
    if ( !result )
      return result;
    *(_QWORD *)(result + 8) = a2;
    *(_DWORD *)(*v3 + 16) = a3;
    result = *v3;
  }
  ++*(_DWORD *)(result + 20);
  return result;
}
