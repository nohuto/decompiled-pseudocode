/*
 * XREFs of sub_1800663CC @ 0x1800663CC
 * Callers:
 *     sub_18006646C @ 0x18006646C (sub_18006646C.c)
 *     sub_180066600 @ 0x180066600 (sub_180066600.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800663CC(LPCRITICAL_SECTION lpCriticalSection, PSRWLOCK SRWLock, __int64 a3)
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
