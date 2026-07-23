/*
 * XREFs of RtlpNtOpenKey @ 0x18007D680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlpNtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  if ( ObjectAttributes )
    ObjectAttributes->Attributes &= 0xFFFFFFCF;
  return NtOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
