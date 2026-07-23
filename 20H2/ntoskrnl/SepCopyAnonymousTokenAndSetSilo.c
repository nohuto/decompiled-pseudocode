/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x14068D4F0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     PsGetServerSiloServiceSessionId @ 0x14023F2F0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentProcess @ 0x1402BFB80 (PsGetCurrentProcess.c)
 *     SepGetAnonymousToken @ 0x1402E17A8 (SepGetAnonymousToken.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     memset @ 0x140411300 (memset.c)
 *     SepFinalizeTokenAcls @ 0x1405CDDB0 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 *     SeCreateAccessState @ 0x1405FDD40 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x140601D90 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     SeSetSessionIdToken @ 0x1406A8CE8 (SeSetSessionIdToken.c)
 *     SepSetServerSiloToken @ 0x14091F4A4 (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PADAPTER_OBJECT *a2)
{
  int AnonymousToken; // ebx
  struct _DMA_ADAPTER *v5; // rsi
  _KPROCESS *CurrentProcess; // rax
  ULONG ServerSiloServiceSessionId; // eax
  PACCESS_TOKEN Token; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE v10; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v11[224]; // [rsp+F0h] [rbp-108h] BYREF

  Token = 0LL;
  AnonymousToken = SepGetAnonymousToken(0LL, (PADAPTER_OBJECT *)&Token);
  if ( AnonymousToken < 0 )
    goto LABEL_11;
  memset(&v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  v5 = (struct _DMA_ADAPTER *)Token;
  SeCreateAccessState(
    (int)&v10,
    (int)v11,
    0,
    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Token - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Token - 48) >> 8)]
  + 76);
  CurrentProcess = PsGetCurrentProcess();
  ObFastDereferenceObject(
    (signed __int64 *)&CurrentProcess[1].Affinity.Bitmap[5],
    (struct _DMA_ADAPTER *)v10.SubjectSecurityContext.PrimaryToken);
  ObfReferenceObject(SeAnonymousLogonTokenNoEveryone);
  v10.SubjectSecurityContext.PrimaryToken = SeAnonymousLogonTokenNoEveryone;
  AnonymousToken = ObInsertObjectEx(v5, &v10, 0, 0, 0, 0LL, 0LL);
  SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&v10);
  if ( AnonymousToken < 0 )
    goto LABEL_11;
  if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
    SepFinalizeTokenAcls(v5);
  else
    SepAppendAceToTokenObjectAcl((__int64)v5, 8u, SeAliasAdminsSid);
  *a2 = v5;
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a1);
  if ( ServerSiloServiceSessionId != -1 )
    AnonymousToken = SeSetSessionIdToken(v5, ServerSiloServiceSessionId);
  if ( AnonymousToken < 0 || (AnonymousToken = SepSetServerSiloToken(*a2, a1), AnonymousToken < 0) )
  {
    HalPutDmaAdapter(*a2);
LABEL_11:
    *a2 = 0LL;
  }
  return (unsigned int)AnonymousToken;
}
