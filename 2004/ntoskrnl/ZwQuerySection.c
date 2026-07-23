/*
 * XREFs of ZwQuerySection @ 0x1403F3FE0
 * Callers:
 *     CmSiGetSectionLength @ 0x14027148C (CmSiGetSectionLength.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T SectionInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
