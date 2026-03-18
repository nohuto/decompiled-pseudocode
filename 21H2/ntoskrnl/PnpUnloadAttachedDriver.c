/*
 * XREFs of PnpUnloadAttachedDriver @ 0x140766914
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1402DDAE4 (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402E1280 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpUnloadAttachedDriver(_QWORD *a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  unsigned int v4; // esi
  wchar_t *Pool2; // rdi
  __int64 v6; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1[5] == 0LL;
  v2 = a1[6];
  DestinationString = 0LL;
  if ( v1 || a1[1] )
    return 0LL;
  v4 = CmRegistryMachineSystemCurrentControlSetServices.Length + 6 + *(unsigned __int16 *)(v2 + 24);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v4, 1701081168LL);
  if ( Pool2 )
  {
    RtlStringCbPrintfW(
      Pool2,
      v4,
      L"%s\\%s",
      CmRegistryMachineSystemCurrentControlSetServices.Buffer,
      *(_QWORD *)(v2 + 32));
    RtlInitUnicodeString(&DestinationString, Pool2);
    LOBYTE(v6) = 1;
    IopUnloadDriver(&DestinationString, v6);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return 0LL;
  }
  return 3221225626LL;
}
