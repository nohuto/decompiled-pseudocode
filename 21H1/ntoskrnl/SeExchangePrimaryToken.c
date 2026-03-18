/*
 * XREFs of SeExchangePrimaryToken @ 0x1407A36C8
 * Callers:
 *     PspAssignPrimaryToken @ 0x1407A34C4 (PspAssignPrimaryToken.c)
 * Callees:
 *     MmGetSessionId @ 0x1402041B0 (MmGetSessionId.c)
 *     ObFastReplaceObject @ 0x140233A3C (ObFastReplaceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionObjectById @ 0x14025B084 (MmGetSessionObjectById.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     SepSetTrustLevelForProcessToken @ 0x140339568 (SepSetTrustLevelForProcessToken.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405EE698 (SepDereferenceLowBoxNumberEntry.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406707F0 (SeAuditingWithTokenForSubcategory.c)
 *     SepSetTokenLowboxNumber @ 0x14067833C (SepSetTokenLowboxNumber.c)
 *     SepSetTokenSessionById @ 0x1406F7AEC (SepSetTokenSessionById.c)
 *     SepAuditAssignPrimaryToken @ 0x1407A3868 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeExchangePrimaryToken(__int64 a1, ULONG_PTR a2, ULONG_PTR *a3)
{
  bool v4; // zf
  struct _DMA_ADAPTER *SessionObjectById; // rdi
  unsigned int SessionId; // eax
  unsigned int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v11; // ebp
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rbx
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _DMA_ADAPTER *v28; // rcx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  signed __int32 v34[8]; // [rsp+0h] [rbp-58h] BYREF
  char v35; // [rsp+68h] [rbp+10h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  DmaAdapter = 0LL;
  SessionObjectById = 0LL;
  v35 = 0;
  if ( !v4 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(a1);
  if ( SessionId != -1 && !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = (struct _DMA_ADAPTER *)MmGetSessionObjectById(SessionId);
  v9 = MmGetSessionId(a1);
  CurrentThread = KeGetCurrentThread();
  v11 = v9;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v34, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v34, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
    if ( SessionObjectById )
      HalPutDmaAdapter(SessionObjectById);
    return 3221225771LL;
  }
  else
  {
    *(_BYTE *)(a2 + 204) = 1;
    v12 = SepSetTrustLevelForProcessToken(a2, a1, &v35);
    if ( v12 < 0 )
    {
      _InterlockedOr(v34, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26, v27);
      if ( !SessionObjectById )
        return (unsigned int)v12;
      v28 = SessionObjectById;
LABEL_21:
      HalPutDmaAdapter(v28);
      return (unsigned int)v12;
    }
    if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    {
      v29 = *(_DWORD *)(a2 + 120);
      if ( v29 != v11 )
      {
        SepDereferenceLowBoxNumberEntry(v29, *(_QWORD *)(a2 + 1080));
        *(_QWORD *)(a2 + 1080) = 0LL;
        SepSetTokenSessionById(a2, v11, 1, (__int64)SessionObjectById, &DmaAdapter);
        v30 = *(_QWORD *)(a2 + 784);
        *(_DWORD *)(a2 + 120) = v11;
        v12 = SepSetTokenLowboxNumber(a2, v30);
        if ( v12 < 0 )
        {
          _InterlockedOr(v34, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32, v33);
          v28 = DmaAdapter;
          if ( !DmaAdapter )
            return (unsigned int)v12;
          goto LABEL_21;
        }
      }
    }
    SepSetTokenSessionById(a2, v11, 1, (__int64)SessionObjectById, &DmaAdapter);
    *(_DWORD *)(a2 + 120) = v11;
    _InterlockedOr(v34, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
      SepAuditAssignPrimaryToken(a1, a2);
    ObfReferenceObject((PVOID)a2);
    v16 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), a2);
    if ( v16 )
    {
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 48), 1u);
      _InterlockedOr(v34, 0);
      *(_BYTE *)(v16 + 204) = 0;
      _InterlockedOr(v34, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
      result = 0LL;
      *a3 = v16;
    }
    else
    {
      return 3221225596LL;
    }
  }
  return result;
}
