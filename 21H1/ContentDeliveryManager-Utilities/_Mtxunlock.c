/*
 * XREFs of _Mtxunlock @ 0x1800B6860
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800AE964 (--1_Lockit@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxunlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}
