/*
 * XREFs of SeAuditFipsCryptoSelftests @ 0x140919210
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14030E2D0 (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x1403BD520 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14064FF78 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x140920E20 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditFipsCryptoSelftests(char a1, unsigned int a2)
{
  __int64 v3; // rdi
  _QWORD **PrimaryToken; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // r14
  int AllocatedFullProcessImageName; // ebx
  int v8; // ecx
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  SubjectContext.ClientToken = 0LL;
  v3 = a2;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset(Src, 0, 0x418uLL);
  P = 0LL;
  LODWORD(Src[0]) = 1;
  LOWORD(Src[2]) = 102;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  Src[7] = 0x2000000001LL;
  Src[6] = *PrimaryToken[19];
  HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(Src[6] + 1LL) + 8;
  Src[10] = &SeSubsystemName;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    Src[11] = 0x80000000BLL;
    Src[12] = Flink;
    v8 = *(unsigned __int16 *)P + 16;
    LODWORD(Src[15]) = 2;
    HIDWORD(Src[15]) = v8;
    Src[18] = P;
    LODWORD(Src[1]) = 4;
    if ( a1 )
    {
      HIDWORD(Src[0]) = 6417;
      WORD1(Src[2]) = 8;
    }
    else
    {
      HIDWORD(Src[0]) = 6418;
      WORD1(Src[2]) = 16;
      Src[19] = 0x40000000ALL;
      Src[20] = v3;
      LODWORD(Src[1]) = 5;
    }
    SepAdtLogAuditRecord(Src);
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
}
