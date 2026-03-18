/*
 * XREFs of KiLogUserCetSetContextIpValidationFailure @ 0x1405697EC
 * Callers:
 *     KeVerifyContextIpForUserCet @ 0x1402989A8 (KeVerifyContextIpForUserCet.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

unsigned __int64 __fastcall KiLogUserCetSetContextIpValidationFailure(int a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v5; // esi
  struct _EX_RUNDOWN_REF *Process; // rdi
  unsigned __int64 result; // rax
  int v10; // ett
  __int64 Pool2; // rbx
  int v12; // [rsp+30h] [rbp-28h]

  v5 = a4;
  Process = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->Process;
  _m_prefetchw((char *)&Process[314].Ptr + 4);
  LODWORD(result) = HIDWORD(Process[314].Ptr);
  do
  {
    v10 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[314].Ptr + 1,
                             result | 0x80000,
                             result);
  }
  while ( v10 != (_DWORD)result );
  if ( (result & 0x80000) == 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 64LL, 1668508747LL);
    if ( Pool2 )
    {
      if ( ExAcquireRundownProtection(Process + 139) )
      {
        ObfReferenceObjectWithTag(Process, 0x746C6644u);
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
    return (unsigned __int64)wil_details_FeatureReporting_ReportUsageToService(
                               (__int64)&Feature_CET_User_Audit_Livedump__private_reporting,
                               0x178806Fu,
                               0,
                               0,
                               (__int64)&Feature_LiveDumpOnAppxAllUserStoreAccessDenied_logged_traits,
                               0,
                               v12);
  }
  return result;
}
