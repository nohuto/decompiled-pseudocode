/*
 * XREFs of _Mtxunlock @ 0x1800BAF70
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800B3074 (--1_Lockit@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxunlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}
