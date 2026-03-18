/*
 * XREFs of MiDeleteVad @ 0x1407BC0B0
 * Callers:
 *     MiFreeVadRange @ 0x1402ECEB0 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x1402ECFD8 (MiDeletePartialVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1406E2C14 (MiUnmapLockedPagesInUserSpace.c)
 *     MiCleanVad @ 0x1406F8C0C (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1406F9060 (MiUnmapVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x14079EF3C (MiFreeToSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140852834 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x14096D8A8 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x140979918 (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14097EF10 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x140980A20 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiDereferenceExtendInfo @ 0x1402583CC (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x14025E274 (MiDereferenceControlArea.c)
 *     MiDrainSystemAccessLog @ 0x1402829D0 (MiDrainSystemAccessLog.c)
 *     MiManageSubsectionView @ 0x140285FE0 (MiManageSubsectionView.c)
 *     MiControlAreaRequiresCharge @ 0x140287380 (MiControlAreaRequiresCharge.c)
 *     MiUnmapViewSubsections @ 0x1402875B0 (MiUnmapViewSubsections.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiReturnFullProcessCharges @ 0x14028CDA0 (MiReturnFullProcessCharges.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiLocateVadEvent @ 0x1402EE0C8 (MiLocateVadEvent.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MiIsVadLargePrivate @ 0x14030FBE0 (MiIsVadLargePrivate.c)
 *     MiSetVadDeleted @ 0x14030FC20 (MiSetVadDeleted.c)
 *     MiDeleteVirtualAddresses @ 0x14030FE40 (MiDeleteVirtualAddresses.c)
 *     MiFinishVadDeletion @ 0x14030FEC0 (MiFinishVadDeletion.c)
 *     MiLockAddressSpaceToo @ 0x140310450 (MiLockAddressSpaceToo.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1405852C0 (MiLogPerfMemoryRangeEvent.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14058C0E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiInitPerfMemoryFlags @ 0x14059A6F4 (MiInitPerfMemoryFlags.c)
 *     MiDecrementLargeSubsections @ 0x14059DF58 (MiDecrementLargeSubsections.c)
 *     MiDereferencePerSessionProtos @ 0x1406DDA18 (MiDereferencePerSessionProtos.c)
 *     MiRemoveSharedCommitNode @ 0x1406FC2F0 (MiRemoveSharedCommitNode.c)
 *     MiRemoveUserPhysicalPagesView @ 0x14097D5F0 (MiRemoveUserPhysicalPagesView.c)
 *     MiFreeLargePageView @ 0x140983198 (MiFreeLargePageView.c)
 *     MiDeleteEnclavePages @ 0x140A6A73C (MiDeleteEnclavePages.c)
 */

