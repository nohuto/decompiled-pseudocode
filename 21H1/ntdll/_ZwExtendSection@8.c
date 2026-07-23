/*
 * XREFs of _ZwExtendSection@8 @ 0x4B2F37A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  return Wow64SystemServiceCall();
}
