/*
 * XREFs of _WerpIsDebugPortPresent@0 @ 0x4B33B23B
 * Callers:
 *     _WerpBreakIntoDebuggerIfPresent@12 @ 0x4B33AF53 (_WerpBreakIntoDebuggerIfPresent@12.c)
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

BOOL __stdcall WerpIsDebugPortPresent()
{
  int v0; // esi
  int ProcessInformation; // [esp+4h] [ebp-4h] BYREF

  v0 = 0;
  ProcessInformation = 0;
  if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessDebugPort, &ProcessInformation, 4u, 0) >= 0 )
    return ProcessInformation != 0;
  return v0;
}
