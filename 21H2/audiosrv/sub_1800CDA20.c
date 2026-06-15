/*
 * XREFs of sub_1800CDA20 @ 0x1800CDA20
 * Callers:
 *     sub_1800CDEF8 @ 0x1800CDEF8 (sub_1800CDEF8.c)
 * Callees:
 *     sub_1800C28E0 @ 0x1800C28E0 (sub_1800C28E0.c)
 *     sub_1800CD9DC @ 0x1800CD9DC (sub_1800CD9DC.c)
 *     sub_1800CFD1C @ 0x1800CFD1C (sub_1800CFD1C.c)
 */

void __fastcall sub_1800CDA20(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
  while ( *(_QWORD *)&lpCriticalSection[1].LockCount )
    sub_1800CFD1C(&lpCriticalSection[1], 0LL);
  LeaveCriticalSection(lpCriticalSection);
  sub_1800C28E0((__int64 *)&lpCriticalSection[1].SpinCount);
  sub_1800CD9DC(&lpCriticalSection[1].DebugInfo);
  DeleteCriticalSection(lpCriticalSection);
}