void __fastcall MiDeleteVad(unsigned __int8 *P, __int64 a2, int a3)
{
  char v4; // r15
  unsigned int v6; // ebx
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  _KPROCESS *Process; // rsi
  unsigned __int64 v10; // r12
  __int64 v11; // r12
  int v12; // edx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // r8d
  int v16; // esi
  __int64 v17; // rsi
  void *v18; // rcx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned int SessionId; // eax
  unsigned int v23; // ecx
  __int64 v24; // r14
  __int64 v25; // rdx
  unsigned __int64 v26; // r14
  __int64 v27; // r9
  unsigned __int64 v28; // r14
  int v29; // r8d
  __int64 VadEvent; // rax
  int v31; // edx
  unsigned __int64 v32; // rcx
  unsigned int inited; // eax
  __int64 *v34; // [rsp+30h] [rbp-39h] BYREF
  __int64 *v35[2]; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 *v36; // [rsp+48h] [rbp-21h]
  __int128 v37; // [rsp+50h] [rbp-19h] BYREF
  __int128 v38; // [rsp+60h] [rbp-9h]
  __int128 v39; // [rsp+70h] [rbp+7h]
  __int64 v40; // [rsp+80h] [rbp+17h]
  unsigned __int64 v41; // [rsp+D0h] [rbp+67h]
  __int64 v43; // [rsp+E8h] [rbp+7Fh]

  v40 = 0LL;
  v4 = 0;
  v37 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v8 = (unsigned __int64)P[32] << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (unsigned __int64)P[33] << 32;
  v41 = (unsigned __int64)Process;
  v35[0] = 0LL;
  v34 = 0LL;
  v36 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v43 = (*((unsigned int *)P + 6) | v8) << 12;
  v11 = ((*((unsigned int *)P + 7) | v10) << 12) | 0xFFF;
  if ( MiIsVadLargePrivate((__int64)P) )
    v6 = 64;
  v12 = *((_DWORD *)P + 12);
  if ( (v12 & 0x200000) == 0 )
  {
    v18 = (void *)*((_QWORD *)P + 16);
    if ( v18 )
    {
      ObfDereferenceObject(v18);
      v12 = *((_DWORD *)P + 12);
    }
  }
  if ( (v12 & 0x6200000) == 0x4200000 )
  {
    MiDeleteEnclavePages(Process, P);
    v12 = *((_DWORD *)P + 12);
  }
  if ( (v12 & 0x70) == 0x30 )
    *((_QWORD *)&v39 + 1) = MiRemoveUserPhysicalPagesView(P);
  v13 = *((unsigned int *)P + 13);
  LODWORD(v13) = v13 & 0x7FFFFFFF;
  if ( (((unsigned __int64)P[34] << 31) | v13) == 0x7FFFFFFFDLL && *((_QWORD *)P + 2) == -2LL )
    v6 |= 0x80u;
  MiSetVadDeleted((__int64)P);
  if ( MiIsVadLargePrivate((__int64)P) )
    v15 |= 0x800u;
  v16 = v15 | 0x1000;
  if ( (*((_DWORD *)P + 12) & 0x2200000) != 0x2200000 )
    v16 = v15;
  if ( v6 < 0x80 )
  {
    MiDeleteVirtualAddresses(v14, v43, v11, v16, (__int64)&v37);
    if ( (v16 & 0x800) != 0 )
    {
      v23 = *((_DWORD *)P + 13);
      v24 = v23;
      LODWORD(v24) = v23 & 0x7FFFFFFF;
      v25 = v40;
      v26 = ((unsigned __int64)P[34] << 31) | v24;
      if ( v40 )
      {
        v40 = 0LL;
        MiReturnFullProcessCharges(v41, v25);
        v23 = *((_DWORD *)P + 13);
      }
      v27 = *((_QWORD *)&v38 + 1);
      v28 = v26 - *((_QWORD *)&v38 + 1);
      v29 = v23 ^ (v28 ^ v23) & 0x7FFFFFFF;
      P[34] = v28 >> 31;
      *((_DWORD *)P + 13) = v29;
      if ( v28 )
      {
        VadEvent = MiLocateVadEvent((__int64)P, 16LL);
        MiFreeLargePageView(v41, P, VadEvent, (unsigned int)(v31 - 15));
        v29 = *((_DWORD *)P + 13);
        v27 = *((_QWORD *)&v38 + 1);
      }
      v32 = *((_QWORD *)&v37 + 1);
      *((_DWORD *)P + 13) = v29 ^ (DWORD2(v37) ^ v29) & 0x7FFFFFFF;
      P[34] = v32 >> 31;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 2032), v32 - v27);
      *((_QWORD *)&v38 + 1) = 0LL;
      v7 = 0LL;
    }
  }
  if ( (v16 & 2) != 0 )
  {
    v19 = *((_DWORD *)P + 12);
    v7 = **((_QWORD **)P + 9);
    if ( (v19 & 0x70) == 0x20 )
    {
      if ( (*((_DWORD *)P + 16) & 0x1000000) != 0 )
        v6 |= 0x18u;
    }
    else if ( *(_QWORD *)(v7 + 64) )
    {
      if ( (((v19 & 0xF80) - 512) & 0xFFFFFEFF) == 0 )
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 92));
      MiGetProtoPteAddress((__int64)P, *((unsigned int *)P + 6) | ((unsigned __int64)P[32] << 32), 0, (__int64 *)v35);
      if ( (*((_DWORD *)P + 16) & 0x1000000) != 0 )
        v6 |= 0x20u;
      MiGetProtoPteAddress((__int64)P, *((unsigned int *)P + 7) | ((unsigned __int64)P[33] << 32), 0, (__int64 *)&v34);
    }
    if ( (v6 & 8) == 0 )
    {
      if ( (P[48] & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog((__int64)v36);
        v20 = *((_DWORD *)P + 12);
        if ( (v20 & 0x70) == 0x20 )
        {
          if ( (*(_DWORD *)(v7 + 56) & 0x8000000) != 0 )
            v6 |= 2u;
          v6 |= 4u;
        }
        else if ( (v20 & 0x200000) == 0 && !*(_QWORD *)(v7 + 64) )
        {
          MiGetProtoPteAddress(
            (__int64)P,
            *((unsigned int *)P + 6) | ((unsigned __int64)P[32] << 32),
            0,
            (__int64 *)v35);
          MiGetProtoPteAddress(
            (__int64)P,
            *((unsigned int *)P + 7) | ((unsigned __int64)P[33] << 32),
            0,
            (__int64 *)&v34);
        }
      }
      v21 = v6 | 1;
      if ( *((__int64 *)P + 15) >= 0 )
        v21 = v6;
      v6 = v21 | 8;
    }
  }
  MiLockAddressSpaceToo(v41, (__int64)P);
  if ( v6 < 0x80 )
  {
    MiRemoveVad((unsigned __int64)P, 1, a2);
    if ( a2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 40);
      KeAbPostRelease(a2 + 40);
    }
  }
  *((_QWORD *)P + 1) = *((_QWORD *)&v37 + 1);
  *(_QWORD *)P = *((_QWORD *)&v38 + 1);
  if ( (v6 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(0, 13);
    v17 = v43;
    MiLogPerfMemoryRangeEvent(
      v43,
      *(unsigned int *)(v41 + 1088),
      inited,
      (*((unsigned int *)P + 7) | ((unsigned __int64)P[33] << 32))
    - (*((unsigned int *)P + 6) | ((unsigned __int64)P[32] << 32))
    + 1);
  }
  else
  {
    v17 = v43;
  }
  if ( (v6 & 1) != 0 )
    MiDereferenceExtendInfo((__int64)P, v7);
  if ( (v6 & 8) != 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      SessionId = MmGetSessionIdEx(v41);
      MiDereferencePerSessionProtos((__int64 *)v7, SessionId);
    }
    if ( (v6 & 4) != 0 && (MiControlAreaRequiresCharge(v7) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v7);
    MiRemoveSharedCommitNode((_QWORD *)v7, v41, 0);
    MiManageSubsectionView(*((__int64 **)P + 9), (_QWORD *)P + 12, 4);
  }
  if ( a2 || v6 >= 0x80 )
    v4 = 1;
  if ( (a3 & 0x40000000) != 0 )
    v4 |= 2u;
  MiFinishVadDeletion((unsigned int *)P, v17, v11, v4);
  if ( v7 )
  {
    if ( (v6 & 0x10) != 0 )
    {
      MiDereferenceControlArea(v7);
    }
    else
    {
      if ( v35[0] )
      {
        if ( (v6 & 0x20) != 0 )
          MiDecrementLargeSubsections(v35[0], v34);
      }
      MiUnmapViewSubsections(v7, (ULONG_PTR)v35[0], (__int64)v34);
    }
  }
}
