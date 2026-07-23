/*
 * XREFs of _RtlReleaseRelativeName@4 @ 0x4B2E54B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

void __cdecl RtlReleaseRelativeName(PRTL_RELATIVE_NAME_U RelativeName)
{
  PRTLP_CURDIR_REF CurDirRef; // esi

  CurDirRef = RelativeName->CurDirRef;
  if ( CurDirRef )
  {
    if ( !_InterlockedExchangeAdd(&CurDirRef->ReferenceCount, 0xFFFFFFFF) )
    {
      NtClose(CurDirRef->DirectoryHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, CurDirRef);
    }
    RelativeName->CurDirRef = 0;
  }
}
