/*
 * XREFs of CcCopyWriteWontFlush @ 0x1402D0780
 * Callers:
 *     FsRtlCopyWrite @ 0x14088A9F0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcIsFileObjectDirectMapped @ 0x14023F954 (CcIsFileObjectDirectMapped.c)
 *     PsGetBaseIoPriorityThread @ 0x1402D0980 (PsGetBaseIoPriorityThread.c)
 *     CcCanIWriteStreamEx @ 0x14031E220 (CcCanIWriteStreamEx.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  __int64 Flags; // rdx
  int BaseIoPriorityThread; // eax
  int v6; // edx
  int v7; // r8d
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
          || (unsigned __int8)CcCanIWriteStreamEx(
                                *((_QWORD *)PspSystemPartition + 1),
                                (_DWORD)FileObject,
                                v7,
                                0,
                                0,
                                0LL) )
        {
          return 1;
        }
      }
    }
  }
  result = CcIsFileObjectDirectMapped((__int64)FileObject, 0);
  if ( result )
    return 1;
  return result;
}
