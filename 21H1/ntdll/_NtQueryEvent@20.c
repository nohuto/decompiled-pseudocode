/*
 * XREFs of _NtQueryEvent@20 @ 0x4B2F2EE0
 * Callers:
 *     PsspDumpObject_Event @ 0x4B387F30 (PsspDumpObject_Event.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtQueryEvent(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
