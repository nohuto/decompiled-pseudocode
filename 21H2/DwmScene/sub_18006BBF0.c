/*
 * XREFs of sub_18006BBF0 @ 0x18006BBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18006BBF0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v2 = *(_QWORD *)(a1 + 88);
  }
  *a2 = *(_QWORD *)(a1 + 80);
  result = a2;
  a2[1] = v2;
  return result;
}
