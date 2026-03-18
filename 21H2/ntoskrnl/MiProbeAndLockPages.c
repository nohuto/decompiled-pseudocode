/*
 * XREFs of MiProbeAndLockPages @ 0x14029C5B0
 * Callers:
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     MmProbeAndLockPagesPrivate @ 0x140256F38 (MmProbeAndLockPagesPrivate.c)
 *     CcZeroDataInCache @ 0x14029C34C (CcZeroDataInCache.c)
 *     IopProbeAndLockPages @ 0x14029C520 (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x14029C568 (IopProbeAndLockPages_0.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     VslpLockPagesForTransfer @ 0x1403A0F08 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x1403A108C (VslpLockMdlForTransfer.c)
 *     CcLockSystemCacheBuffer @ 0x14053A460 (CcLockSystemCacheBuffer.c)
 *     VslFinalizeSecureImageHash @ 0x140550260 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x140550900 (VslValidateDynamicCodePages.c)
 *     IopProbeAndLockPages_2 @ 0x14055A55C (IopProbeAndLockPages_2.c)
 *     IopProbeAndLockPages_3 @ 0x14055A5BC (IopProbeAndLockPages_3.c)
 *     KiOpPatchCode @ 0x14057B748 (KiOpPatchCode.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 *     MiGetWorkingSetInfo @ 0x1405A605C (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x1405E2170 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x1405FD594 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x140628F90 (VmProbeAndLockPages.c)
 *     MiLockRetpolineStubs @ 0x140B52090 (MiLockRetpolineStubs.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockComplete @ 0x14031A4F0 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPacket @ 0x14031B810 (MiProbeAndLockPacket.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPages(_DWORD *a1, char a2, int a3)
{
  int v6; // eax
  unsigned int v7; // eax
  __int64 result; // rax
  _BYTE *v9; // rbx
  int v10; // edi
  int v11; // edx
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD v16[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v16, 0, sizeof(v16));
  v6 = MiProbeAndLockPrepare((unsigned int)v16, (_DWORD)a1, a1[8] + a1[11], a1[10], a2, a3, 1);
  if ( v6 < 0 )
    RtlRaiseStatus((unsigned int)v6);
  v7 = MiProbeAndLockPacket(v16);
  result = MiProbeAndLockComplete(v16, v7, 3LL);
  v9 = (_BYTE *)v16[16];
  v10 = result;
  if ( v16[16] )
  {
    v11 = *(_DWORD *)(v16[16] + 52LL);
    v12 = v16[14] + (v11 & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v16[16] + 34LL) << 31));
    v13 = v11 ^ (v12 ^ v11) & 0x7FFFFFFF;
    v14 = v16[15];
    *(_DWORD *)(v16[16] + 52LL) = v13;
    v9[34] = v12 >> 31;
    v15 = v14 - v16[14];
    if ( v15 )
      MiReturnFullProcessCommitment(v16[11], v15);
    result = MiUnlockAndDereferenceVad(v9);
  }
  if ( v10 < 0 )
    RtlRaiseStatus((unsigned int)v10);
  return result;
}
