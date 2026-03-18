/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x140917F80
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     SepGetAnonymousToken @ 0x1402DE61C (SepGetAnonymousToken.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402E5A50 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     SeCreateAccessState @ 0x140613740 (SeCreateAccessState.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140613AC0 (SepAppendAceToTokenObjectAcl.c)
 *     SeSetSessionIdToken @ 0x1406E4A08 (SeSetSessionIdToken.c)
 *     SepSetServerSiloToken @ 0x14091857C (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PADAPTER_OBJECT *a2)
{
  int AnonymousToken; // ebx
  struct _DMA_ADAPTER *v5; // rsi
  ULONG ServerSiloServiceSessionId; // eax
  PACCESS_TOKEN Token; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE v9; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v10[224]; // [rsp+F0h] [rbp-108h] BYREF

  Token = 0LL;
  memset(&v9, 0, sizeof(v9));
  memset(v10, 0, sizeof(v10));
  AnonymousToken = SepGetAnonymousToken(0LL, (PADAPTER_OBJECT *)&Token);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  v5 = (struct _DMA_ADAPTER *)Token;
  SeCreateAccessState(
    (int)&v9,
    (int)v10,
    0,
    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Token - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Token - 48) >> 8)]
  + 76);
  v9.SubjectSecurityContext.PrimaryToken = (PACCESS_TOKEN)SeAnonymousLogonTokenNoEveryone;
  AnonymousToken = ObInsertObjectEx(v5, &v9, 0, 0, 0, 0LL, 0LL);
  if ( AnonymousToken < 0 )
    goto LABEL_8;
  SepAppendAceToTokenObjectAcl((__int64)v5, 8, SeAliasAdminsSid);
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
