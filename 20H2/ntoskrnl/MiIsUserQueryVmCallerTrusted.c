/*
 * XREFs of MiIsUserQueryVmCallerTrusted @ 0x1405E2F64
 * Callers:
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     SeTokenIsAdmin @ 0x1405E34A0 (SeTokenIsAdmin.c)
 *     PsReferenceEffectiveToken @ 0x14061FA40 (PsReferenceEffectiveToken.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MiIsUserQueryVmCallerTrusted(int a1)
{
  unsigned int v1; // ebx
  struct _DMA_ADAPTER *v2; // rdi
  char v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0;
  v4 = 0;
  v2 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken(
                                a1,
                                (unsigned int)&v6,
                                (unsigned int)&v4,
                                (unsigned int)&v5,
                                0LL);
  if ( SeTokenIsAdmin(v2) || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, 1) )
    v1 = 1;
  HalPutDmaAdapter(v2);
  return v1;
}
