/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x1406E848C
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x1407A5D14 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     SepCopyTokenIntegrity @ 0x14026A848 (SepCopyTokenIntegrity.c)
 *     RtlSidDominates @ 0x140294A10 (RtlSidDominates.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     SepIsSiblingTokenByPointer @ 0x1406E8608 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406E86FC (SepIsChildTokenByPointer.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  struct _KPROCESS *Process; // rcx
  PERESOURCE *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rax
  int v9; // ebx
  int v10; // r15d
  NTSTATUS result; // eax
  char v12; // bl
  char v13; // [rsp+78h] [rbp+38h] BYREF
  BOOLEAN Dominates; // [rsp+80h] [rbp+40h] BYREF
  char v15; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  *a2 = 0;
  v13 = 0;
  v15 = 0;
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (struct _DMA_ADAPTER *)v6);
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1);
  v9 = *(_DWORD *)(a1 + 192);
  v10 = *(_DWORD *)(a1 + 196);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 == 2 && v10 < 2 )
    return -1073741659;
  result = RtlSidDominates(0LL, 0LL, &Dominates);
  if ( result >= 0 )
  {
    if ( Dominates )
    {
      result = SepIsChildTokenByPointer(a1, &v13);
      v12 = v13;
      if ( !v13 )
      {
        if ( result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v15);
      }
    }
    else
    {
      v12 = v13;
    }
    if ( result >= 0 )
    {
      if ( v12 || v15 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}
