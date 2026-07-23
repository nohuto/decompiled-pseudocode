/*
 * XREFs of NtOpenSemaphore @ 0x1406C5980
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14060CA70 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS v8; // edx
  void *v10; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SemaphoreHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)SemaphoreHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)ExSemaphoreObjectType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)&v10);
  if ( v8 >= 0 )
    *SemaphoreHandle = v10;
  return v8;
}
