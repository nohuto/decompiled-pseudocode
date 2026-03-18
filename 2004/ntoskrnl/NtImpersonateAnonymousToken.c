/*
 * XREFs of NtImpersonateAnonymousToken @ 0x140630BF0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     SeTokenIsWriteRestricted @ 0x14026D740 (SeTokenIsWriteRestricted.c)
 *     SeTokenIsRestricted @ 0x14026D760 (SeTokenIsRestricted.c)
 *     ObReferenceObjectByPointer @ 0x14026E130 (ObReferenceObjectByPointer.c)
 *     SepGetAnonymousToken @ 0x14026F294 (SepGetAnonymousToken.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     SepRegQueryDwordValue @ 0x140630EDC (SepRegQueryDwordValue.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     PsImpersonateClient @ 0x140681160 (PsImpersonateClient.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140919230 (SepCopyAnonymousTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v3; // rcx
  _DWORD *PrimaryToken; // rbx
  _DWORD *ClientToken; // rdi
  NTSTATUS AnonymousToken; // ebx
  struct _DMA_ADAPTER *v7; // rsi
  int v8; // r8d
  __int64 CurrentServerSilo; // rax
  _KPROCESS *Process; // rdi
  struct _DMA_ADAPTER *v11; // rax
  struct _DMA_ADAPTER *v12; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-29h] BYREF
  PACCESS_TOKEN v14; // [rsp+48h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-19h] BYREF
  __int128 v16; // [rsp+70h] [rbp+7h] BYREF
  __int128 v17; // [rsp+80h] [rbp+17h]
  __int128 v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Token; // [rsp+E8h] [rbp+7Fh] BYREF

  v16 = 0LL;
  DmaAdapter = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Token = 0LL;
  v19 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v14 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( (int)SepRegQueryDwordValue(v3, L"AnonymousAppContainerImpersonationLevelCheck", &v19) >= 0 && v19
    || ClientToken[48] == 1
    || (PrimaryToken[50] & 0x4000) == 0
    || (int)ClientToken[49] >= 2 )
  {
    if ( (ClientToken[50] & 0x4000) != 0 )
    {
      AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, (PADAPTER_OBJECT *)&v14);
      if ( AnonymousToken >= 0 )
      {
        AnonymousToken = PsImpersonateClient((PETHREAD)Object, v14, 1u, 0, SecurityImpersonation);
        HalPutDmaAdapter((PADAPTER_OBJECT)v14);
      }
      goto LABEL_29;
    }
    if ( (int)SepRegQueryDwordValue(0x4000LL, L"EveryoneIncludesAnonymous", &v19) < 0
      || (v7 = (struct _DMA_ADAPTER *)SeAnonymousLogonToken, v19 != 1) )
    {
      v7 = (struct _DMA_ADAPTER *)SeAnonymousLogonTokenNoEveryone;
    }
    if ( PsIsCurrentThreadInServerSilo() )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      AnonymousToken = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &Token);
      if ( AnonymousToken < 0 )
        goto LABEL_29;
      v7 = (struct _DMA_ADAPTER *)Token;
    }
    else if ( (ClientToken[50] & 0x380000) != 0 )
    {
      LODWORD(v16) = 48;
      LOBYTE(v8) = 1;
      *((_QWORD *)&v16 + 1) = 0LL;
      DWORD2(v17) = 0;
      *(_QWORD *)&v17 = 0LL;
      v18 = 0LL;
      AnonymousToken = SepDuplicateToken((_DWORD)v7, (unsigned int)&v16, v8, 2, 2, 0, 1, (__int64)&DmaAdapter);
      if ( AnonymousToken < 0 )
        goto LABEL_29;
      LODWORD(DmaAdapter[12].DmaOperations) |= ClientToken[50] & 0x380000;
      v7 = DmaAdapter;
    }
    AnonymousToken = ObReferenceObjectByPointer(
                       v7,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      HalPutDmaAdapter(v7);
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
      v12 = v11;
      if ( v11 )
      {
        if ( !SeTokenIsRestricted(v11) || SeTokenIsWriteRestricted(v12) )
        {
          ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v12);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v7, Token == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          HalPutDmaAdapter(v12);
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
