/*
 * XREFs of AlpcViewDestroyProcedure @ 0x140685570
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E7A94 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1405EEEC0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 *     MmUnsecureVirtualMemory @ 0x1406245E0 (MmUnsecureVirtualMemory.c)
 *     MmUnmapViewInSystemSpace @ 0x140658CE0 (MmUnmapViewInSystemSpace.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 *     AlpcpRemoveResourcePort @ 0x140685C50 (AlpcpRemoveResourcePort.c)
 *     AlpcpRestoreWriteAccess @ 0x140685CD0 (AlpcpRestoreWriteAccess.c)
 */

__int64 __fastcall AlpcViewDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v3; // rdi
  _KPROCESS *Process; // rbp
  int v5; // ecx
  int v6; // eax
  _KPROCESS *v7; // rcx
  void *v8; // rcx
  volatile signed __int64 *v9; // rdi
  _OWORD v11[3]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  memset(v11, 0, sizeof(v11));
  v3 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(a1 + 16));
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v5 = *(_DWORD *)(v3 + 52) - 1;
    *(_DWORD *)(v3 + 52) = v5;
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v6 = *(_DWORD *)(v3 + 48);
      if ( (v6 & 1) != 0 )
      {
        *(_QWORD *)(v3 + 80) = 0LL;
        v1 = *(_QWORD *)(v3 + 72);
        if ( v1 )
        {
          AlpcpRestoreWriteAccess(*(_QWORD *)(v3 + 72));
        }
        else if ( !v5 )
        {
          *(_DWORD *)(v3 + 48) = v6 & 0xFFFFFFFE;
        }
      }
    }
    AlpcpUnlockBlob(v3);
    AlpcpRemoveResourcePort(*(_QWORD *)(a1 + 24), a1);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 24));
    if ( (*(_DWORD *)(a1 + 72) & 8) != 0 )
    {
      MmUnmapViewInSystemSpace(*(PVOID *)(a1 + 40));
    }
    else
    {
      v7 = *(_KPROCESS **)(a1 + 32);
      if ( Process != v7 )
        KiStackAttachProcess(v7, 0, (__int64)v11);
      v8 = *(void **)(a1 + 56);
      if ( v8 )
        MmUnsecureVirtualMemory(v8);
      MiUnmapViewOfSection(*(_QWORD *)(a1 + 32));
      if ( Process != *(_KPROCESS **)(a1 + 32) )
        KiUnstackDetachProcess((__int64)v11, 0);
    }
    if ( v1 )
      AlpcpDereferenceBlobEx(v1, 1);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1);
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 2048LL, 0LL);
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v9 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 32) + 2048LL);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x63706C41u);
  }
  return 0LL;
}
