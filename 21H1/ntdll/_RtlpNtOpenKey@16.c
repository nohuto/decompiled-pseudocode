/*
 * XREFs of _RtlpNtOpenKey@16 @ 0x4B36D250
 * Callers:
 *     <none>
 * Callees:
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 */

NTSTATUS __stdcall RtlpNtOpenKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        int a4)
{
  if ( ObjectAttributes )
    ObjectAttributes->Attributes &= 0xFFFFFFCF;
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
