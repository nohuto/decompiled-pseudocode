/*
 * XREFs of MouseClassDequeueRead @ 0x1C000449C
 * Callers:
 *     MouseClassServiceCallback @ 0x1C0004BE0 (MouseClassServiceCallback.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MouseClassDequeueRead(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD **v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  v1 = 0LL;
  v2 = (_QWORD **)(a1 + 152);
  do
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] == v2 )
    {
      v4 = (_QWORD *)*v3;
      if ( *(_QWORD **)(*v3 + 8LL) == v3 )
        continue;
    }
    __fastfail(3u);
    *v2 = v4;
    v1 = v3 - 21;
    v4[1] = v2;
    if ( !_InterlockedExchange64(v3 - 8, 0LL) )
    {
      v3[1] = v3;
      v1 = 0LL;
      *v3 = v3;
    }
  }
  while ( !v1 );
  return v1;
}
