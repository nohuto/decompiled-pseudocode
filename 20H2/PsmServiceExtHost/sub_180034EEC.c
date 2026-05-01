/*
 * XREFs of sub_180034EEC @ 0x180034EEC
 * Callers:
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_18003BBC4 @ 0x18003BBC4 (sub_18003BBC4.c)
 *     sub_180081B7C @ 0x180081B7C (sub_180081B7C.c)
 *     sub_180081BF0 @ 0x180081BF0 (sub_180081BF0.c)
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 */

DWORD __fastcall sub_180034EEC(__int64 a1, __int64 a2)
{
  DWORD result; // eax

  sub_18000B084(a1, a2, 0xBu, 0);
  RtlAcquireSRWLockExclusive(a1);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
