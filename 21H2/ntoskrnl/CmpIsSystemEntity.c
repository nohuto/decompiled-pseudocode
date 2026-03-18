/*
 * XREFs of CmpIsSystemEntity @ 0x1406B67A0
 * Callers:
 *     CmDoVirtualTest @ 0x14023BD3C (CmDoVirtualTest.c)
 *     KCBNeedsVirtualImage @ 0x14023BD7C (KCBNeedsVirtualImage.c)
 *     KCBNeedsVirtualImage_0 @ 0x14053F084 (KCBNeedsVirtualImage_0.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406B6444 (CmpVEPerformOpenAccessCheck.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpVEExecuteOpenLogic @ 0x1407C64A0 (CmpVEExecuteOpenLogic.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     CmpIsVirtEnabledForSubject @ 0x1406B6830 (CmpIsVirtEnabledForSubject.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

bool __fastcall CmpIsSystemEntity(char a1, struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext, int *a3)
{
  char v3; // si
  bool v5; // bl
  int v7; // eax
  int v8; // eax
  struct _KPROCESS *CurrentThreadProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = 1;
  if ( CmpVEEnabled )
  {
    if ( a3 && (*a3 & 1) != 0 )
    {
      return (*a3 & 2) != 0;
    }
    else if ( a1 )
    {
      if ( !p_SubjectContext )
      {
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &SubjectContext);
        p_SubjectContext = &SubjectContext;
        v3 = 1;
      }
      v5 = (unsigned __int8)CmpIsVirtEnabledForSubject(p_SubjectContext) == 0;
      if ( a3 )
      {
        v7 = *a3;
        if ( v5 )
          v8 = v7 | 3;
        else
          v8 = v7 | 5;
        *a3 = v8;
      }
      if ( v3 )
        SeReleaseSubjectContext(&SubjectContext);
    }
  }
  return v5;
}
