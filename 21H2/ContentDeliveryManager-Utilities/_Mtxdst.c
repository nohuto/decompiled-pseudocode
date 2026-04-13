/*
 * XREFs of _Mtxdst @ 0x1800BAF3C
 * Callers:
 *     ??1_Init_locks@std@@QEAA@XZ @ 0x1800B3028 (--1_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
