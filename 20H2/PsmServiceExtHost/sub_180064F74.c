/*
 * XREFs of sub_180064F74 @ 0x180064F74
 * Callers:
 *     sub_180065224 @ 0x180065224 (sub_180065224.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180064F74(__int64 a1)
{
  DWORD CurrentThreadId; // ecx
  __int64 result; // rax

  CurrentThreadId = GetCurrentThreadId();
  for ( result = *(_QWORD *)(a1 + 8 * (CurrentThreadId % 0xAuLL)); result; result = *(_QWORD *)(result + 8) )
  {
    if ( *(_DWORD *)result == CurrentThreadId )
    {
      result += 16LL;
      return result;
    }
  }
  return result;
}
