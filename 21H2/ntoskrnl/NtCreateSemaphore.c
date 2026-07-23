/*
 * XREFs of NtCreateSemaphore @ 0x14071C3F0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSemaphore @ 0x140361350 (KeInitializeSemaphore.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  PHANDLE v7; // rdi
  char PreviousMode; // si
  NTSTATUS inserted; // ecx
  char *v11; // [rsp+20h] [rbp-58h]
  PRKSEMAPHORE Semaphore; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h] BYREF

  v7 = SemaphoreHandle;
  v13 = 0LL;
  Semaphore = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)SemaphoreHandle >= 0x7FFFFFFF0000LL )
      SemaphoreHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *SemaphoreHandle = *SemaphoreHandle;
  }
  if ( MaximumCount <= 0 || InitialCount < 0 || InitialCount > MaximumCount )
    return -1073741811;
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExSemaphoreObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v11,
               32,
               0,
               0,
               &Semaphore,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeSemaphore(Semaphore, InitialCount, MaximumCount);
    inserted = ObInsertObjectEx((char *)Semaphore, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v13);
    LODWORD(Semaphore) = inserted;
    if ( inserted >= 0 )
      *v7 = (HANDLE)v13;
  }
  return inserted;
}
