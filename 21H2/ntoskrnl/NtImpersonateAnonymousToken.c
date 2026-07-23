/*
 * XREFs of NtImpersonateAnonymousToken @ 0x1406C5380
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     SeTokenIsRestricted @ 0x1402A4F20 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x1402A4F40 (SeTokenIsWriteRestricted.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     SepGetAnonymousToken @ 0x1402A509C (SepGetAnonymousToken.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
 *     SepRegQueryDwordValue @ 0x1406C566C (SepRegQueryDwordValue.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C7A0 (SepCopyAnonymousTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v3; // rcx
  _DWORD *PrimaryToken; // rbx
  _DWORD *ClientToken; // rdi
  NTSTATUS AnonymousToken; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _DMA_ADAPTER *v9; // rsi
  int v10; // r8d
  __int64 CurrentServerSilo; // rax
  _KPROCESS *Process; // rdi
  struct _DMA_ADAPTER *v13; // rax
  struct _DMA_ADAPTER *v14; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-29h] BYREF
  PACCESS_TOKEN v16; // [rsp+48h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-19h] BYREF
  __int128 v18; // [rsp+70h] [rbp+7h] BYREF
  __int128 v19; // [rsp+80h] [rbp+17h]
  __int128 v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Token; // [rsp+E8h] [rbp+7Fh] BYREF

  v18 = 0LL;
  DmaAdapter = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  Token = 0LL;
  v21 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v16 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( (int)SepRegQueryDwordValue(v3, L"AnonymousAppContainerImpersonationLevelCheck", &v21) >= 0 && v21
    || ClientToken[48] == 1
    || (PrimaryToken[50] & 0x4000) == 0
    || (int)ClientToken[49] >= 2 )
  {
    if ( (ClientToken[50] & 0x4000) != 0 )
    {
      AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, (PADAPTER_OBJECT *)&v16);
      if ( AnonymousToken >= 0 )
      {
        AnonymousToken = PsImpersonateClient((PETHREAD)Object, v16, 1u, 0, SecurityImpersonation);
        HalPutDmaAdapter((PADAPTER_OBJECT)v16);
      }
      goto LABEL_29;
    }
    if ( (int)SepRegQueryDwordValue(0x4000LL, L"EveryoneIncludesAnonymous", &v21) < 0
      || (v9 = (struct _DMA_ADAPTER *)SeAnonymousLogonToken, v21 != 1) )
    {
      v9 = (struct _DMA_ADAPTER *)SeAnonymousLogonTokenNoEveryone;
    }
    if ( PsIsCurrentThreadInServerSilo(v8, v7) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      AnonymousToken = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &Token);
      if ( AnonymousToken < 0 )
        goto LABEL_29;
      v9 = (struct _DMA_ADAPTER *)Token;
    }
    else if ( (ClientToken[50] & 0x380000) != 0 )
    {
      LODWORD(v18) = 48;
      LOBYTE(v10) = 1;
      *((_QWORD *)&v18 + 1) = 0LL;
      DWORD2(v19) = 0;
      *(_QWORD *)&v19 = 0LL;
      v20 = 0LL;
      AnonymousToken = SepDuplicateToken((_DWORD)v9, (unsigned int)&v18, v10, 2, 2, 0, 1, (__int64)&DmaAdapter);
      if ( AnonymousToken < 0 )
        goto LABEL_29;
      LODWORD(DmaAdapter[12].DmaOperations) |= ClientToken[50] & 0x380000;
      v9 = DmaAdapter;
    }
    AnonymousToken = ObReferenceObjectByPointer(
                       v9,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      HalPutDmaAdapter(v9);
      Process = KeGetCurrentThread()->ApcState.Process;
      v13 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
      v14 = v13;
      if ( v13 )
      {
        if ( !SeTokenIsRestricted(v13) || SeTokenIsWriteRestricted(v14) )
        {
          ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v14);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v9, Token == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          HalPutDmaAdapter(v14);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
    goto LABEL_29;
  }
  AnonymousToken = -1073741659;
LABEL_29:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  if ( Token )
    HalPutDmaAdapter((PADAPTER_OBJECT)Token);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return AnonymousToken;
}
