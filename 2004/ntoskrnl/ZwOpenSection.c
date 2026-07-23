/*
 * XREFs of ZwOpenSection @ 0x1403F3CA0
 * Callers:
 *     NtGetNlsSectionPtr @ 0x1406FF070 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x140A425EC (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A56F60 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
