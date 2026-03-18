/*
 * XREFs of MiAllocateNewSubAllocatedRegion @ 0x1406EFD48
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406045E8 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiLockVad @ 0x140249DF8 (MiLockVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140249E28 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14024A02C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiInsertPrivateVad @ 0x14024AC04 (MiInsertPrivateVad.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 *     MiLocateVadEvent @ 0x140251084 (MiLocateVadEvent.c)
 *     MiSelectUserAddress @ 0x1405F8620 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1405FCED0 (MiAddSecureEntry.c)
 *     MiGetUserReservationHighestAddress @ 0x1405FD69C (MiGetUserReservationHighestAddress.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x1405FE340 (MiAdvanceVadHint.c)
 *     MiCreateVadEventBitmap @ 0x1406F007C (MiCreateVadEventBitmap.c)
 *     MiFreeVadEventBitmap @ 0x1408C5158 (MiFreeVadEventBitmap.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateNewSubAllocatedRegion(int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  struct _KPROCESS *Process; // rdi
  _DWORD *Pool; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r13
  unsigned __int64 UserReservationHighestAddress; // r14
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned __int64 v13; // r12
  int VadEventBitmap; // esi
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r13
  int v19; // edx
  __int64 v20; // rsi
  unsigned int v21; // eax
  _QWORD *v22; // r15
  __int64 v23; // rdx
  _DWORD *v24; // rbp
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v28; // [rsp+50h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-68h]
  __int64 v30; // [rsp+60h] [rbp-68h]
  unsigned __int64 v31; // [rsp+68h] [rbp-60h]
  unsigned __int64 v33; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v34; // [rsp+E0h] [rbp+18h]
  _QWORD *v35; // [rsp+E8h] [rbp+20h] BYREF

  v33 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 512LL;
  Process = CurrentThread->ApcState.Process;
  v31 = Process[1].ActiveProcessorsPadding[8];
  if ( a2 <= 0x10 )
  {
    Pool = MiAllocatePool(64, 0x40uLL, 0x53646156u);
    v6 = (__int64)Pool;
    if ( Pool )
    {
      v7 = 32LL;
      v8 = Pool[12] & 0xFFFFF27F;
      *((_QWORD *)Pool + 2) = -2LL;
      *((_QWORD *)Pool + 5) = 0LL;
      Pool[12] = v8 | 0x100200;
      if ( a1 != 1 )
        v7 = 0LL;
      v9 = 0LL;
      UserReservationHighestAddress = MiGetUserReservationHighestAddress((__int64)Process, v7);
      v11 = 0x200000LL;
      do
      {
        v12 = *(_DWORD *)(v6 + 48);
        v35 = 0LL;
        v13 = v3 << 12;
        v28 = v3;
        v34 = v11;
        VadEventBitmap = MiSelectUserAddress(
                           0,
                           0LL,
                           UserReservationHighestAddress,
                           v3 << 12,
                           v11,
                           0LL,
                           (v12 >> 7) & 0x1F,
                           0x80000000,
                           (__int64 *)&v35,
                           &v33);
        if ( VadEventBitmap >= 0 )
          break;
        if ( v11 != 0x10000 )
          v11 = 0x10000LL;
        v3 >>= 1;
        if ( v34 != 0x10000 )
          v3 = v28;
      }
      while ( v3 >= 0x10 );
      v15 = (__int64)CurrentThread;
      if ( v3 >= 0x10 )
      {
        v16 = v13 + v33 - 1;
        v17 = v33 >> 12;
        v18 = v16 >> 12;
        *(_BYTE *)(v6 + 32) = v33 >> 44;
        v30 = v16;
        *(_BYTE *)(v6 + 33) = v16 >> 44;
        *(_DWORD *)(v6 + 24) = v17;
        *(_DWORD *)(v6 + 28) = v16 >> 12;
        VadEventBitmap = MiCreateVadEventBitmap(Process, v6, v3, 64LL);
        if ( VadEventBitmap < 0 )
        {
LABEL_30:
          ExFreePoolWithTag((PVOID)v6, 0);
          return (unsigned int)VadEventBitmap;
        }
        v20 = MiLocateVadEvent(v6, 64LL) + 8;
        v34 = v20;
        v21 = ExGenRandom(v19 - 63);
        v22 = (_QWORD *)(v20 + 16);
        *(_QWORD *)(v20 + 32) = v6;
        *(_QWORD *)(v20 + 16) = 0LL;
        *(_DWORD *)(v20 + 48) = a1 & 3 ^ (4 * (v21 % v3));
        v23 = v33;
        *(_QWORD *)(v20 + 24) = 0LL;
        *(_DWORD *)(v20 + 40) = 0;
        *(_DWORD *)(v20 + 44) = v3;
        v24 = MiAddSecureEntry(v6, v23, v30, -2147483647, 0);
        if ( v24 )
        {
          VadEventBitmap = MiInsertVadCharges(v6, Process);
          if ( VadEventBitmap >= 0 )
          {
            MiLockVad(v15, v6);
            MiInsertPrivateVad(v6, (__int64)Process);
            MiUnlockVad(v15, v6);
            if ( v35 )
              MiAdvanceVadHint(v17, v18, v35);
            LOCK_PAGE_TABLE_COMMITMENT(v15, (__int64)Process);
            v25 = v31 + 16 * (a1 + 20LL);
            v26 = *(_QWORD *)v25;
            if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 )
              __fastfail(3u);
            *v22 = v26;
            v22[1] = v25;
            *(_QWORD *)(v26 + 8) = v22;
            *(_QWORD *)v25 = v22;
            UNLOCK_PAGE_TABLE_COMMITMENT(v15, (__int64)Process);
            v9 = v34;
LABEL_15:
            if ( VadEventBitmap >= 0 )
              return (unsigned int)VadEventBitmap;
            goto LABEL_26;
          }
        }
        else
        {
          VadEventBitmap = -1073741670;
        }
        v9 = v34;
LABEL_26:
        if ( v9 )
          MiFreeVadEventBitmap(Process, v6, 64LL);
        if ( v24 )
          ExFreePoolWithTag(v24, 0);
        goto LABEL_30;
      }
      v24 = 0LL;
      goto LABEL_15;
    }
  }
  return 3221225495LL;
}
