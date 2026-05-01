/*
 * XREFs of sub_180083F70 @ 0x180083F70
 * Callers:
 *     sub_1800838A0 @ 0x1800838A0 (sub_1800838A0.c)
 *     sub_180083B4C @ 0x180083B4C (sub_180083B4C.c)
 *     sub_180083D0C @ 0x180083D0C (sub_180083D0C.c)
 *     sub_18008431C @ 0x18008431C (sub_18008431C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180083F70(__int64 a1)
{
  unsigned __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockExclusive(v2 + 48);
  *(_DWORD *)(v2 + 56) = GetCurrentThreadId();
  *(_BYTE *)(a1 + 53) &= ~1u;
  *(_DWORD *)(v2 + 56) = 0;
  RtlReleaseSRWLockExclusive(v2 + 48);
  return RtlWakeAddressAll(a1 + 53);
}
