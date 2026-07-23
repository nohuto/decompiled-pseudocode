/*
 * XREFs of SeCreateClientSecurityFromSubjectContext @ 0x14070C290
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     RtlSidDominatesForTrust @ 0x140296040 (RtlSidDominatesForTrust.c)
 *     SepCreateClientSecurityEx @ 0x140682590 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurityFromSubjectContext(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN ServerIsRemote,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  struct _DMA_ADAPTER *ClientToken; // rbx
  __int64 v5; // r14
  unsigned __int8 v6; // r15
  int v11; // ebp
  NTSTATUS ClientSecurity; // edi
  __int64 v14; // r11
  BOOLEAN DominatesTrust; // [rsp+90h] [rbp+8h] BYREF

  ClientToken = (struct _DMA_ADAPTER *)SubjectContext->ClientToken;
  v5 = 0LL;
  v6 = 0;
  DominatesTrust = 0;
  if ( !ClientToken )
    ClientToken = (struct _DMA_ADAPTER *)SubjectContext->PrimaryToken;
  ObfReferenceObject(ClientToken);
  if ( SubjectContext->ClientToken )
  {
    v11 = 2;
    RtlSidDominatesForTrust(
      *((PSID *)SubjectContext->PrimaryToken + 138),
      *((PSID *)SubjectContext->ClientToken + 138),
      &DominatesTrust);
    if ( !DominatesTrust )
    {
      v6 = 1;
      v5 = v14;
    }
  }
  else
  {
    v11 = 1;
  }
  ClientSecurity = SepCreateClientSecurityEx(
                     (__int64)ClientToken,
                     (__int64)ClientSecurityQos,
                     ServerIsRemote,
                     v11,
                     0,
                     SubjectContext->ImpersonationLevel,
                     0,
                     0LL,
                     v6,
                     v5,
                     (__int64)ClientContext);
  if ( ClientSecurity < 0 || !ClientSecurityQos->ContextTrackingMode )
    HalPutDmaAdapter(ClientToken);
  return ClientSecurity;
}
