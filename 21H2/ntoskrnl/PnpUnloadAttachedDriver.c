/*
 * XREFs of PnpUnloadAttachedDriver @ 0x14073E7C8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036E778 (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpUnloadAttachedDriver(_QWORD *a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  unsigned int v4; // esi
  wchar_t *PoolWithTag; // rdi
  __int64 v6; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1[5] == 0LL;
  v2 = a1[6];
  DestinationString = 0LL;
  if ( v1 || a1[1] )
    return 0LL;
  v4 = CmRegistryMachineSystemCurrentControlSetServices.Length + 6 + *(unsigned __int16 *)(v2 + 24);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v4, 0x65647050u);
  if ( PoolWithTag )
  {
    RtlStringCbPrintfW(
      PoolWithTag,
      v4,
      L"%s\\%s",
      CmRegistryMachineSystemCurrentControlSetServices.Buffer,
      *(_QWORD *)(v2 + 32));
    RtlInitUnicodeString(&DestinationString, PoolWithTag);
    LOBYTE(v6) = 1;
    IopUnloadDriver(&DestinationString, v6);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return 0LL;
  }
  return 3221225626LL;
}
