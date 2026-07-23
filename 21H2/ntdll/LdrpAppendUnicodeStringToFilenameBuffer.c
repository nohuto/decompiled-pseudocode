/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x18001A8AC
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpPreprocessDllName @ 0x18001A360 (LdrpPreprocessDllName.c)
 *     LdrpBuildSystem32FileName @ 0x18001A838 (LdrpBuildSystem32FileName.c)
 * Callees:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18001A930 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int FileNameBufferIfNeeded; // edi

  FileNameBufferIfNeeded = 0;
  if ( *a2 )
  {
    FileNameBufferIfNeeded = LdrpAllocateFileNameBufferIfNeeded(a1, *a1 + 2 + (unsigned int)*a2);
    if ( FileNameBufferIfNeeded >= 0 )
    {
      memmove((void *)(*((_QWORD *)a1 + 1) + *a1), *((const void **)a2 + 1), *a2);
      *a1 += *a2;
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
    }
  }
  return (unsigned int)FileNameBufferIfNeeded;
}
