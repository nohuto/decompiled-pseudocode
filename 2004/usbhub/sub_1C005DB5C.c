/*
 * XREFs of sub_1C005DB5C @ 0x1C005DB5C
 * Callers:
 *     sub_1C005CD1C @ 0x1C005CD1C (sub_1C005CD1C.c)
 *     sub_1C005CFC8 @ 0x1C005CFC8 (sub_1C005CFC8.c)
 *     sub_1C005D2FC @ 0x1C005D2FC (sub_1C005D2FC.c)
 *     sub_1C005D3F8 @ 0x1C005D3F8 (sub_1C005D3F8.c)
 *     sub_1C005D550 @ 0x1C005D550 (sub_1C005D550.c)
 *     sub_1C005D704 @ 0x1C005D704 (sub_1C005D704.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C005DB5C(__int64 a1, const WCHAR *a2, void **a3)
{
  struct _UNICODE_STRING v5; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v5 = 0LL;
  RtlInitUnicodeString(&v5, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v5;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
}
