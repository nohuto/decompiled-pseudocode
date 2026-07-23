/*
 * XREFs of ZwQuerySection @ 0x1403F2D50
 * Callers:
 *     CmSiGetSectionLength @ 0x1402E0B14 (CmSiGetSectionLength.c)
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
