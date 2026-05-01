/*
 * XREFs of sub_180064F10 @ 0x180064F10
 * Callers:
 *     sub_180064A68 @ 0x180064A68 (sub_180064A68.c)
 * Callees:
 *     <none>
 */

__int64 sub_180064F10()
{
  __int64 v0; // rbx
  DWORD CurrentThreadId; // r9d
  __int64 result; // rax

  v0 = qword_1800B3FB0;
  CurrentThreadId = GetCurrentThreadId();
  for ( result = *(_QWORD *)(v0 + 8 * (CurrentThreadId % 0xAuLL)); result; result = *(_QWORD *)(result + 8) )
  {
    if ( *(_DWORD *)result == CurrentThreadId )
    {
      result += 16LL;
      return result;
    }
  }
  return result;
}
