/*
 * XREFs of CmpCheckExeOwnerForPca @ 0x14076FD28
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023C620 (PsGetCurrentThreadProcess.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1405DA7E0 (RtlGetOwnerSecurityDescriptor.c)
 *     ObQuerySecurityObject @ 0x1406F4264 (ObQuerySecurityObject.c)
 *     PsReferenceProcessFilePointer @ 0x1406F4310 (PsReferenceProcessFilePointer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char CmpCheckExeOwnerForPca()
{
  _KPROCESS *CurrentThreadProcess; // rax
  PVOID PoolWithTag; // rax
  struct _DMA_ADAPTER *v2; // rcx
  void *v3; // rdi
  int v4; // ebx
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF
  PSID Owner; // [rsp+50h] [rbp+18h] BYREF

  DmaAdapter = 0LL;
  LODWORD(NumberOfBytes) = 0;
  Owner = 0LL;
  if ( !CmpTrustedInstallerSid )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  if ( (int)PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)CurrentThreadProcess, (ULONG_PTR *)&DmaAdapter) < 0 )
    return 0;
  if ( (unsigned int)ObQuerySecurityObject((__int64)DmaAdapter, 1, 0LL, 0, &NumberOfBytes) != -1073741789 )
  {
    v2 = DmaAdapter;
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
  v2 = DmaAdapter;
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_12:
    HalPutDmaAdapter(v2);
    return 0;
  }
  v4 = ObQuerySecurityObject((__int64)DmaAdapter, 1, (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes);
  HalPutDmaAdapter(DmaAdapter);
  if ( v4 < 0
    || RtlGetOwnerSecurityDescriptor(v3, &Owner, (PBOOLEAN)&NumberOfBytes) < 0
    || Owner && RtlEqualSid(CmpTrustedInstallerSid, Owner) )
  {
    ExFreePoolWithTag(v3, 0);
    return 0;
  }
  ExFreePoolWithTag(v3, 0);
  return 1;
}
