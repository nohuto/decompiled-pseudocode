/*
 * XREFs of NtOpenSection @ 0x1406E2880
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  __int64 v7; // rdx
  NTSTATUS result; // eax
  void *v9; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SectionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)SectionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)MmSectionObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             (__int64)&v9);
  *SectionHandle = v9;
  return result;
}
