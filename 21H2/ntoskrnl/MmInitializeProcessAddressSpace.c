/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x1406BFB24
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x140A58868 (MiInitializeBootProcess.c)
 * Callees:
 *     ExInitializeAutoExpandPushLock @ 0x1402251D0 (ExInitializeAutoExpandPushLock.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     InitializeSListHead @ 0x1402A3310 (InitializeSListHead.c)
 *     MiInitializeProcessPageTableCommitmentBitMaps @ 0x1402A3330 (MiInitializeProcessPageTableCommitmentBitMaps.c)
 *     MiInitializeWorkingSetList @ 0x1402A3394 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x1402A35AC (MiAllowWorkingSetExpansion.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiInsertProcessVads @ 0x1406BFD68 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x1406BFDE4 (MiInitializeVadBitMap.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1406C0078 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1406C0150 (MiInitializeProcessBottomUpEntropy.c)
 *     MiComputeProcessUserVa @ 0x1406C0310 (MiComputeProcessUserVa.c)
 *     MiAllocateProcessVads @ 0x1406C0430 (MiAllocateProcessVads.c)
 *     MiMapProcessExecutable @ 0x1406C0600 (MiMapProcessExecutable.c)
 *     MiReferenceCfgVad @ 0x1406C10DC (MiReferenceCfgVad.c)
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x1408C4618 (MiInitializeLockedPagesTracking.c)
 *     MiReturnProcessVads @ 0x1408C4664 (MiReturnProcessVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408D91C0 (MiCloneProcessAddressSpace.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        __int64 a3,
        _DWORD *a4,
        char a5)
{
  _QWORD *Pool; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r14
  int inserted; // ebx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int64 v19; // r13
  __int128 v20; // xmm0
  _QWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+38h] [rbp-C8h]
  _OWORD v36[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v37[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE Src[224]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v37, 0, sizeof(v37));
  memset(Src, 0, 0xD8uLL);
  Pool = MiAllocatePool(64, 0x270uLL, 0x3250694Du);
  v10 = (__int64)Pool;
  if ( Pool )
  {
    ExInitializeAutoExpandPushLock(Pool + 51, 1);
    if ( a2 )
    {
      v15 = *(_QWORD *)(a2 + 1680);
      memmove(Src, (const void *)(v15 + 48), 0xD8uLL);
      v16 = *(_QWORD *)(v15 + 264);
      v17 = 2LL;
      v18 = *(_OWORD *)(v15 + 456);
      v19 = *(_QWORD *)(v15 + 360);
      v36[0] = *(_OWORD *)(v15 + 440);
      v20 = *(_OWORD *)(v15 + 472);
      v34 = v16;
      v21 = &v36[1];
      v36[1] = v18;
      v22 = *(_OWORD *)(v15 + 488);
      v35 = v19;
      v36[2] = v20;
      v36[3] = v22;
      do
      {
        *v21 = 0LL;
        v21 += 4;
        --v17;
      }
      while ( v17 );
    }
    else
    {
      v34 = 0LL;
      v35 = 0LL;
      memset(v36, 0, sizeof(v36));
    }
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v37);
    *(_QWORD *)(BugCheckParameter1 + 1224) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1232) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 2008) = 0LL;
    if ( (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
      MiInitializeLockedPagesTracking(BugCheckParameter1);
    v11 = BugCheckParameter1 + 1664;
    P = 0LL;
    MiInitializeWorkingSetList(BugCheckParameter1 + 1664, v10, 0, 0LL);
    v12 = *(_QWORD *)(BugCheckParameter1 + 1680);
    *(_DWORD *)(v12 + 280) = 1;
    MiInitializeProcessPageTableCommitmentBitMaps(BugCheckParameter1);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 0x400u);
    v33 = 0LL;
    inserted = MiComputeProcessUserVa(BugCheckParameter1, a2, a3, &v33);
    if ( inserted >= 0 )
    {
      if ( a2
        || (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) != 0
        || (P = (PVOID)MiAllocateProcessVads(BugCheckParameter1, v33)) != 0LL )
      {
        InitializeSListHead((PSLIST_HEADER)(v12 + 368));
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
              inserted = MiMapProcessExecutable(BugCheckParameter1, a3, a4);
LABEL_14:
              MiAllowWorkingSetExpansion(BugCheckParameter1 + 1664);
LABEL_15:
              KiUnstackDetachProcess((__int64)v37, 0LL);
              return (unsigned int)inserted;
            }
            if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) != 0 && !a2 )
              goto LABEL_14;
            *a4 &= ~0x10u;
            if ( !a2 )
            {
              KiUnstackDetachProcess((__int64)v37, 0LL);
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
              memmove((void *)(v12 + 48), Src, 0xD8uLL);
              v23 = v36[1];
              v24 = v34;
              *(_OWORD *)(v12 + 440) = v36[0];
              *(_QWORD *)(v12 + 264) = v24;
              v25 = v36[2];
              *(_OWORD *)(v12 + 456) = v23;
              v26 = v36[3];
              *(_OWORD *)(v12 + 472) = v25;
              *(_OWORD *)(v12 + 488) = v26;
              inserted = MiInitializeVadBitMap(1LL);
              if ( inserted >= 0 )
              {
                v28 = *(__int64 **)(a2 + 1408);
                if ( v28 )
                {
                  v27 = *v28;
                  if ( *v28 )
                    **(_QWORD **)(BugCheckParameter1 + 1408) = v27;
                }
                if ( (*a4 & 0x80u) == 0 )
                  inserted = 0;
                else
                  inserted = MiSessionCreate(v27);
                v29 = 2LL;
                *(_QWORD *)(v12 + 360) = (v35 + 1) & -(__int64)((a5 & 1) != 0);
                v30 = (_QWORD *)(v12 + 320);
                do
                {
                  v30[1] = v30;
                  *v30 = v30;
                  v30 += 2;
                  --v29;
                }
                while ( v29 );
                KiUnstackDetachProcess((__int64)v37, 0LL);
                if ( inserted >= 0 )
                {
                  inserted = MiCloneProcessAddressSpace(a2, BugCheckParameter1);
                  if ( inserted >= 0 )
                  {
                    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v37);
                    CurrentThread = KeGetCurrentThread();
                    if ( *((_QWORD *)&v36[2] + 1) )
                      MiReferenceCfgVad(CurrentThread, *(_QWORD *)&v36[2], 1LL);
                    if ( *((_QWORD *)&v36[0] + 1) )
                      MiReferenceCfgVad(CurrentThread, *(_QWORD *)&v36[0], 0LL);
                    KiUnstackDetachProcess((__int64)v37, 0LL);
                  }
                }
                MiAllowWorkingSetExpansion(v11);
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
