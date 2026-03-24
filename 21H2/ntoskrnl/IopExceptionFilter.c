/*
 * XREFs of IopExceptionFilter @ 0x140500A60
 * Callers:
 *     IopCompleteRequest @ 0x140342B20 (IopCompleteRequest.c)
 *     IopProcessBufferedIoCompletion @ 0x1403F112C (IopProcessBufferedIoCompletion.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2018 (IopValidateAndGetWriteParameters.c)
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     NtReadFileScatter @ 0x140699E80 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14069A620 (NtWriteFileGather.c)
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
