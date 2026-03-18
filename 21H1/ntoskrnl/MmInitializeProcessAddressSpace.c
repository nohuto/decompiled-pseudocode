/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x14064EE7C
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x140A4FEC4 (MiInitializeBootProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     InitializeSListHead @ 0x1402C1F70 (InitializeSListHead.c)
 *     MiInitializeProcessPageTableCommitmentBitMaps @ 0x1402C1F90 (MiInitializeProcessPageTableCommitmentBitMaps.c)
 *     MiInitializeWorkingSetList @ 0x1402C1FF4 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x1402C220C (MiAllowWorkingSetExpansion.c)
 *     ExInitializeAutoExpandPushLock @ 0x1402F6C20 (ExInitializeAutoExpandPushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiMapProcessExecutable @ 0x14064EB10 (MiMapProcessExecutable.c)
 *     MiInsertProcessVads @ 0x14064F0C0 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x14064F13C (MiInitializeVadBitMap.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14064F3D0 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14064F4A8 (MiInitializeProcessBottomUpEntropy.c)
 *     MiComputeProcessUserVa @ 0x14064F668 (MiComputeProcessUserVa.c)
 *     MiAllocateProcessVads @ 0x14064F788 (MiAllocateProcessVads.c)
 *     MiReferenceCfgVad @ 0x1406511E8 (MiReferenceCfgVad.c)
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x1408BFB68 (MiInitializeLockedPagesTracking.c)
 *     MiReturnProcessVads @ 0x1408BFBB4 (MiReturnProcessVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408D4710 (MiCloneProcessAddressSpace.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int *a4,
        char a5)
{
  _QWORD *Pool; // rax
  __int64 v10; // r14
  _DWORD *v11; // r9
  __int64 v12; // r13
  __int64 v13; // r14
  int inserted; // ebx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // r13
  __int128 v25; // xmm0
  _QWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rcx
  __int64 v33; // r8
  _DWORD *v34; // r9
  __int64 *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _DWORD *v38; // r9
  __int64 v39; // r8
  _DWORD *v40; // r9
  struct _KTHREAD *CurrentThread; // rdi
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-D0h]
  __int64 v45; // [rsp+38h] [rbp-C8h]
  _OWORD v46[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v47[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE Src[224]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v47, 0, sizeof(v47));
  memset(Src, 0, 0xD8uLL);
  Pool = MiAllocatePool(64, 0x270uLL, 0x3250694Du);
  v10 = (__int64)Pool;
  if ( Pool )
  {
    ExInitializeAutoExpandPushLock(Pool + 51, 1);
    if ( a2 )
    {
      v20 = *(_QWORD *)(a2 + 1680);
      memmove(Src, (const void *)(v20 + 48), 0xD8uLL);
      v21 = *(_QWORD *)(v20 + 264);
      v22 = 2LL;
      v23 = *(_OWORD *)(v20 + 456);
      v24 = *(_QWORD *)(v20 + 360);
      v46[0] = *(_OWORD *)(v20 + 440);
      v25 = *(_OWORD *)(v20 + 472);
      v44 = v21;
      v26 = &v46[1];
      v46[1] = v23;
      v27 = *(_OWORD *)(v20 + 488);
      v45 = v24;
      v46[2] = v25;
      v46[3] = v27;
      do
      {
        *v26 = 0LL;
        v26 += 4;
        --v22;
      }
      while ( v22 );
    }
    else
    {
      v44 = 0LL;
      v45 = 0LL;
      memset(v46, 0, sizeof(v46));
    }
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v47, v11);
    *(_QWORD *)(BugCheckParameter1 + 1224) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1232) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 2008) = 0LL;
    if ( (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
      MiInitializeLockedPagesTracking(BugCheckParameter1);
    v12 = BugCheckParameter1 + 1664;
    P = 0LL;
    MiInitializeWorkingSetList(BugCheckParameter1 + 1664, v10, 0, 0LL);
    v13 = *(_QWORD *)(BugCheckParameter1 + 1680);
    *(_DWORD *)(v13 + 280) = 1;
    MiInitializeProcessPageTableCommitmentBitMaps(BugCheckParameter1);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 0x400u);
    v43 = 0LL;
    inserted = MiComputeProcessUserVa(BugCheckParameter1, a2, a3, &v43);
    if ( inserted >= 0 )
    {
      if ( a2
        || (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) != 0
        || (P = (PVOID)MiAllocateProcessVads(BugCheckParameter1, v43)) != 0LL )
      {
        InitializeSListHead((PSLIST_HEADER)(v13 + 368));
        if ( a2
          || (MiInitializeProcessBottomUpEntropy(BugCheckParameter1),
              MiInitializeProcessTopDownEntropy(BugCheckParameter1, a3),
              inserted = MiInitializeVadBitMap(0LL),
              inserted >= 0) )
        {
          inserted = MiInsertProcessVads(BugCheckParameter1, &P);
          if ( inserted >= 0 )
          {
            if ( a3 )
            {
              inserted = MiMapProcessExecutable((_KPROCESS *)BugCheckParameter1, a3, a4);
LABEL_14:
              MiAllowWorkingSetExpansion(BugCheckParameter1 + 1664);
LABEL_15:
              KiUnstackDetachProcess((__int64)v47, 0LL, v17, v18);
              return (unsigned int)inserted;
            }
            if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) != 0 && !a2 )
              goto LABEL_14;
            *a4 &= ~0x10u;
            if ( !a2 )
            {
              KiUnstackDetachProcess((__int64)v47, 0LL, v15, v16);
              return 0;
            }
            if ( (*(_BYTE *)(a2 + 992) & 1) != 0 )
            {
              inserted = -1073741595;
            }
            else
            {
              *(_QWORD *)(BugCheckParameter1 + 1448) = *(_QWORD *)(a2 + 1448);
              *(_DWORD *)(BugCheckParameter1 + 1456) = *(_DWORD *)(a2 + 1456);
              *(_WORD *)(BugCheckParameter1 + 1460) = *(_WORD *)(a2 + 1460);
              *(_BYTE *)(BugCheckParameter1 + 1462) = *(_BYTE *)(a2 + 1462);
              *(_QWORD *)(BugCheckParameter1 + 1496) = *(_QWORD *)(a2 + 1496);
              memmove((void *)(v13 + 48), Src, 0xD8uLL);
              v28 = v46[1];
              v29 = v44;
              *(_OWORD *)(v13 + 440) = v46[0];
              *(_QWORD *)(v13 + 264) = v29;
              v30 = v46[2];
              *(_OWORD *)(v13 + 456) = v28;
              v31 = v46[3];
              *(_OWORD *)(v13 + 472) = v30;
              *(_OWORD *)(v13 + 488) = v31;
              inserted = MiInitializeVadBitMap(1LL);
              if ( inserted >= 0 )
              {
                v35 = *(__int64 **)(a2 + 1408);
                if ( v35 )
                {
                  v32 = *v35;
                  if ( *v35 )
                    **(_QWORD **)(BugCheckParameter1 + 1408) = v32;
                }
                if ( (*a4 & 0x80u) == 0 )
                  inserted = 0;
                else
                  inserted = MiSessionCreate(v32);
                v36 = 2LL;
                *(_QWORD *)(v13 + 360) = (v45 + 1) & -(__int64)((a5 & 1) != 0);
                v37 = (_QWORD *)(v13 + 320);
                do
                {
                  v37[1] = v37;
                  *v37 = v37;
                  v37 += 2;
                  --v36;
                }
                while ( v36 );
                KiUnstackDetachProcess((__int64)v47, 0LL, v33, v34);
                if ( inserted >= 0 )
                {
                  inserted = MiCloneProcessAddressSpace(a2, BugCheckParameter1);
                  if ( inserted >= 0 )
                  {
                    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v47, v38);
                    CurrentThread = KeGetCurrentThread();
                    if ( *((_QWORD *)&v46[2] + 1) )
                      MiReferenceCfgVad(CurrentThread, *(_QWORD *)&v46[2], 1LL);
                    if ( *((_QWORD *)&v46[0] + 1) )
                      MiReferenceCfgVad(CurrentThread, *(_QWORD *)&v46[0], 0LL);
                    KiUnstackDetachProcess((__int64)v47, 0LL, v39, v40);
                  }
                }
                MiAllowWorkingSetExpansion(v12);
                return (unsigned int)inserted;
              }
            }
          }
        }
      }
      else
      {
        inserted = -1073741670;
      }
    }
    MiReturnProcessVads(P);
    goto LABEL_15;
  }
  return 3221225626LL;
}
