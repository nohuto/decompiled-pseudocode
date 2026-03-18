/*
 * XREFs of NtImpersonateAnonymousToken @ 0x140695570
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenIsRestricted @ 0x14021F680 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14021F6A0 (SeTokenIsWriteRestricted.c)
 *     SepGetAnonymousToken @ 0x14021F764 (SepGetAnonymousToken.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     SepRegQueryDwordValue @ 0x140695854 (SepRegQueryDwordValue.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 *     PsReferencePrimaryToken @ 0x1407AFED0 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C6000 (SepCopyAnonymousTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v3; // rcx
  const signed __int32 *PrimaryToken; // rbx
  PACCESS_TOKEN ClientToken; // rdi
  __int64 v6; // rcx
  PVOID v7; // rsi
  int v8; // r8d
  NTSTATUS AnonymousToken; // ebx
  _KPROCESS *Process; // rdi
  PACCESS_TOKEN v11; // rax
  void *v12; // rbx
  __int64 CurrentServerSilo; // rax
  PVOID v14; // [rsp+40h] [rbp-29h] BYREF
  PACCESS_TOKEN Token; // [rsp+48h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-19h] BYREF
  __int128 v17; // [rsp+70h] [rbp+7h] BYREF
  __int128 v18; // [rsp+80h] [rbp+17h]
  __int128 v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  PVOID v22; // [rsp+E8h] [rbp+7Fh] BYREF

  v14 = 0LL;
  *(_QWORD *)&v19 = 0LL;
  DWORD2(v19) = 0;
  v17 = 0LL;
  v18 = 0LL;
  v22 = 0LL;
  v20 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Token = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (const signed __int32 *)SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( ((int)SepRegQueryDwordValue(v3, L"AnonymousAppContainerImpersonationLevelCheck", &v20) < 0 || !v20)
    && *((_DWORD *)ClientToken + 48) != 1
    && _bittest(PrimaryToken + 50, 0xEu)
    && *((int *)ClientToken + 49) < 2 )
  {
    AnonymousToken = -1073741659;
    goto LABEL_16;
  }
  if ( _bittest((const signed __int32 *)ClientToken + 50, 0xEu) )
  {
    AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, &Token);
    if ( AnonymousToken >= 0 )
    {
      AnonymousToken = PsImpersonateClient((PETHREAD)Object, Token, 1u, 0, SecurityImpersonation);
      ObfDereferenceObject(Token);
    }
    goto LABEL_16;
  }
  if ( (int)SepRegQueryDwordValue(v6, L"EveryoneIncludesAnonymous", &v20) < 0 || (v7 = SeAnonymousLogonToken, v20 != 1) )
    v7 = SeAnonymousLogonTokenNoEveryone;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    AnonymousToken = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &v22);
    if ( AnonymousToken < 0 )
      goto LABEL_16;
    v7 = v22;
LABEL_12:
    AnonymousToken = ObReferenceObjectByPointer(
                       v7,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v7);
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = PsReferencePrimaryToken(Process);
      v12 = v11;
      if ( v11 )
      {
        if ( !SeTokenIsRestricted(v11) || SeTokenIsWriteRestricted(v12) )
        {
          ObFastDereferenceObject(
            (signed __int64 *)&Process[1].Affinity.StaticBitmap[5],
            (unsigned __int64)v12,
            0x746C6644u);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v7, v22 == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          ObfDereferenceObject(v12);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
    goto LABEL_16;
  }
  if ( (*((_DWORD *)ClientToken + 50) & 0x380000) == 0 )
    goto LABEL_12;
  LODWORD(v17) = 48;
  LOBYTE(v8) = 1;
  *((_QWORD *)&v17 + 1) = 0LL;
  DWORD2(v18) = 0;
  *(_QWORD *)&v18 = 0LL;
  v19 = 0LL;
  AnonymousToken = SepDuplicateToken((_DWORD)v7, (unsigned int)&v17, v8, 2, 2, 0, 1, (__int64)&v14);
  if ( AnonymousToken >= 0 )
  {
    *((_DWORD *)v14 + 50) |= *((_DWORD *)ClientToken + 50) & 0x380000;
    v7 = v14;
    goto LABEL_12;
  }
LABEL_16:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v22 )
    ObfDereferenceObject(v22);
  if ( v14 )
    ObfDereferenceObject(v14);
  return AnonymousToken;
}
