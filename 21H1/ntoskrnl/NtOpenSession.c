/*
 * XREFs of NtOpenSession @ 0x1406EA250
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x1405D4148 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x1405EB090 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  __int64 v7; // rdx
  NTSTATUS result; // eax
  void *v9; // [rsp+48h] [rbp-20h] BYREF

  v9 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SessionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)SessionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)MmSessionObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             (__int64)&v9);
  *SessionHandle = v9;
  return result;
}
