/*
 * XREFs of EngUnmapFile @ 0x1C0289770
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C008EC14 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 */

BOOL __stdcall EngUnmapFile(ULONG_PTR iFile)
{
  BOOL v1; // esi
  NTSTATUS v3; // ebx

  v1 = 0;
  if ( !iFile )
    return 0;
  v3 = MmUnmapViewInSessionSpace(*(PVOID *)(iFile + 8));
  vUnreferenceFileviewSection((struct _FILEVIEW *)iFile);
  Win32FreePool(iFile);
  LOBYTE(v1) = v3 >= 0;
  return v1;
}
