/*
 * XREFs of _EngUnmapFile@4 @ 0x1E916A
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 */

BOOL __stdcall EngUnmapFile(ULONG_PTR iFile)
{
  NTSTATUS v1; // esi

  if ( !iFile )
    return 0;
  v1 = MmUnmapViewInSessionSpace(*(PVOID *)(iFile + 8));
  vUnreferenceFileviewSection(iFile);
  Win32FreePool((PATHOBJ *)iFile);
  return v1 >= 0;
}
