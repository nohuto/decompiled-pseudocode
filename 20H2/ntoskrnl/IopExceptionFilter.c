/*
 * XREFs of IopExceptionFilter @ 0x1404FEEDC
 * Callers:
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     IopProcessBufferedIoCompletion @ 0x1403F0428 (IopProcessBufferedIoCompletion.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F11C0 (IopValidateAndGetWriteParameters.c)
 *     NtCopyFileChunk @ 0x1405CBD40 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     NtReadFileScatter @ 0x1406C05A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406C0D40 (NtWriteFileGather.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopExceptionFilter(int **a1, int *a2)
{
  int v2; // r8d
  int v3; // eax

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 && (unsigned int)(*a1)[6] >= 3 )
  {
    v2 = (*a1)[12];
    *a2 = v2;
  }
  v3 = *a2;
  if ( v2 == -2147483646 )
    v3 = -1073741115;
  *a2 = v3;
  return 1LL;
}
