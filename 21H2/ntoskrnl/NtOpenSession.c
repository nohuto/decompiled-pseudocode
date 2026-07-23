/*
 * XREFs of NtOpenSession @ 0x14061F580
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x1406BE55C (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x14064AA70 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  __int64 v6; // rdx
  NTSTATUS result; // eax
  void *v8; // [rsp+48h] [rbp-20h] BYREF

  v3 = (int)ObjectAttributes;
  v8 = 0LL;
  LOBYTE(ObjectAttributes) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)ObjectAttributes )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SessionHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)SessionHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  result = ObOpenObjectByName(
             v3,
             (_DWORD)MmSessionObjectType,
             (_DWORD)ObjectAttributes,
             0,
             DesiredAccess,
             0LL,
             (__int64)&v8);
  *SessionHandle = v8;
  return result;
}
