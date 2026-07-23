/*
 * XREFs of ZwOpenSection @ 0x1403F2A10
 * Callers:
 *     NtGetNlsSectionPtr @ 0x1406DC0D0 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x140A4965C (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A51260 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
