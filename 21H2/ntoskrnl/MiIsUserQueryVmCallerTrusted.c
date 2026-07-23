/*
 * XREFs of MiIsUserQueryVmCallerTrusted @ 0x1406C5B10
 * Callers:
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsReferenceEffectiveToken @ 0x140651B70 (PsReferenceEffectiveToken.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     SeTokenIsAdmin @ 0x1406C5B80 (SeTokenIsAdmin.c)
 */

__int64 __fastcall MiIsUserQueryVmCallerTrusted(__int64 a1)
{
  unsigned int v1; // ebx
  struct _DMA_ADAPTER *v2; // rdi
  bool v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0;
  v4 = 0;
  v2 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken(a1, &v6, &v4, &v5, 0LL);
  if ( SeTokenIsAdmin(v2) || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, 1) )
    v1 = 1;
  HalPutDmaAdapter(v2);
  return v1;
}
