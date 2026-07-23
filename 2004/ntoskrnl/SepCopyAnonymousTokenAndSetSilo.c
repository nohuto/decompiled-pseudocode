/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x140919230
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140630BF0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140202160 (PsGetServerSiloServiceSessionId.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     SepGetAnonymousToken @ 0x14026F294 (SepGetAnonymousToken.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SeCreateAccessState @ 0x140668A20 (SeCreateAccessState.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140668DA0 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     SeSetSessionIdToken @ 0x140708398 (SeSetSessionIdToken.c)
 *     SepSetServerSiloToken @ 0x14091982C (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PADAPTER_OBJECT *a2)
{
  int AnonymousToken; // ebx
  struct _DMA_ADAPTER *v5; // rsi
  ULONG ServerSiloServiceSessionId; // eax
  PACCESS_TOKEN Token; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v10[224]; // [rsp+F0h] [rbp-108h] BYREF

  Token = 0LL;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v10, 0, sizeof(v10));
  AnonymousToken = SepGetAnonymousToken(0LL, (PADAPTER_OBJECT *)&Token);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  v5 = (struct _DMA_ADAPTER *)Token;
  SeCreateAccessState(
    (int)&AccessState,
    (int)v10,
    0,
    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Token - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Token - 48) >> 8)]
  + 76);
  AccessState.SubjectSecurityContext.PrimaryToken = (PACCESS_TOKEN)SeAnonymousLogonTokenNoEveryone;
  AnonymousToken = ObInsertObjectEx(v5, &AccessState, 0, 0, 0, 0LL, 0LL);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  SepAppendAceToTokenObjectAcl((__int64)v5, 8u, SeAliasAdminsSid);
  *a2 = v5;
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a1);
  if ( ServerSiloServiceSessionId != -1 )
    AnonymousToken = SeSetSessionIdToken(v5, ServerSiloServiceSessionId);
  if ( AnonymousToken < 0 || (AnonymousToken = SepSetServerSiloToken(*a2, a1), AnonymousToken < 0) )
  {
    HalPutDmaAdapter(*a2);
LABEL_8:
    *a2 = 0LL;
  }
  return (unsigned int)AnonymousToken;
}
