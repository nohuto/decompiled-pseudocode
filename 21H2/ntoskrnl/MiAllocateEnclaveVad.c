/*
 * XREFs of MiAllocateEnclaveVad @ 0x1408D1FB8
 * Callers:
 *     MiCreateEnclave @ 0x1408D293C (MiCreateEnclave.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14027C398 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiReferenceVad @ 0x14027C900 (MiReferenceVad.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031FFDC (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     MiInsertPrivateVad @ 0x140321AD4 (MiInsertPrivateVad.c)
 *     MiIsVaRangeAvailable @ 0x140687848 (MiIsVaRangeAvailable.c)
 *     MiSelectUserAddress @ 0x1406EA100 (MiSelectUserAddress.c)
 *     MiGetUserReservationHighestAddress @ 0x14070349C (MiGetUserReservationHighestAddress.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140704340 (MiAdvanceVadHint.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateEnclaveVad(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // r15
  BOOL v9; // r12d
  struct _KPROCESS *Process; // r14
  unsigned __int64 v11; // rdi
  _DWORD *Pool; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rbx
  ULONG_PTR v17; // rax
  PVOID v18; // rax
  int inserted; // edi
  void *v20; // rcx
  int v21; // eax
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rbp
  __int64 v26[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+20h]

  v28 = a4;
  v27 = 0LL;
  v26[0] = 0LL;
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
  v15 = (__int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( !v9 )
  {
    Pool[16] |= 1u;
    v17 = MiReservePtes((__int64)&qword_140C4EF80, 1u, v13, v14);
    *(_QWORD *)(v15 + 80) = v17;
    if ( !v17 )
    {
      ExFreePoolWithTag((PVOID)v15, 0);
      return 3221225626LL;
    }
    if ( a1 == 2 )
    {
      *(_DWORD *)(v15 + 72) |= 1u;
      v18 = MiAllocatePool(64, 0x1000uLL, 0x6E45694Du);
      *(_QWORD *)(v15 + 88) = v18;
      if ( !v18 )
      {
        inserted = -1073741670;
LABEL_23:
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
        if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
        {
          v20 = *(void **)(v15 + 88);
          if ( v20 )
            ExFreePoolWithTag(v20, 0);
          MiReleasePtes((__int64)&qword_140C4EF80, *(_QWORD **)(v15 + 80), 1u);
        }
        ExFreePoolWithTag((PVOID)v15, 0);
        return (unsigned int)inserted;
      }
    }
    *(_DWORD *)(v15 + 48) = *(_DWORD *)(v15 + 48) & 0xFFFFFF8F | 0x30;
    *(_QWORD *)(v15 + 120) = 0LL;
  }
  v21 = *(_DWORD *)(v15 + 48);
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 16) = -2LL;
  *(_DWORD *)(v15 + 48) = v21 & 0xFDEFF07F | 0x2100200;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
  UserReservationHighestAddress = MiGetUserReservationHighestAddress((__int64)Process, v28);
  if ( v5 )
  {
    v23 = (v5 + a2 - 1) | 0xFFF;
    if ( !MiIsVaRangeAvailable((__int64)Process, v5, v23 - v5 + 1, 0LL, UserReservationHighestAddress) )
    {
      inserted = -1073741800;
      goto LABEL_23;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(0, 0LL, UserReservationHighestAddress, a2, v11, 0LL, 6, 0, v26, &v27);
    if ( inserted < 0 )
      goto LABEL_23;
    v5 = v27;
    v23 = v27 + a2 - 1;
  }
  v24 = v5 >> 12;
  v25 = v23 >> 12;
  *(_BYTE *)(v15 + 32) = BYTE4(v24);
  *(_BYTE *)(v15 + 33) = BYTE4(v25);
  *(_DWORD *)(v15 + 24) = v24;
  *(_DWORD *)(v15 + 28) = v25;
  inserted = MiInsertVadCharges(v15, Process);
  if ( inserted < 0 )
    goto LABEL_23;
  MiLockVad((__int64)CurrentThread, v15);
  MiInsertPrivateVad(v15, (__int64)Process);
  if ( v26[0] )
    MiAdvanceVadHint(v24, v25, (_QWORD *)v26[0]);
  MiReferenceVad(v15);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Process);
  *a5 = v15;
  return 0LL;
}
