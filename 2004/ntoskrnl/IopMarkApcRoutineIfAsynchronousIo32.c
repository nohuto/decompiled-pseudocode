/*
 * XREFs of IopMarkApcRoutineIfAsynchronousIo32 @ 0x14028FC60
 * Callers:
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x14068CF20 (BuildQueryDirectoryIrp.c)
 *     NtLockFile @ 0x14069F3F0 (NtLockFile.c)
 *     NtReadFileScatter @ 0x1406EBFB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406EC5C0 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406FCF10 (NtNotifyChangeDirectoryFileEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IopMarkApcRoutineIfAsynchronousIo32(unsigned int **a1, __int64 *a2, char a3)
{
  unsigned int *v4; // rcx
  unsigned __int64 result; // rax
  __int16 v6; // r11
  unsigned int *v7; // rcx
  __int64 v8; // r10

  v4 = *a1;
  result = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( result )
  {
    v6 = *(_WORD *)(result + 8);
    result = 332LL;
    if ( v6 == 332 || (result = 452LL, v6 == 452) )
    {
      if ( !a3 )
      {
        v7 = (unsigned int *)*v4;
        v8 = *a2 | 1;
        result = *v7;
        *v7 = result;
        *a1 = v7;
        *a2 = v8;
      }
    }
  }
  return result;
}
