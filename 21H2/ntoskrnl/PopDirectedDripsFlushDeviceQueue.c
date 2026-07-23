/*
 * XREFs of PopDirectedDripsFlushDeviceQueue @ 0x1408F90E0
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408F8C20 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x1408F8F50 (PopDirectedDripsBuildPs4BroadcastTree.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopDirectedDripsFlushDeviceQueue(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)result[1] != a1 || (v2 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a1 = v2;
    v2[1] = a1;
    result[1] = result;
    *result = result;
  }
  return result;
}
