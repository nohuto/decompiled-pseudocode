/*
 * XREFs of SepCopyClientTokenAndSetSilo @ 0x1409180E8
 * Callers:
 *     SepCreateClientSecurityEx @ 0x14060A440 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x14091DF68 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402E5A50 (PsGetServerSiloServiceSessionId.c)
 *     SeCopyClientToken @ 0x1406C24B8 (SeCopyClientToken.c)
 *     SeSetSessionIdToken @ 0x1406E4A08 (SeSetSessionIdToken.c)
 *     SepSetServerSiloToken @ 0x14091857C (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyClientTokenAndSetSilo(__int64 a1, unsigned int a2, __int64 a3, PADAPTER_OBJECT *a4)
{
  __int64 result; // rax
  NTSTATUS v7; // ebx
  ULONG ServerSiloServiceSessionId; // eax

  result = SeCopyClientToken(a1, a2, a3, 0, 0LL, a4);
  v7 = result;
  if ( (int)result >= 0 )
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a3);
    if ( ServerSiloServiceSessionId != -1 )
      v7 = SeSetSessionIdToken(*a4, ServerSiloServiceSessionId);
    if ( v7 < 0 || (v7 = SepSetServerSiloToken(*a4, a3), v7 < 0) )
    {
      HalPutDmaAdapter(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v7;
  }
  return result;
}
