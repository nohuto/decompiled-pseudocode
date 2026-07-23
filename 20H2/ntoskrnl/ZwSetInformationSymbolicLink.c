/*
 * XREFs of ZwSetInformationSymbolicLink @ 0x1403FB4D0
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140796470 (ObpInitializeRootNamespace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
