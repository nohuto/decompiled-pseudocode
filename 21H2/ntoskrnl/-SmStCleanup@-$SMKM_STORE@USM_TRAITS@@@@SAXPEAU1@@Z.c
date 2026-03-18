/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140237230
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140236EC0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1406ED528 (SmProcessCreateRequest.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     SmKmStoreHelperCleanup @ 0x1402375D8 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1402376A4 (SmKmStoreHelperCheckWaitCommand.c)
 *     SmFpCleanup @ 0x1402376C4 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140237A0C (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140238A40 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAcquireReleaseCharges @ 0x140262ED4 (SmAcquireReleaseCharges.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406D9550 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     SmKmFileInfoCleanup @ 0x1409D57BC (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  void *v2; // rcx
  char v3; // al
  ULONG_PTR v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbp
  struct _KTHREAD *v7; // rsi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // r8d
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  char v15; // al
  char v16; // cl
  void *v17; // rbx
  void *v18; // rcx
  __int64 result; // rax
  void **v20; // rbx
  _OWORD v21[3]; // [rsp+30h] [rbp-58h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  v2 = *(void **)(a1 + 6200);
  memset(v21, 0, sizeof(v21));
  if ( v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
    v2 = *(void **)(a1 + 6200);
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1LL);
  v3 = *(_BYTE *)(a1 + 6021);
  if ( (v3 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6488) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6496), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6488), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6488), 0x746C6644u);
      v3 = *(_BYTE *)(a1 + 6021);
    }
    if ( (v3 & 4) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 6584);
      if ( v4 )
      {
        KiStackAttachProcess(v4);
        v3 = *(_BYTE *)(a1 + 6021);
      }
      if ( (v3 & 4) != 0 && *(_QWORD *)(a1 + 6568) )
      {
        v20 = *(void ***)(a1 + 6568);
        if ( *v20 )
          SC_ENV::Free(*v20);
        ExFreePoolWithTag(v20, 0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    v6 = a1 + 6024;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 6024);
    v7 = KeGetCurrentThread();
    if ( (unsigned __int64)(v6 - qword_140C50630) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v7->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (char *)&v7[1].Process;
    v10 = v6 & 0x7FFFFFFFFFFFFFFCLL;
    v11 = 0LL;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v10
         || !p_Process[18]
         || (*(_DWORD *)p_Process & 1) != 0
         || *((_DWORD *)p_Process + 2) != SessionId )
    {
      v11 = (unsigned int)(v11 + 1);
      p_Process += 96;
      if ( (unsigned int)v11 >= 6 )
        goto LABEL_45;
    }
    p_Process[18] = 0;
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, v11, v10);
        _disable();
      }
      v12 = *((_DWORD *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      v7->AbEntrySummary |= 1 << p_Process[16];
      _enable();
      if ( v12 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v7, a1 + 6024, v12);
      goto LABEL_28;
    }
LABEL_45:
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, a1 + 6024, SessionId, 0LL);
    _enable();
LABEL_28:
    v13 = KeGetCurrentThread();
    v14 = v13->SpecialApcDisable++ == -1;
    if ( v14 && ($CEA84C04E3712D858E5667A507841A2A *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery();
  }
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  v15 = *(_BYTE *)(a1 + 6021);
  if ( (v15 & 4) != 0 && *(_QWORD *)(a1 + 6584) )
  {
    KiUnstackDetachProcess(v21, 0LL);
    v15 = *(_BYTE *)(a1 + 6021);
  }
  v16 = *(_BYTE *)(a1 + 6020);
  if ( v16 )
  {
    if ( v16 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v17 = *(void **)(a1 + 6216);
    if ( (v15 & 4) != 0 )
    {
      v18 = *(void **)(a1 + 6224);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6360);
    }
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  result = SmFpCleanup(a1 + 6608);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1LL, 1LL);
  return result;
}
