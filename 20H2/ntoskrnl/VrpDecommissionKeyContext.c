/*
 * XREFs of VrpDecommissionKeyContext @ 0x1405D2CD8
 * Callers:
 *     VrpRegistryCallback @ 0x1405D15D0 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x1405D2CA0 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
