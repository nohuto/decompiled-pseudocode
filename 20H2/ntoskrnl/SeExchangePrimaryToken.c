/*
 * XREFs of SeExchangePrimaryToken @ 0x1407B6FE4
 * Callers:
 *     PspAssignPrimaryToken @ 0x1407B6DE0 (PspAssignPrimaryToken.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x140209854 (MmGetSessionObjectById.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     MmGetSessionId @ 0x140233F30 (MmGetSessionId.c)
 *     ObFastReplaceObject @ 0x140248084 (ObFastReplaceObject.c)
 *     SepSetTrustLevelForProcessToken @ 0x1402E3768 (SepSetTrustLevelForProcessToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406312F0 (SeAuditingWithTokenForSubcategory.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14068D15C (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x14068DF6C (SepSetTokenLowboxNumber.c)
 *     SepSetTokenSessionById @ 0x14068F030 (SepSetTokenSessionById.c)
 *     SepAuditAssignPrimaryToken @ 0x1407B7184 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeExchangePrimaryToken(__int64 a1, ULONG_PTR a2, ULONG_PTR *a3)
{
  bool v4; // zf
  struct _DMA_ADAPTER *SessionObjectById; // rdi
  unsigned int SessionId; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v12; // ebp
  int v13; // r14d
  ULONG_PTR v14; // rbx
  struct _KTHREAD *v15; // rax
  __int64 result; // rax
  struct _DMA_ADAPTER *v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  signed __int32 v20[8]; // [rsp+0h] [rbp-58h] BYREF
  char v21; // [rsp+68h] [rbp+10h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  DmaAdapter = 0LL;
  SessionObjectById = 0LL;
  v21 = 0;
  if ( !v4 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(a1);
  if ( SessionId != -1 && !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = (struct _DMA_ADAPTER *)MmGetSessionObjectById(SessionId, v9);
  v10 = MmGetSessionId(a1);
  CurrentThread = KeGetCurrentThread();
  v12 = v10;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v20, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v20, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( SessionObjectById )
      HalPutDmaAdapter(SessionObjectById);
    return 3221225771LL;
  }
  else
  {
    *(_BYTE *)(a2 + 204) = 1;
    v13 = SepSetTrustLevelForProcessToken(a2, a1, &v21);
    if ( v13 < 0 )
    {
      _InterlockedOr(v20, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( !SessionObjectById )
        return (unsigned int)v13;
      v17 = SessionObjectById;
LABEL_21:
      HalPutDmaAdapter(v17);
      return (unsigned int)v13;
    }
    if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    {
      v18 = *(_DWORD *)(a2 + 120);
      if ( v18 != v12 )
      {
        SepDereferenceLowBoxNumberEntry(v18, *(_QWORD *)(a2 + 1080));
        *(_QWORD *)(a2 + 1080) = 0LL;
        SepSetTokenSessionById(a2, v12, 1, (__int64)SessionObjectById, &DmaAdapter);
        v19 = *(_QWORD *)(a2 + 784);
        *(_DWORD *)(a2 + 120) = v12;
        v13 = SepSetTokenLowboxNumber(a2, v19);
        if ( v13 < 0 )
        {
          _InterlockedOr(v20, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v17 = DmaAdapter;
          if ( !DmaAdapter )
            return (unsigned int)v13;
          goto LABEL_21;
        }
      }
    }
    SepSetTokenSessionById(a2, v12, 1, (__int64)SessionObjectById, &DmaAdapter);
    *(_DWORD *)(a2 + 120) = v12;
    _InterlockedOr(v20, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
      SepAuditAssignPrimaryToken(a1, a2);
    ObfReferenceObject((PVOID)a2);
    v14 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), a2);
    if ( v14 )
    {
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 48), 1u);
      _InterlockedOr(v20, 0);
      *(_BYTE *)(v14 + 204) = 0;
      _InterlockedOr(v20, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v14 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      result = 0LL;
      *a3 = v14;
    }
    else
    {
      return 3221225596LL;
    }
  }
  return result;
}
