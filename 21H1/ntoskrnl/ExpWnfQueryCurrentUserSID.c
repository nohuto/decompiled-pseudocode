/*
 * XREFs of ExpWnfQueryCurrentUserSID @ 0x140669C64
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x14066956C (ExpWnfGetCurrentScopeInstance.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x140609900 (PsReferenceEffectiveToken.c)
 *     SeQueryUserSidToken @ 0x14066B11C (SeQueryUserSidToken.c)
 */

__int64 __fastcall ExpWnfQueryCurrentUserSID(
        struct _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _DWORD *a5)
{
  int v5; // ebx
  struct _DMA_ADAPTER *v9; // rdi
  int v10; // ebp
  int UserSidToken; // esi
  struct _DMA_ADAPTER *v13; // rax
  int v14; // [rsp+30h] [rbp-28h] BYREF
  int v15[9]; // [rsp+34h] [rbp-24h] BYREF
  bool v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  v14 = 0;
  v16 = 0;
  v15[0] = 0;
  if ( !a2 )
  {
    v9 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
    v10 = 1;
LABEL_3:
    UserSidToken = SeQueryUserSidToken(v9, a3, *a4, a4);
    if ( v10 == 1 )
    {
      ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v9);
    }
    else if ( v9 )
    {
      HalPutDmaAdapter(v9);
    }
    if ( UserSidToken >= 0 )
    {
      LOBYTE(v5) = v10 == 1;
      *a5 = v5;
    }
    return (unsigned int)UserSidToken;
  }
  v13 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken(a2, &v14, &v16, v15, 0LL);
  v10 = v14;
  v9 = v13;
  if ( v14 != 2 || v15[0] >= 2 )
    goto LABEL_3;
  if ( v13 )
    HalPutDmaAdapter(v13);
  return 3221225637LL;
}
