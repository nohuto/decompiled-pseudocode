/*
 * XREFs of ZwExtendSection @ 0x1403F5200
 * Callers:
 *     CmSiExtendSection @ 0x140270058 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
