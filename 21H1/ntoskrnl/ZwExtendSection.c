/*
 * XREFs of ZwExtendSection @ 0x1403F3F70
 * Callers:
 *     CmSiExtendSection @ 0x140321EAC (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
