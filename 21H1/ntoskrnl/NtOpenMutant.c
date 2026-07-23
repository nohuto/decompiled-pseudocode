/*
 * XREFs of NtOpenMutant @ 0x1406D0080
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405EB090 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenMutant(PHANDLE MutantHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS v8; // ecx
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v10[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)MutantHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)ExMutantObjectType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)v10);
  if ( v8 == -1073741788 && ExCrossVmMutantObjectType )
    v8 = ObOpenObjectByName(
           (__int64)ObjectAttributes,
           (__int64)ExCrossVmMutantObjectType,
           PreviousMode,
           0LL,
           DesiredAccess,
           0LL,
           (__int64)v10);
  if ( v8 >= 0 )
    *MutantHandle = (HANDLE)v10[0];
  return v8;
}
