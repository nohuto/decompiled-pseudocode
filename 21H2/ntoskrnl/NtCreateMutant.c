/*
 * XREFs of NtCreateMutant @ 0x1406B4F20
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutantEx @ 0x14029E510 (KeInitializeMutantEx.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  HANDLE *v4; // rbx
  char PreviousMode; // di
  NTSTATUS Object; // ecx
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF

  v4 = MutantHandle;
  v8 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    MutantHandle = (PHANDLE)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v4 < 0x7FFFFFFF0000LL )
      MutantHandle = v4;
    *MutantHandle = *MutantHandle;
  }
  LOBYTE(MutantHandle) = PreviousMode;
  Object = ObCreateObjectEx((_DWORD)MutantHandle, (_DWORD)ExMutantObjectType, (_DWORD)ObjectAttributes, PreviousMode);
  if ( Object >= 0 )
  {
    KeInitializeMutantEx(0LL);
    Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v8);
    if ( Object >= 0 )
      *v4 = (HANDLE)v8;
  }
  return Object;
}
