/*
 * XREFs of CarWriteLivedump @ 0x1406055D0
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     CarDoLiveDump @ 0x1406052FC (CarDoLiveDump.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140A81B20 (VfUtilCaptureViolationKernelStack.c)
 */

__int64 __fastcall CarWriteLivedump(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, bool *a6)
{
  struct _CONTEXT *Pool2; // rax
  int v11; // r8d

  if ( CarPreviousDumpTime && MEMORY[0xFFFFF78000000014] - CarPreviousDumpTime < 36000000000LL
    || _InterlockedCompareExchange(&CarLkdInProgress, 1, 0) )
  {
    v11 = -2147483631;
    goto LABEL_11;
  }
  Pool2 = (struct _CONTEXT *)ExAllocatePool2(64LL, 1232LL, 1316118851LL);
  qword_140C18EE8 = Pool2;
  if ( !Pool2 )
  {
LABEL_9:
    v11 = -1073741595;
LABEL_11:
    *a6 = 1;
    return (unsigned int)v11;
  }
  if ( !(unsigned __int8)VfUtilCaptureViolationKernelStack(Pool2) )
  {
    if ( qword_140C18EE8 )
    {
      ExFreePoolWithTag(qword_140C18EE8, 0x4E726143u);
      qword_140C18EE8 = 0LL;
    }
    goto LABEL_9;
  }
  v11 = CarDoLiveDump(a1, a2, a3, a4, a5);
  *a6 = v11 < 0;
  return (unsigned int)v11;
}
