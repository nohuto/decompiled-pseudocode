/*
 * XREFs of PfTTraceListFree @ 0x14067C7D4
 * Callers:
 *     PfTTraceListAdd @ 0x14067C39C (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 * Callees:
 *     PfTFreeTraceDump @ 0x140273D04 (PfTFreeTraceDump.c)
 */

void __fastcall PfTTraceListFree(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    PfTFreeTraceDump(v2);
  }
}
