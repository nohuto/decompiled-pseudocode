/*
 * XREFs of PspGetRedirectionTrustPolicy @ 0x1405CD5C8
 * Callers:
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1403F724C (SeTokenGetRedirectionTrustPolicy.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PspGetRedirectionTrustPolicy(struct _KPROCESS *a1)
{
  struct _DMA_ADAPTER *v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0;
  v2 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  SeTokenGetRedirectionTrustPolicy((__int64)v2, &v4, &v5);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v2);
  if ( v4 )
    return 1LL;
  else
    return v5 != 0 ? 2 : 0;
}
