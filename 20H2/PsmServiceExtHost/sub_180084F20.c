/*
 * XREFs of sub_180084F20 @ 0x180084F20
 * Callers:
 *     sub_180036520 @ 0x180036520 (sub_180036520.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180084F20(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 72), 1LL);
    return TpReleaseTimer(*(_QWORD *)(a1 + 72));
  }
  return result;
}
