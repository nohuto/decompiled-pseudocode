/*
 * XREFs of sub_18001FF78 @ 0x18001FF78
 * Callers:
 *     sub_18001FFE4 @ 0x18001FFE4 (sub_18001FFE4.c)
 *     sub_1800202A0 @ 0x1800202A0 (sub_1800202A0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001FF78(LPCRITICAL_SECTION lpCriticalSection, PSRWLOCK SRWLock, __int64 a3)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx

  if ( a3 )
  {
    EnterCriticalSection(lpCriticalSection);
    AcquireSRWLockExclusive(SRWLock);
    DebugInfo = lpCriticalSection[1].DebugInfo;
    if ( (unsigned __int64)(a3 - 1) < (*(_QWORD *)&lpCriticalSection[1].LockCount - (_QWORD)DebugInfo) >> 4 )
      *((_OWORD *)DebugInfo + a3 - 1) = 0LL;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
