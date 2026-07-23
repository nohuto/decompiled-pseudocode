/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x1406C7DCC
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x1407A34C4 (PspAssignPrimaryToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     RtlSidDominates @ 0x140258190 (RtlSidDominates.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     SepCopyTokenIntegrity @ 0x1402D7648 (SepCopyTokenIntegrity.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SepIsSiblingTokenByPointer @ 0x1406C7F48 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406C803C (SepIsChildTokenByPointer.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  struct _KPROCESS *Process; // rcx
  PERESOURCE *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *v11; // rax
  int v12; // ebx
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  NTSTATUS result; // eax
  char v18; // bl
  char v19; // [rsp+78h] [rbp+38h] BYREF
  BOOLEAN Dominates; // [rsp+80h] [rbp+40h] BYREF
  char v21; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  *a2 = 0;
  v19 = 0;
  v21 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  Dominates = 0;
  v6 = (PERESOURCE *)PsReferencePrimaryToken(Process);
  if ( !v6 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v6[6], 1u);
  SepCopyTokenIntegrity((__int64)v6);
  ExReleaseResourceLite(v6[6]);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (struct _DMA_ADAPTER *)v6);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1);
  v12 = *(_DWORD *)(a1 + 192);
  v13 = *(_DWORD *)(a1 + 196);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
  if ( v12 == 2 && v13 < 2 )
    return -1073741659;
  result = RtlSidDominates(0LL, 0LL, &Dominates);
  if ( result >= 0 )
  {
    if ( Dominates )
    {
      result = SepIsChildTokenByPointer(a1, &v19);
      v18 = v19;
      if ( !v19 )
      {
        if ( result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v21);
      }
    }
    else
    {
      v18 = v19;
    }
    if ( result >= 0 )
    {
      if ( v18 || v21 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}
