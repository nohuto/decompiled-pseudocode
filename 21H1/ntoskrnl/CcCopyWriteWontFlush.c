/*
 * XREFs of CcCopyWriteWontFlush @ 0x14027B070
 * Callers:
 *     FsRtlCopyWrite @ 0x140886480 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCanIWriteStreamEx @ 0x14022E440 (CcCanIWriteStreamEx.c)
 *     PsGetBaseIoPriorityThread @ 0x14027B270 (PsGetBaseIoPriorityThread.c)
 *     CcIsFileObjectDirectMapped @ 0x140311920 (CcIsFileObjectDirectMapped.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  __int64 Flags; // rdx
  int BaseIoPriorityThread; // eax
  int v6; // edx
  unsigned int v7; // r8d
  __int64 v8; // r9
  BOOLEAN result; // al

  if ( Length < 0x1000000 )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 0x10) == 0 )
    {
      if ( (BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread(), Flags), BaseIoPriorityThread < 2)
        && (struct _KTHREAD *)v8 == KeGetCurrentThread()
        && *(_DWORD *)(v8 + 1360)
        || BaseIoPriorityThread > 0 )
      {
        if ( (v6 & 0x1000000) == 0
          || CcCanIWriteStreamEx(*((unsigned __int64 **)PspSystemPartition + 1), (__int64)FileObject, v7, 0, 0, 0LL) )
        {
          return 1;
        }
      }
    }
  }
  result = CcIsFileObjectDirectMapped(FileObject, 0LL);
  if ( result )
    return 1;
  return result;
}
