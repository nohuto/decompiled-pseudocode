/*
 * XREFs of ObpSetObjectAuditInfo @ 0x1408D9C58
 * Callers:
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x140669A30 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1406DC910 (RtlValidSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpSetObjectAuditInfo(__int64 a1, PSECURITY_DESCRIPTOR *a2, char a3)
{
  _QWORD *v7; // rbx
  PSECURITY_DESCRIPTOR v8; // rdi
  SIZE_T v9; // r14
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rcx

  if ( !RtlValidSecurityDescriptor(*a2) )
    return 3221225593LL;
  if ( (*(_BYTE *)(a1 + 26) & 0x20) != 0 )
    v7 = (_QWORD *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x3F]);
  else
    v7 = 0LL;
  if ( v7 && !*v7 )
  {
    v8 = *a2;
    if ( a3 )
    {
      *a2 = 0LL;
    }
    else
    {
      v9 = RtlLengthSecurityDescriptor(*a2);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x4941624Fu);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      memmove(PoolWithTag, *a2, v9);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
    v12 = a1 + 16;
    if ( *v7 )
    {
      ExReleasePushLockEx(v12, 0LL);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      *v7 = v8;
      ExReleasePushLockEx(v12, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return 0LL;
}
