/*
 * XREFs of _SetLastNtError@4 @ 0x1B6D51
 * Callers:
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 *     _EditionCreateDesktopEntryPoint@24 @ 0xF2188 (_EditionCreateDesktopEntryPoint@24.c)
 *     _EditionGetUserObjectInformationEntryPoint@20 @ 0xF2822 (_EditionGetUserObjectInformationEntryPoint@20.c)
 *     _NtUserEnableIAMAccess@8 @ 0xF2AAE (_NtUserEnableIAMAccess@8.c)
 * Callees:
 *     <none>
 */

struct _NT_TIB *__thiscall SetLastNtError(NTSTATUS Status)
{
  struct _NT_TIB *v1; // eax

  v1 = (struct _NT_TIB *)RtlNtStatusToDosError(Status);
  return UserSetLastError(v1);
}
