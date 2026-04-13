/*
 * XREFs of _Mtxunlock @ 0x1800B8EC0
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800B0FC4 (--1_Lockit@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxunlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}
