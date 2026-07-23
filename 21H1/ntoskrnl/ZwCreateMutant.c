/*
 * XREFs of ZwCreateMutant @ 0x1403F3990
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140A6F888 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
