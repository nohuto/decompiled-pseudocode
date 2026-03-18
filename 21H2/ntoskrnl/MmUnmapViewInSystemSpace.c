/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x1406DF130
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14025C690 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402D708C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403D525C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x1403D79F4 (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x140639B54 (ExpDeleteSiloState.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
  return 0;
}
