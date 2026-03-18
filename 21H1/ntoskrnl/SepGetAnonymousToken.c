/*
 * XREFs of SepGetAnonymousToken @ 0x1402DE61C
 * Callers:
 *     SepCreateClientSecurityEx @ 0x14060A440 (SepCreateClientSecurityEx.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140917F80 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140338570 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     SepSetTokenPackage @ 0x140669D4C (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x140673878 (SepSetTokenCapabilities.c)
 *     SepSetTokenLowboxNumber @ 0x14067833C (SepSetTokenLowboxNumber.c)
 *     SepSetTokenSessionById @ 0x1406F7AEC (SepSetTokenSessionById.c)
 */

__int64 __fastcall SepGetAnonymousToken(__int64 a1, PADAPTER_OBJECT *a2)
{
  int v4; // ebx
  _DWORD *v5; // rcx
  PADAPTER_OBJECT v6; // rcx
  struct _DMA_ADAPTER *v8; // rcx
  _DWORD v9[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]
  __int128 v14; // [rsp+60h] [rbp-10h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp+20h] BYREF

  DmaAdapter = 0LL;
  v9[1] = 0;
  v13 = 0;
  v10 = 0LL;
  v12 = 0;
  v11 = 0LL;
  v9[0] = 48;
  v14 = 0LL;
  v4 = SepDuplicateToken(SeAnonymousLogonTokenNoEveryone, (unsigned int)v9, 1, 2, 2, 0, 1, (__int64)&DmaAdapter);
  if ( v4 >= 0 )
  {
    if ( !a1 )
    {
LABEL_10:
      v6 = DmaAdapter;
      *a2 = DmaAdapter;
      return (unsigned int)v4;
    }
    v4 = SepSetTokenPackage(DmaAdapter, *(_QWORD *)(a1 + 784));
    if ( v4 >= 0 )
    {
      v4 = SepSetTokenCapabilities(
             DmaAdapter,
             *(_QWORD *)(a1 + 784),
             *(_QWORD *)(a1 + 792),
             *(unsigned int *)(a1 + 800));
      if ( v4 >= 0 )
      {
        SepSetTokenSessionById((_DWORD)DmaAdapter, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
        LODWORD(DmaAdapter[7].DmaOperations) = *(_DWORD *)(a1 + 120);
        v4 = SepSetTokenLowboxNumber(DmaAdapter, *(_QWORD *)(a1 + 784));
        if ( v4 >= 0 )
        {
          v5 = *(_DWORD **)(a1 + 776);
          if ( !v5
            || !*v5
            || (v4 = AuthzBasepDuplicateSecurityAttributes(v5, DmaAdapter[48].DmaOperations, 0LL), v4 >= 0) )
          {
            DmaAdapter[4].DmaOperations = (_DMA_OPERATIONS *)((unsigned __int64)DmaAdapter[4].DmaOperations & 0x200800000LL);
            *(_QWORD *)&DmaAdapter[5].Version &= 0x200800000uLL;
            *(_QWORD *)&DmaAdapter[4].Version &= 0x200800000uLL;
            LODWORD(DmaAdapter[12].DmaOperations) &= ~0x2000u;
            LODWORD(DmaAdapter[12].DmaOperations) |= 0x4000u;
            LODWORD(DmaAdapter[12].DmaOperations) |= *(_DWORD *)(a1 + 200) & 0x380000;
            goto LABEL_10;
          }
        }
      }
    }
    v8 = DmaAdapter;
    HalPutDmaAdapter(v8);
  }
  return (unsigned int)v4;
}
