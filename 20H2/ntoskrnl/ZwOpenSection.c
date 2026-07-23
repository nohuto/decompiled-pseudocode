/*
 * XREFs of ZwOpenSection @ 0x1403F8850
 * Callers:
 *     NtGetNlsSectionPtr @ 0x1406D1CC0 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x140A4888C (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A575E0 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
