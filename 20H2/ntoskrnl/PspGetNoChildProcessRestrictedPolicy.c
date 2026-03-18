/*
 * XREFs of PspGetNoChildProcessRestrictedPolicy @ 0x14068D3B0
 * Callers:
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1402E2248 (SeTokenGetNoChildProcessRestricted.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PspGetNoChildProcessRestrictedPolicy(struct _KPROCESS *a1)
{
  struct _DMA_ADAPTER *v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+38h] [rbp+10h] BYREF
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v2 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  SeTokenGetNoChildProcessRestricted((__int64)v2, &v4, &v5, &v6);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v2);
  if ( v4 )
    return (unsigned int)v5 + 1;
  else
    return v6 ? 3 : 0;
}
