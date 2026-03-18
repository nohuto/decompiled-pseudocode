/*
 * XREFs of MiAllocateEnclaveVad @ 0x1408CD508
 * Callers:
 *     MiCreateEnclave @ 0x1408CDE8C (MiCreateEnclave.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     LOCK_ADDRESS_SPACE @ 0x1402A195C (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1402A2E28 (MiLockVad.c)
 *     MiInsertPrivateVad @ 0x1402A3C34 (MiInsertPrivateVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402A3DE4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiReferenceVad @ 0x1402A46E0 (MiReferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A5728 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiSelectUserAddress @ 0x14062D660 (MiSelectUserAddress.c)
 *     MiGetUserReservationHighestAddress @ 0x1406326DC (MiGetUserReservationHighestAddress.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140633380 (MiAdvanceVadHint.c)
 *     MiIsVaRangeAvailable @ 0x140636FD8 (MiIsVaRangeAvailable.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateEnclaveVad(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // r15
  BOOL v9; // r12d
  struct _KPROCESS *Process; // r14
  unsigned __int64 v11; // rdi
  _DWORD *Pool; // rax
  __int64 v13; // rbx
  ULONG_PTR v15; // rax
  PVOID v16; // rax
  int inserted; // edi
  void *v18; // rcx
  int v19; // eax
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbp
  __int64 v24[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+20h]

  v26 = a4;
  v25 = 0LL;
  v24[0] = 0LL;
  v5 = a3;
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned int)(a1 - 16) <= 1;
  Process = CurrentThread->ApcState.Process;
  if ( a2 >= 0xFFFFFFFFFFFFF000uLL || a2 == 0 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 16) > 1 )
  {
    v11 = a2;
    if ( ((a2 - 1) & a2) != 0 )
      v11 = a2 & ~(a2 - 1);
    if ( v11 < 0x10000 )
      v11 = 0x10000LL;
    if ( v11 >= 0x7FFFFFFF0000LL )
      return 3221225485LL;
  }
  else
  {
    v11 = 0x200000LL;
  }
  if ( a2 >= 0x7FFFFFFF0000LL
    || a3 && (a3 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - a3 < a2 || ((v11 - 1) & a3) != 0 || a4) )
  {
    return 3221225485LL;
  }
  Pool = MiAllocatePool(64, 0x88uLL, 0x45646156u);
  v13 = (__int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( !v9 )
  {
    Pool[16] |= 1u;
    v15 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
    *(_QWORD *)(v13 + 80) = v15;
    if ( !v15 )
    {
      ExFreePoolWithTag((PVOID)v13, 0);
      return 3221225626LL;
    }
    if ( a1 == 2 )
    {
      *(_DWORD *)(v13 + 72) |= 1u;
      v16 = MiAllocatePool(64, 0x1000uLL, 0x6E45694Du);
      *(_QWORD *)(v13 + 88) = v16;
      if ( !v16 )
      {
        inserted = -1073741670;
LABEL_23:
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
        if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
        {
          v18 = *(void **)(v13 + 88);
          if ( v18 )
            ExFreePoolWithTag(v18, 0);
          MiReleasePtes((__int64)&qword_140C4EE80, *(_QWORD **)(v13 + 80), 1u);
        }
        ExFreePoolWithTag((PVOID)v13, 0);
        return (unsigned int)inserted;
      }
    }
    *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 48) & 0xFFFFFF8F | 0x30;
    *(_QWORD *)(v13 + 120) = 0LL;
  }
  v19 = *(_DWORD *)(v13 + 48);
  *(_QWORD *)(v13 + 40) = 0LL;
  *(_QWORD *)(v13 + 16) = -2LL;
  *(_DWORD *)(v13 + 48) = v19 & 0xFDEFF07F | 0x2100200;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
  UserReservationHighestAddress = MiGetUserReservationHighestAddress((__int64)Process, v26);
  if ( v5 )
  {
    v21 = (v5 + a2 - 1) | 0xFFF;
    if ( !MiIsVaRangeAvailable((__int64)Process, v5, v21 - v5 + 1, 0LL, UserReservationHighestAddress) )
    {
      inserted = -1073741800;
      goto LABEL_23;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(0, 0LL, UserReservationHighestAddress, a2, v11, 0LL, 6, 0, v24, &v25);
    if ( inserted < 0 )
      goto LABEL_23;
    v5 = v25;
    v21 = v25 + a2 - 1;
  }
  v22 = v5 >> 12;
  v23 = v21 >> 12;
  *(_BYTE *)(v13 + 32) = BYTE4(v22);
  *(_BYTE *)(v13 + 33) = BYTE4(v23);
  *(_DWORD *)(v13 + 24) = v22;
  *(_DWORD *)(v13 + 28) = v23;
  inserted = MiInsertVadCharges(v13, Process);
  if ( inserted < 0 )
    goto LABEL_23;
  MiLockVad((__int64)CurrentThread, v13);
  MiInsertPrivateVad(v13, (__int64)Process);
  if ( v24[0] )
    MiAdvanceVadHint(v22, v23, (_QWORD *)v24[0]);
  MiReferenceVad(v13);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Process);
  *a5 = v13;
  return 0LL;
}
