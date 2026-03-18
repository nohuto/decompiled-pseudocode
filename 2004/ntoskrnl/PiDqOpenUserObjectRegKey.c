/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x140645608
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x1405D19A4 (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memset @ 0x14040A280 (memset.c)
 *     _SysCtxRegOpenKey @ 0x1405E1CE0 (_SysCtxRegOpenKey.c)
 *     SeQueryUserSidToken @ 0x1406259FC (SeQueryUserSidToken.c)
 *     RtlConvertSidToUnicodeString @ 0x140642AD0 (RtlConvertSidToUnicodeString.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406458BC (PiDqGetRelativeObjectRegPath.c)
 *     PnpConcatPWSTR @ 0x140645A50 (PnpConcatPWSTR.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     _PnpCtxRegCreateTree @ 0x1406C46C0 (_PnpCtxRegCreateTree.c)
 *     _PnpValidateObjectName @ 0x14070506C (_PnpValidateObjectName.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  void *v10; // r15
  __int64 v11; // rcx
  int RelativeObjectRegPath; // ebx
  bool v13; // zf
  bool v14; // r14
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v16; // rax
  PACCESS_TOKEN PrimaryToken; // rsi
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int Tree; // eax
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v25; // [rsp+48h] [rbp-B8h]
  void *v26; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v28; // [rsp+60h] [rbp-A0h]
  void *v29; // [rsp+68h] [rbp-98h]
  PVOID TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  int v31[2]; // [rsp+78h] [rbp-88h]
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0;
  v25 = a3;
  v28 = a2;
  *(_QWORD *)v31 = a1;
  TokenInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  v29 = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  UnicodeString = 0LL;
  v26 = 0LL;
  v24 = 0;
  memset(Sid, 0, 0x44uLL);
  *a6 = 0LL;
  RelativeObjectRegPath = PnpValidateObjectName(v11, a1, a2);
  if ( RelativeObjectRegPath >= 0 )
  {
    v13 = a5 == 0LL;
    if ( !a5 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v13 = 1;
    }
    v14 = v13;
    p_SubjectContext = &SubjectContext;
    if ( a5 )
      p_SubjectContext = a5;
    v13 = p_SubjectContext->ClientToken == 0LL;
    v16 = &SubjectContext;
    if ( v13 )
    {
      if ( a5 )
        v16 = a5;
      PrimaryToken = v16->PrimaryToken;
    }
    else
    {
      if ( a5 )
        v16 = a5;
      PrimaryToken = v16->ClientToken;
    }
    v18 = SeQueryInformationToken(PrimaryToken, TokenImpersonationLevel, &TokenInformation);
    RelativeObjectRegPath = v18;
    if ( v18 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        v6 = v14;
        goto LABEL_28;
      }
      goto LABEL_12;
    }
    v6 = v14;
    if ( v18 == -1073741821 )
    {
LABEL_12:
      SeQueryUserSidToken((__int64)PrimaryToken, Sid, 0x44u, 0LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      v6 = v14;
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (char)L"\\REGISTRY\\USER\\");
        if ( RelativeObjectRegPath < 0 )
        {
          v9 = v29;
        }
        else
        {
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v19 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
          else
            v19 = 0LL;
          v9 = v29;
          RelativeObjectRegPath = SysCtxRegOpenKey(v19, 0LL, (__int64)v29, 0, 4u, (__int64)&Handle);
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v31[0]);
            if ( RelativeObjectRegPath < 0 )
            {
              v10 = v26;
            }
            else
            {
              if ( a4 )
              {
                v10 = v26;
                Tree = PnpCtxRegCreateTree(
                         PiPnpRtlCtx,
                         (_DWORD)Handle,
                         (_DWORD)v26,
                         0,
                         v25,
                         0LL,
                         (__int64)a6,
                         (__int64)&v24);
              }
              else
              {
                v24 = 2;
                if ( *(_QWORD *)&PiPnpRtlCtx )
                  v20 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
                else
                  v20 = 0LL;
                v10 = v26;
                Tree = SysCtxRegOpenKey(v20, (__int64)Handle, (__int64)v26, 0, v25, (__int64)a6);
              }
              RelativeObjectRegPath = Tree;
              v6 = v14;
              if ( Tree >= 0 )
                v6 = v14;
            }
          }
        }
      }
    }
  }
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
LABEL_28:
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
