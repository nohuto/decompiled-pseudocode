/*
 * XREFs of ZwExtendSection @ 0x1403F9DD0
 * Callers:
 *     CmSiExtendSection @ 0x140203AC0 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
