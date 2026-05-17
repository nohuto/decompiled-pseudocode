/*
 * XREFs of _ZwQuerySection@20 @ 0x4B2F2E90
 * Callers:
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     PsspDumpObject_Section @ 0x4B387FF0 (PsspDumpObject_Section.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwQuerySection(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
