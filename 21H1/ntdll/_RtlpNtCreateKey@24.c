/*
 * XREFs of _RtlpNtCreateKey@24 @ 0x4B36D150
 * Callers:
 *     <none>
 * Callees:
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 */

NTSTATUS __stdcall RtlpNtCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        int a4,
        int a5,
        PULONG Disposition)
{
  if ( ObjectAttributes )
    ObjectAttributes->Attributes &= 0xFFFFFFCF;
  return ZwCreateKey(KeyHandle, DesiredAccess, ObjectAttributes, 0, 0, 0, Disposition);
}
