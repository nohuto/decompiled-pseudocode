/*
 * XREFs of _Mtxdst @ 0x1800B8E8C
 * Callers:
 *     ??1_Init_locks@std@@QEAA@XZ @ 0x1800B0F78 (--1_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
