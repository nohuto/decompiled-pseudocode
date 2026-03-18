/*
 * XREFs of CmpCheckExeOwnerForPca @ 0x14076B9E4
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 * Callees:
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsGetCurrentThreadProcess @ 0x14031C770 (PsGetCurrentThreadProcess.c)
 *     PsReferenceProcessFilePointer @ 0x14068ECE0 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x14068ED58 (ObQuerySecurityObject.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1407119B0 (RtlGetOwnerSecurityDescriptor.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
