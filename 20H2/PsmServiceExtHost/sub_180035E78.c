/*
 * XREFs of sub_180035E78 @ 0x180035E78
 * Callers:
 *     sub_180035C5C @ 0x180035C5C (sub_180035C5C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035E78(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    TpSetWait(v2, 0LL, 0LL);
    result = TpWaitForWait(*(_QWORD *)(a1 + 80), 1LL);
  }
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    TpSetWait(v4, 0LL, 0LL);
    return TpWaitForWait(*(_QWORD *)(a1 + 88), 1LL);
  }
  return result;
}
