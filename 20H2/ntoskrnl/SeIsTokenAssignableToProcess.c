/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x1406D0B80
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x1407B6DE0 (PspAssignPrimaryToken.c)
 * Callees:
 *     RtlSidDominates @ 0x14020FB40 (RtlSidDominates.c)
 *     RtlSidDominatesForTrust @ 0x14020FCC0 (RtlSidDominatesForTrust.c)
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     SepCopyTokenIntegrity @ 0x14023D638 (SepCopyTokenIntegrity.c)
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     SepIsSiblingTokenByPointer @ 0x1406D0D5C (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406D0E50 (SepIsChildTokenByPointer.c)
 */

__int64 __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // bl
  __int64 v5; // r14
  __int64 v6; // r15
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v8; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  int v12; // r13d
  int v13; // esi
  char v14; // si
  bool v15; // [rsp+88h] [rbp+48h] BYREF
  char v16; // [rsp+90h] [rbp+50h] BYREF
  char v17; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v16 = 0;
  v5 = 0LL;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v17 = 0;
  v15 = 0;
  v8 = PsReferencePrimaryToken(Process);
  if ( !v8 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)v8 + 6), 1u);
  SepCopyTokenIntegrity((__int64)v8);
  if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
    v6 = *((_QWORD *)v8 + 138);
  ExReleaseResourceLite(*((PERESOURCE *)v8 + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (struct _DMA_ADAPTER *)v8);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1);
  v12 = *(_DWORD *)(a1 + 192);
  v13 = *(_DWORD *)(a1 + 196);
  if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
    v5 = *(_QWORD *)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 == 2 && v13 < 2 )
    return 3221225637LL;
  result = RtlSidDominates(0LL, 0LL, &v15);
  if ( (int)result >= 0 )
  {
    if ( !v15 )
      goto LABEL_18;
    if ( !(unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
      goto LABEL_15;
    v15 = 0;
    result = RtlSidDominatesForTrust(v6, v5, &v15);
    if ( (int)result < 0 )
      return result;
    if ( v15 )
    {
LABEL_15:
      result = SepIsChildTokenByPointer(a1, &v16);
      v14 = v16;
      if ( !v16 )
      {
        if ( (int)result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v17);
      }
    }
    else
    {
LABEL_18:
      v14 = v16;
    }
    if ( (int)result >= 0 )
    {
      if ( v14 || v17 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}
