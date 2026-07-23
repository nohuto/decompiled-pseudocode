/*
 * XREFs of _LdrResolveDelayLoadsFromDll@12 @ 0x4B32F670
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpResolveDelayLoadDescriptor@8 @ 0x4B2CE4C8 (_LdrpResolveDelayLoadDescriptor@8.c)
 *     _LdrpGetDelayloadDescriptor@8 @ 0x4B32F7C7 (_LdrpGetDelayloadDescriptor@8.c)
 */

NTSTATUS __cdecl LdrResolveDelayLoadsFromDll(PVOID ParentModuleBase, PCSTR TargetDllName, ULONG Flags)
{
  const IMAGE_DELAYLOAD_DESCRIPTOR *DelayloadDescriptor; // eax

  if ( Flags )
    return -1073741811;
  DelayloadDescriptor = (const IMAGE_DELAYLOAD_DESCRIPTOR *)LdrpGetDelayloadDescriptor(ParentModuleBase);
  if ( DelayloadDescriptor )
    return LdrpResolveDelayLoadDescriptor((char *)ParentModuleBase, DelayloadDescriptor);
  else
    return -1073741515;
}
