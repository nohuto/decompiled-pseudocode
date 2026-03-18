/*
 * XREFs of IopProbeAndLockPages_1 @ 0x1403198A0
 * Callers:
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140935320 (IopSetEaOrQuotaInformationFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockComplete @ 0x14031A4F0 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPacket @ 0x14031B810 (MiProbeAndLockPacket.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmUpdateMdlTracker @ 0x140584F10 (MmUpdateMdlTracker.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall IopProbeAndLockPages_1(_DWORD *a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  _BYTE *v12; // rdi
  int v13; // ebx
  __int64 result; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  _QWORD v19[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v19, 0, sizeof(v19));
  v9 = MiProbeAndLockPrepare((unsigned int)v19, (_DWORD)a1, a1[8] + a1[11], a1[10], a2 != 0, a3 != 0, 1);
  if ( v9 < 0 )
    RtlRaiseStatus(v9);
  v10 = MiProbeAndLockPacket(v19);
  v11 = MiProbeAndLockComplete(v19, v10, 3LL);
  v12 = (_BYTE *)v19[16];
  v13 = v11;
  if ( v19[16] )
  {
    v15 = *(unsigned int *)(v19[16] + 52LL);
    LODWORD(v15) = v15 & 0x7FFFFFFF;
    v16 = v19[14] + (v15 | ((unsigned __int64)*(unsigned __int8 *)(v19[16] + 34LL) << 31));
    v17 = v19[15];
    *(_DWORD *)(v19[16] + 52LL) ^= (v16 ^ *(_DWORD *)(v19[16] + 52LL)) & 0x7FFFFFFF;
    v12[34] = v16 >> 31;
    v18 = v17 - v19[14];
    if ( v18 )
      MiReturnFullProcessCommitment(v19[11], v18);
    MiUnlockAndDereferenceVad(v12);
  }
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
