/*
 * XREFs of CmpVEExecuteParseLogic @ 0x14061C220
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14031C770 (PsGetCurrentThreadProcess.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406FF870 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1408733F8 (CmpVEExecuteVirtualStoreParseLogic.c)
 */

__int64 __fastcall CmpVEExecuteParseLogic(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        char a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6)
{
  _DWORD *v10; // rax
  __int16 i; // dx
  __int64 v12; // rcx
  int *v14; // r14
  char v15; // r15
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  PACCESS_TOKEN ClientToken; // rcx
  PACCESS_TOKEN PrimaryToken; // rax
  bool v19; // al
  bool v20; // si
  int v21; // ecx
  int v22; // ecx
  struct _KPROCESS *CurrentThreadProcess; // rax
  PVOID TokenInformation; // [rsp+30h] [rbp-78h] BYREF
  int v25; // [rsp+38h] [rbp-70h]
  __int16 v26; // [rsp+3Ch] [rbp-6Ch]
  __int16 v27; // [rsp+3Eh] [rbp-6Ah]
  _QWORD v28[3]; // [rsp+40h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-50h] BYREF

  if ( !CmpVEEnabled || (a3[6] & 0x10) != 0 || *(_WORD *)(a1 + 66) )
    return 3221226097LL;
  v10 = *(_DWORD **)(a1 + 32);
  if ( v10 == CmpMasterHive )
    return 3221226097LL;
  v26 = 0;
  v27 = 0;
  v28[1] = 0LL;
  v25 = 0;
  v28[2] = 0LL;
  v28[0] = a1;
  for ( i = 0; i >= 0; --i )
  {
    if ( i >= 2 )
      v12 = *(_QWORD *)(8LL * i - 16);
    else
      v12 = v28[i];
    if ( *(_WORD *)(v12 + 66) && *(_BYTE *)(v12 + 65) == 1 )
      goto LABEL_14;
    if ( *(_DWORD *)(v12 + 40) != -1 )
      break;
  }
  if ( (v10[1038] & 0x10) == 0 && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 )
    return 3221226097LL;
LABEL_14:
  v14 = a3 + 4;
  v15 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a3 != (_DWORD *)-16LL && (*v14 & 1) != 0 )
  {
    v20 = (*v14 & 2) != 0;
  }
  else
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
    v19 = 1;
    if ( !ClientToken )
    {
      SeQueryInformationToken(PrimaryToken, TokenVirtualizationEnabled, &TokenInformation);
      if ( (_DWORD)TokenInformation )
        v19 = 0;
    }
    v20 = v19;
    if ( v14 )
    {
      v21 = *v14;
      if ( v19 )
      {
        v22 = v21 | 3;
      }
      else
      {
        v22 = v21 | 5;
        v20 = 0;
      }
      *v14 = v22;
    }
    if ( v15 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  if ( v20 || (*a3 & 8) != 0 )
    return 3221226097LL;
  if ( (a3[40] & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a3 + 42);
    a3[40] |= 1u;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 )
    return CmpVEExecuteVirtualStoreParseLogic(a1, a2, a3, a4);
  else
    return CmpVEExecuteRealStoreParseLogic(a1, a2, (_DWORD)a3, a4, (__int64)a6);
}
