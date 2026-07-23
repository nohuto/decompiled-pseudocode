/*
 * XREFs of RtlGetNextUmsListItem @ 0x1800F7520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetNextUmsListItem(volatile __int64 *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    *a2 = _InterlockedExchange64(a1, 0LL);
    return 0LL;
  }
  return result;
}
