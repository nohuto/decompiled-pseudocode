/*
 * XREFs of VrpDecommissionKeyContext @ 0x1405CB2A8
 * Callers:
 *     VrpRegistryCallback @ 0x1405C9BA0 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x1405CB270 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
