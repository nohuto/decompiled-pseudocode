/*
 * XREFs of ExHandleLogBadReference @ 0x1402011B8
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     ObpCloseHandle @ 0x140602550 (ObpCloseHandle.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x14068BE80 (ObReferenceFileObjectForWrite.c)
 *     ExMapHandleToPointerEx @ 0x14069BB9C (ExMapHandleToPointerEx.c)
 * Callees:
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140510AB0 (KeRaiseUserException.c)
 *     ExpUpdateDebugInfo @ 0x140949874 (ExpUpdateDebugInfo.c)
 */

struct _KTHREAD *__fastcall ExHandleLogBadReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        char a3)
{
  struct _KTHREAD *result; // rax

  if ( (*(_BYTE *)(BugCheckParameter2 + 44) & 2) != 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 96) )
      result = (struct _KTHREAD *)ExpUpdateDebugInfo(BugCheckParameter2, KeGetCurrentThread(), BugCheckParameter1, 3LL);
    if ( a3 == 1 )
    {
      result = KeGetCurrentThread();
      if ( result->ApcStateIndex != 1 )
      {
        result = KeGetCurrentThread();
        if ( BugCheckParameter2 == result->ApcState.Process[1].AffinityPadding[8] )
        {
          if ( (NtGlobalFlag & 0x100) != 0 )
            DbgPrintEx(
              0x5Du,
              0,
              "AVRF: Invalid handle %p in process %p \n",
              (const void *)BugCheckParameter1,
              KeGetCurrentThread()->ApcState.Process);
          return (struct _KTHREAD *)KeRaiseUserException(3221225480LL);
        }
      }
    }
    else if ( (NtGlobalFlag & 0x40000000) != 0 )
    {
      KeBugCheckEx(0x93u, BugCheckParameter1, BugCheckParameter2, 0LL, 1uLL);
    }
  }
  return result;
}
