/*
 * XREFs of _Mtxlock @ 0x1800B8A60
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800B0AE4 (--0_Lockit@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxlock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
