/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x1406B8DC0
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1407A8008 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x140A6C5A8 (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140206860 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  PHANDLE v5; // rbx
  char PreviousMode; // si
  POBJECT_TYPE v7; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v10; // [rsp+40h] [rbp-28h] BYREF

  v5 = LinkHandle;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)LinkHandle >= 0x7FFFFFFF0000LL )
      LinkHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *LinkHandle = *LinkHandle;
  }
  v7 = ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(
             (__int64)ObjectAttributes,
             (__int64)v7,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             (__int64)CurrentSilo,
             &v10);
  *v5 = v10;
  return result;
}
