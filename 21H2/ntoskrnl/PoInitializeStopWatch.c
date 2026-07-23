/*
 * XREFs of PoInitializeStopWatch @ 0x1402729B4
 * Callers:
 *     PopGetStopWatchByRequestType @ 0x140670B10 (PopGetStopWatchByRequestType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoInitializeStopWatch(_OWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  *(_QWORD *)a1 = a2;
  v2 = (_QWORD *)a1 + 1;
  result = *a2;
  if ( *(__int64 **)(*a2 + 8) != a2 )
    __fastfail(3u);
  *v2 = result;
  v2[1] = a2;
  *(_QWORD *)(result + 8) = v2;
  *a2 = (__int64)v2;
  return result;
}
