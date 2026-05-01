/*
 * XREFs of sub_180006510 @ 0x180006510
 * Callers:
 *     sub_1800072D8 @ 0x1800072D8 (sub_1800072D8.c)
 *     sub_180007770 @ 0x180007770 (sub_180007770.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180006510(LPCRITICAL_SECTION lpCriticalSection, PSRWLOCK SRWLock, __int64 a3)
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
