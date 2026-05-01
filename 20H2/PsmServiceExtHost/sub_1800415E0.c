/*
 * XREFs of sub_1800415E0 @ 0x1800415E0
 * Callers:
 *     sub_180041808 @ 0x180041808 (sub_180041808.c)
 * Callees:
 *     sub_180041644 @ 0x180041644 (sub_180041644.c)
 */

__int64 __fastcall sub_1800415E0(_QWORD *a1)
{
  DWORD CurrentProcessId; // eax
  __int64 result; // rax

  CurrentProcessId = GetCurrentProcessId();
  result = sub_180041644(*a1 + 680LL, CurrentProcessId, a1 + 5);
  if ( (int)result >= 0 )
    return TpAllocWork(a1 + 8, sub_180032330, a1, 0LL);
  return result;
}
