/*
 * XREFs of KiLogUserCetSetContextIpValidationFailure @ 0x1403F2C54
 * Callers:
 *     KeVerifyContextIpForUserCet @ 0x1403F2D8C (KeVerifyContextIpForUserCet.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     Feature_CET_User_Audit_Livedump__private_ReportDeviceUsage @ 0x1403F2A74 (Feature_CET_User_Audit_Livedump__private_ReportDeviceUsage.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B51B0 (ExAllocatePool2.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailure(int a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v5; // esi
  struct _EX_RUNDOWN_REF *Process; // rdi
  signed __int32 Ptr_high; // eax
  signed __int32 v10; // ett
  __int64 Pool2; // rbx

  v5 = a4;
  Process = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->Process;
  _m_prefetchw((char *)&Process[314].Ptr + 4);
  Ptr_high = HIDWORD(Process[314].Ptr);
  do
  {
    v10 = Ptr_high;
    Ptr_high = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&Process[314].Ptr + 1,
                 Ptr_high | 0x80000,
                 Ptr_high);
  }
  while ( v10 != Ptr_high );
  if ( (Ptr_high & 0x80000) == 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 64LL, 1668508747LL);
    if ( Pool2 )
    {
      if ( ExAcquireRundownProtection(Process + 139) )
      {
        ObfReferenceObject(Process);
        *(_QWORD *)Pool2 = 0LL;
        *(_QWORD *)(Pool2 + 16) = KiLogUserCetSetContextIpValidationFailureWorker;
        *(_QWORD *)(Pool2 + 24) = Pool2;
        *(_DWORD *)(Pool2 + 32) = a1;
        *(_QWORD *)(Pool2 + 40) = Process;
        *(_QWORD *)(Pool2 + 48) = a3;
        *(_DWORD *)(Pool2 + 56) = v5;
        *(_DWORD *)(Pool2 + 60) = a2;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
      }
      else
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
    }
    Feature_CET_User_Audit_Livedump__private_ReportDeviceUsage();
  }
}
