/*
 * XREFs of VrpDecommissionKeyContext @ 0x1405CC678
 * Callers:
 *     VrpRegistryCallback @ 0x1405CAF70 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x1405CC640 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDecommissionKeyContext(UNICODE_STRING *a1)
{
  wchar_t *Buffer; // rcx

  Buffer = a1[1].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0x67655256u);
    RtlInitUnicodeString(a1 + 1, 0LL);
  }
}
