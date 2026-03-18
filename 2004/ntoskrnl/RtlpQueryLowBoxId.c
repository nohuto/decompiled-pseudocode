/*
 * XREFs of RtlpQueryLowBoxId @ 0x14024CC78
 * Callers:
 *     RtlpAllocateAtomTableEntry @ 0x1402018E8 (RtlpAllocateAtomTableEntry.c)
 *     RtlpLookupLowBox @ 0x14024CAE8 (RtlpLookupLowBox.c)
 *     RtlpLookupOrCreateLowBox @ 0x14024CB5C (RtlpLookupOrCreateLowBox.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x140681A50 (PsReferenceEffectiveToken.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 */

__int64 RtlpQueryLowBoxId()
{
  __int64 v0; // rax
  int v1; // edi
  struct _DMA_ADAPTER *v2; // rbx
  struct _DMA_ADAPTER *v4; // rdi
  PVOID TokenInformation; // [rsp+30h] [rbp-10h] BYREF
  char v6; // [rsp+60h] [rbp+20h] BYREF
  int v7; // [rsp+68h] [rbp+28h] BYREF
  int v8; // [rsp+70h] [rbp+30h] BYREF
  PVOID v9; // [rsp+78h] [rbp+38h] BYREF

  LODWORD(v9) = 0;
  v7 = 0;
  v8 = 0;
  v6 = 0;
  v0 = PsReferenceEffectiveToken(
         (unsigned int)KeGetCurrentThread(),
         (unsigned int)&v7,
         (unsigned int)&v6,
         (unsigned int)&v8,
         0LL);
  v1 = v7;
  v2 = (struct _DMA_ADAPTER *)v0;
  if ( v7 == 2 && v8 < 2 )
  {
    v4 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    SeQueryInformationToken(v4, TokenIsAppContainer, &v9);
    if ( (_DWORD)v9 == 1 )
    {
      if ( v2 )
        HalPutDmaAdapter(v2);
      v2 = v4;
      v1 = 1;
    }
    else
    {
      HalPutDmaAdapter(v4);
      v1 = v7;
    }
  }
  LODWORD(TokenInformation) = 0;
  SeQueryInformationToken(v2, TokenAppContainerNumber, &TokenInformation);
  if ( v1 == 1 || v2 )
    HalPutDmaAdapter(v2);
  return (unsigned int)TokenInformation;
}
