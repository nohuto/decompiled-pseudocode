/*
 * XREFs of SepTokenDeleteMethod @ 0x1406975D0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExDeleteResourceLite @ 0x1402C3E70 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402C4060 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepDereferenceLuidToIndexEntry @ 0x1402C4154 (SepDereferenceLuidToIndexEntry.c)
 *     SepFreeTokenCapabilities @ 0x1402C6528 (SepFreeTokenCapabilities.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140697B98 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140697CDC (SepDereferenceCachedHandlesEntry.c)
 *     SepDeReferenceLogonSession @ 0x1406F54F0 (SepDeReferenceLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x140919758 (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x14091F9E8 (SepDeleteTokenUserAndGroups.c)
 *     SepRemoveTokenLogonSession @ 0x1409205E0 (SepRemoveTokenLogonSession.c)
 *     SepDeleteClaimAttributes @ 0x1409217C0 (SepDeleteClaimAttributes.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rcx
  bool v7; // zf
  signed __int64 v8; // rtt
  struct _DMA_ADAPTER *v9; // rcx
  struct _DMA_ADAPTER *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  struct _ERESOURCE *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  if ( SeTokenLeakTracking )
  {
    SepRemoveTokenLogonSession(a1);
    v18 = *(void **)(a1 + 1144);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
  v2 = *(void **)(a1 + 1096);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( SepTokenSidSharingEnabled )
    SepDeleteTokenUserAndGroups(a1);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 1080);
    if ( v3 )
      SepDereferenceLowBoxNumberEntry(*(unsigned int *)(a1 + 120), v3);
    if ( *(_QWORD *)(a1 + 1088) )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216));
    if ( *(_QWORD *)(a1 + 1152) )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216));
    v4 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v4 + 3);
    v5 = v4[3];
    v6 = v5 - 1;
    v7 = v5 == 1;
    if ( v5 - 1 <= 0 )
    {
LABEL_32:
      if ( !v7 )
        __fastfail(0xEu);
      v16 = v4[1];
      v17 = v4[20];
      v19 = v16;
      SepDeReferenceLogonSession(&v19, v17);
    }
    else
    {
      while ( 1 )
      {
        v8 = v5;
        v5 = _InterlockedCompareExchange64(v4 + 3, v6, v5);
        if ( v8 == v5 )
          break;
        v6 = v5 - 1;
        v7 = v5 == 1;
        if ( v5 - 1 <= 0 )
          goto LABEL_32;
      }
    }
  }
  v9 = *(struct _DMA_ADAPTER **)(a1 + 1160);
  if ( v9 )
    HalPutDmaAdapter(v9);
  v10 = *(struct _DMA_ADAPTER **)(a1 + 1112);
  if ( v10 )
    HalPutDmaAdapter(v10);
  if ( *(_BYTE *)(a1 + 118) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  v11 = *(_QWORD *)(a1 + 1136);
  if ( v11 )
    SepDereferenceLuidToIndexEntry(v11);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v12 = *(void **)(a1 + 176);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v13 = *(void **)(a1 + 784);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v14 )
  {
    ExDeleteResourceLite(v14);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v15 = *(void **)(a1 + 1104);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}
