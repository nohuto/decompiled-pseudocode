/*
 * XREFs of NtImpersonateAnonymousToken @ 0x1406778C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     SeTokenIsRestricted @ 0x1402C12C0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x1402C12E0 (SeTokenIsWriteRestricted.c)
 *     ObReferenceObjectByPointer @ 0x1402DE590 (ObReferenceObjectByPointer.c)
 *     SepGetAnonymousToken @ 0x1402DE61C (SepGetAnonymousToken.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     PsImpersonateClient @ 0x140609080 (PsImpersonateClient.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     SepRegQueryDwordValue @ 0x140677BB8 (SepRegQueryDwordValue.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140917F80 (SepCopyAnonymousTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  _DWORD *PrimaryToken; // rbx
  _DWORD *ClientToken; // rsi
  NTSTATUS AnonymousToken; // ebx
  struct _DMA_ADAPTER *v6; // rdi
  struct _LIST_ENTRY *CurrentServerSilo; // rax
  _KPROCESS *Process; // rsi
  struct _DMA_ADAPTER *v9; // rax
  struct _DMA_ADAPTER *v10; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-29h] BYREF
  PACCESS_TOKEN v12; // [rsp+48h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-19h] BYREF
  __int128 v14; // [rsp+70h] [rbp+7h] BYREF
  __int128 v15; // [rsp+80h] [rbp+17h]
  __int128 v16; // [rsp+90h] [rbp+27h]
  int v17; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Token; // [rsp+E8h] [rbp+7Fh] BYREF

  v14 = 0LL;
  DmaAdapter = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  Token = 0LL;
  v17 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v12 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( (int)SepRegQueryDwordValue(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
              L"AnonymousAppContainerImpersonationLevelCheck",
              &v17) >= 0
    && v17
    || ClientToken[48] == 1
    || (PrimaryToken[50] & 0x4000) == 0
    || (int)ClientToken[49] >= 2 )
  {
    if ( (ClientToken[50] & 0x4000) != 0 )
    {
      AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, (PADAPTER_OBJECT *)&v12);
      if ( AnonymousToken >= 0 )
      {
        AnonymousToken = PsImpersonateClient((PETHREAD)Object, v12, 1u, 0, SecurityImpersonation);
        HalPutDmaAdapter((PADAPTER_OBJECT)v12);
      }
      goto LABEL_29;
    }
    if ( (int)SepRegQueryDwordValue(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
                L"EveryoneIncludesAnonymous",
                &v17) < 0
      || (v6 = (struct _DMA_ADAPTER *)SeAnonymousLogonToken, v17 != 1) )
    {
      v6 = (struct _DMA_ADAPTER *)SeAnonymousLogonTokenNoEveryone;
    }
    if ( PsIsCurrentThreadInServerSilo() )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      AnonymousToken = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &Token);
      if ( AnonymousToken < 0 )
        goto LABEL_29;
      v6 = (struct _DMA_ADAPTER *)Token;
    }
    else if ( (ClientToken[50] & 0x380000) != 0 )
    {
      LODWORD(v14) = 48;
      *((_QWORD *)&v14 + 1) = 0LL;
      DWORD2(v15) = 0;
      *(_QWORD *)&v15 = 0LL;
      v16 = 0LL;
      AnonymousToken = SepDuplicateToken((__int64)v6, (int)&v14, 1, 2, 2u, 0, 1, &DmaAdapter);
      if ( AnonymousToken < 0 )
        goto LABEL_29;
      LODWORD(DmaAdapter[12].DmaOperations) |= ClientToken[50] & 0x380000;
      v6 = DmaAdapter;
    }
    AnonymousToken = ObReferenceObjectByPointer(
                       v6,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      HalPutDmaAdapter(v6);
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
      v10 = v9;
      if ( v9 )
      {
        if ( !SeTokenIsRestricted(v9) || SeTokenIsWriteRestricted(v10) )
        {
          ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v10);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v6, Token == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          HalPutDmaAdapter(v10);
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
