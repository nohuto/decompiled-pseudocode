/*
 * XREFs of CmpVEExecuteParseLogic @ 0x140713570
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023C620 (PsGetCurrentThreadProcess.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x14064CA80 (SeCaptureSubjectContextEx.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406660E0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140870D88 (CmpVEExecuteVirtualStoreParseLogic.c)
 */

__int64 __fastcall CmpVEExecuteParseLogic(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        UNICODE_STRING *a4,
        char a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6)
{
  _DWORD *v11; // rdx
  __int16 i; // cx
  __int64 v13; // rax
  int *v14; // rdi
  char v15; // r15
  bool v16; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  struct _KPROCESS *CurrentThreadProcess; // rax
  PACCESS_TOKEN ClientToken; // rax
  PACCESS_TOKEN PrimaryToken; // rcx
  bool v21; // cl
  int v22; // eax
  int v23; // eax
  PVOID TokenInformation; // [rsp+30h] [rbp-78h] BYREF
  int v25; // [rsp+38h] [rbp-70h]
  __int16 v26; // [rsp+3Ch] [rbp-6Ch]
  __int16 v27; // [rsp+3Eh] [rbp-6Ah]
  _QWORD v28[3]; // [rsp+40h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-50h] BYREF

  if ( !CmpVEEnabled || (a3[6] & 0x10) != 0 || *(_WORD *)(a1 + 66) )
    return 3221226097LL;
  v11 = *(_DWORD **)(a1 + 32);
  if ( v11 == CmpMasterHive )
    return 3221226097LL;
  v28[0] = a1;
  v26 = 0;
  v25 = 0;
  v27 = 0;
  v28[1] = 0LL;
  v28[2] = 0LL;
  for ( i = 0; i >= 0; --i )
  {
    if ( i < 2 )
      v13 = v28[i];
    else
      v13 = *(_QWORD *)(8LL * i - 16);
    if ( *(_WORD *)(v13 + 66) && *(_BYTE *)(v13 + 65) == 1 )
      goto LABEL_17;
    if ( *(_DWORD *)(v13 + 40) != -1 )
      break;
  }
  if ( (v11[1038] & 0x10) == 0 && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 )
    return 3221226097LL;
LABEL_17:
  v14 = a3 + 4;
  v15 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a3 == (_DWORD *)-16LL || (*v14 & 1) == 0 )
  {
    if ( !a5 )
      return 3221226097LL;
    if ( a6 )
    {
      p_SubjectContext = a6;
    }
    else
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &SubjectContext);
      p_SubjectContext = &SubjectContext;
      v15 = 1;
    }
    ClientToken = p_SubjectContext->ClientToken;
    LODWORD(TokenInformation) = 0;
    if ( ClientToken )
      PrimaryToken = ClientToken;
    else
      PrimaryToken = p_SubjectContext->PrimaryToken;
    v21 = 1;
    if ( !ClientToken )
    {
      SeQueryInformationToken(PrimaryToken, TokenVirtualizationEnabled, &TokenInformation);
      if ( (_DWORD)TokenInformation )
        v21 = 0;
    }
    v16 = v21;
    if ( v14 )
    {
      v22 = *v14;
      if ( v21 )
      {
        v23 = v22 | 3;
      }
      else
      {
        v23 = v22 | 5;
        v16 = 0;
      }
      *v14 = v23;
    }
    if ( v15 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    v16 = (*v14 & 2) != 0;
  }
  if ( v16 || (*a3 & 8) != 0 )
    return 3221226097LL;
  if ( (a3[40] & 1) == 0 )
  {
    CmpAttachToRegistryProcess((__int64)(a3 + 42));
    a3[40] |= 1u;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 )
    return CmpVEExecuteVirtualStoreParseLogic(a1, a2, a3, a4);
  else
    return CmpVEExecuteRealStoreParseLogic(a1, a2, a3, a4, (__int64)a6);
}
