/*
 * XREFs of _Mtxunlock @ 0x1800B8A70
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800B0B74 (--1_Lockit@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxunlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}
