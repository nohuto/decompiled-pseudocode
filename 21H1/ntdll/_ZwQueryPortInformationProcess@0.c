/*
 * XREFs of _ZwQueryPortInformationProcess@0 @ 0x4B2F3F00
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwQueryPortInformationProcess()
{
  return Wow64SystemServiceCall();
}
