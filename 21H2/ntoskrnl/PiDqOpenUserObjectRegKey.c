/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x1406A98B8
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x1406A9838 (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegCreateTree @ 0x14063E278 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x1406426AC (_SysCtxRegOpenKey.c)
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x140656BD0 (SeQueryInformationToken.c)
 *     RtlConvertSidToUnicodeString @ 0x1406745A0 (RtlConvertSidToUnicodeString.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406A9B6C (PiDqGetRelativeObjectRegPath.c)
 *     PnpConcatPWSTR @ 0x1406A9C64 (PnpConcatPWSTR.c)
 *     _PnpValidateObjectName @ 0x1406A9D88 (_PnpValidateObjectName.c)
 *     SeQueryUserSidToken @ 0x140706E24 (SeQueryUserSidToken.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6)
{
  bool v6; // di
  void *v9; // r12
  __int64 v10; // rcx
  int RelativeObjectRegPath; // ebx
  bool v12; // zf
  bool v13; // r14
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v15; // rax
  PACCESS_TOKEN PrimaryToken; // rsi
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int Tree; // eax
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-A0h]
  void *v26; // [rsp+68h] [rbp-98h]
  PVOID TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  int v28[2]; // [rsp+78h] [rbp-88h]
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0;
  v25 = a2;
  *(_QWORD *)v28 = a1;
  TokenInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  v26 = 0LL;
  Handle = 0LL;
  UnicodeString = 0LL;
  memset(Sid, 0, 0x44uLL);
  *a6 = 0LL;
  RelativeObjectRegPath = PnpValidateObjectName(v10, a1, a2);
  if ( RelativeObjectRegPath >= 0 )
  {
    v12 = a5 == 0LL;
    if ( !a5 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v12 = 1;
    }
    v13 = v12;
    p_SubjectContext = &SubjectContext;
    if ( a5 )
      p_SubjectContext = a5;
    v12 = p_SubjectContext->ClientToken == 0LL;
    v15 = &SubjectContext;
    if ( v12 )
    {
      if ( a5 )
        v15 = a5;
      PrimaryToken = v15->PrimaryToken;
    }
    else
    {
      if ( a5 )
        v15 = a5;
      PrimaryToken = v15->ClientToken;
    }
    v17 = SeQueryInformationToken(PrimaryToken, TokenImpersonationLevel, &TokenInformation);
    RelativeObjectRegPath = v17;
    if ( v17 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        v6 = v13;
        goto LABEL_26;
      }
      goto LABEL_12;
    }
    v6 = v13;
    if ( v17 == -1073741821 )
    {
LABEL_12:
      SeQueryUserSidToken(PrimaryToken, Sid, 68LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      v6 = v13;
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (char)L"\\REGISTRY\\USER\\");
        if ( RelativeObjectRegPath < 0 )
        {
          v9 = v26;
        }
        else
        {
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v18 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
          else
            v18 = 0LL;
          v9 = v26;
          RelativeObjectRegPath = SysCtxRegOpenKey(v18, 0LL, (__int64)v26, 0, 4u, (__int64)&Handle);
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v28[0]);
            if ( RelativeObjectRegPath >= 0 )
            {
              if ( a4 )
              {
                Tree = PnpCtxRegCreateTree(*(__int64 *)&PiPnpRtlCtx);
              }
              else
              {
                v19 = *(_QWORD *)&PiPnpRtlCtx ? *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL) : 0LL;
                Tree = SysCtxRegOpenKey(v19, (__int64)Handle, 0LL, 0, a3, (__int64)a6);
              }
              RelativeObjectRegPath = Tree;
              v6 = v13;
              if ( Tree >= 0 )
                v6 = v13;
            }
          }
        }
      }
    }
  }
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
LABEL_26:
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706E50u);
  RtlFreeAnsiString(&UnicodeString);
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return (unsigned int)RelativeObjectRegPath;
}
