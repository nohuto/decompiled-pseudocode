/*
 * XREFs of CmpCreateRegistryProcessToken @ 0x1407C69C4
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407C638C (CmpInitializeRegistryProcess.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     SeFilterToken @ 0x1407C6B20 (SeFilterToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCreateRegistryProcessToken(PACCESS_TOKEN *a1)
{
  struct _DMA_ADAPTER *v2; // rdi
  struct _TOKEN_GROUPS *v3; // rsi
  struct _DMA_ADAPTER *v4; // r14
  NTSTATUS v5; // ebx
  struct _LOOKASIDE_LIST_EX *v6; // r9
  char *TransientPoolWithTag; // rax
  PVOID P; // [rsp+68h] [rbp+38h] BYREF
  PACCESS_TOKEN FilteredToken; // [rsp+70h] [rbp+40h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp+48h] BYREF

  TokenInformation = 0LL;
  v2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  FilteredToken = 0LL;
  v4 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(PsInitialSystemProcess);
  v5 = SeQueryInformationToken(v4, TokenUser, &TokenInformation);
  if ( v5 >= 0 )
  {
    v5 = SeQueryInformationToken(v4, TokenGroups, &P);
    if ( v5 >= 0 )
    {
      TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(
                                       PagedPool,
                                       16LL * (unsigned int)(*(_DWORD *)P + 1) + 8,
                                       0x34384D43u,
                                       v6);
      v3 = (struct _TOKEN_GROUPS *)TransientPoolWithTag;
      if ( TransientPoolWithTag )
      {
        *(_DWORD *)TransientPoolWithTag = *(_DWORD *)P + 1;
        *(_OWORD *)(TransientPoolWithTag + 8) = *(_OWORD *)TokenInformation;
        memmove(TransientPoolWithTag + 24, (char *)P + 8, 16LL * *(unsigned int *)P);
        v5 = SeFilterToken(v4, 1u, v3, 0LL, 0LL, &FilteredToken);
        if ( v5 < 0 )
        {
          v2 = (struct _DMA_ADAPTER *)FilteredToken;
        }
        else
        {
          v5 = 0;
          *a1 = FilteredToken;
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
  }
  if ( v4 )
    HalPutDmaAdapter(v4);
  if ( v2 )
    HalPutDmaAdapter(v2);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v3 )
    CmSiFreeMemory((PPRIVILEGE_SET)v3);
  return (unsigned int)v5;
}
