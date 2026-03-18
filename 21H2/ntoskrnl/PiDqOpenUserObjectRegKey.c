/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x1406998CC
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x14069984C (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     SeQueryUserSidToken @ 0x14066A374 (SeQueryUserSidToken.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140699B5C (PiDqGetRelativeObjectRegPath.c)
 *     _PnpValidateObjectName @ 0x140699C30 (_PnpValidateObjectName.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     _PnpCtxRegCreateTree @ 0x140772AA0 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     PnpConcatPWSTR @ 0x14078C9E8 (PnpConcatPWSTR.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6)
{
  char v6; // r13
  void *v9; // rsi
  void *v10; // rdi
  __int64 v11; // rcx
  NTSTATUS RelativeObjectRegPath; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  PACCESS_TOKEN ClientToken; // r14
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  NTSTATUS Tree; // eax
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  void *v23; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *v25; // [rsp+60h] [rbp-A0h]
  PVOID TokenInformation; // [rsp+68h] [rbp-98h] BYREF
  int v27[2]; // [rsp+70h] [rbp-90h]
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0;
  *(_QWORD *)v27 = a1;
  TokenInformation = 0LL;
  v25 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  UnicodeString = 0LL;
  v22 = 0;
  memset(Sid, 0, 0x44uLL);
  *a6 = 0LL;
  RelativeObjectRegPath = PnpValidateObjectName(v11, a1, a2);
  if ( RelativeObjectRegPath >= 0 )
  {
    if ( !a5 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v6 = 1;
    }
    p_SubjectContext = &SubjectContext;
    if ( a5 )
      p_SubjectContext = a5;
    if ( p_SubjectContext->ClientToken )
      ClientToken = p_SubjectContext->ClientToken;
    else
      ClientToken = p_SubjectContext->PrimaryToken;
    v15 = SeQueryInformationToken(ClientToken, TokenImpersonationLevel, &TokenInformation);
    RelativeObjectRegPath = v15;
    if ( v15 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        goto LABEL_25;
      }
      goto LABEL_10;
    }
    if ( v15 == -1073741821 )
    {
LABEL_10:
      SeQueryUserSidToken((__int64)ClientToken, Sid, 0x44u, 0LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (char)L"\\REGISTRY\\USER\\");
        if ( RelativeObjectRegPath < 0 )
        {
          v9 = v25;
        }
        else
        {
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v16 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
          else
            LODWORD(v16) = 0;
          v9 = v25;
          RelativeObjectRegPath = SysCtxRegOpenKey(v16, 0, (_DWORD)v25, 0, 4, (__int64)&Handle);
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v27[0]);
            if ( RelativeObjectRegPath < 0 )
            {
              v10 = v23;
            }
            else
            {
              if ( a4 )
              {
                v10 = v23;
                Tree = PnpCtxRegCreateTree(
                         PiPnpRtlCtx,
                         (_DWORD)Handle,
                         (_DWORD)v23,
                         0,
                         a3,
                         0LL,
                         (__int64)a6,
                         (__int64)&v22);
              }
              else
              {
                v22 = 2;
                if ( *(_QWORD *)&PiPnpRtlCtx )
                  v17 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
                else
                  LODWORD(v17) = 0;
                v10 = v23;
                Tree = SysCtxRegOpenKey(v17, (_DWORD)Handle, (_DWORD)v23, 0, a3, (__int64)a6);
              }
              RelativeObjectRegPath = Tree;
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
LABEL_25:
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706E50u);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return (unsigned int)RelativeObjectRegPath;
}
