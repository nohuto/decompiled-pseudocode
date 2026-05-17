/*
 * XREFs of RtlReleaseRelativeName @ 0x18001A320
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     LdrpMapResourceFile @ 0x180058A3C (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073680 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180073BCC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpMUIEnumerateFolder @ 0x1800873AC (RtlpMUIEnumerateFolder.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E100C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800E4344 (LdrpResMapFile.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      NtClose(*(HANDLE *)(v1 + 8));
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
