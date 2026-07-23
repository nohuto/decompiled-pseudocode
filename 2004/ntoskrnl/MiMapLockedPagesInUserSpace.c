/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x1407588D0
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiIsPfn @ 0x140206280 (MiIsPfn.c)
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     LOCK_ADDRESS_SPACE @ 0x14024892C (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140249DF8 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14024ADB4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiReferenceVad @ 0x14024B6B0 (MiReferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14024C6F8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiLegitimatePageForDriversToMap @ 0x140318394 (MiLegitimatePageForDriversToMap.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     MiReferenceIoPages @ 0x140336B14 (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x140336F58 (MiSanitizePage.c)
 *     MiDereferenceIoPages @ 0x140337818 (MiDereferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140337F84 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDoubleLockMdlPage @ 0x14037B1EC (MiDoubleLockMdlPage.c)
 *     MiDoubleUnlockMdlPage @ 0x14037D5D8 (MiDoubleUnlockMdlPage.c)
 *     MiSelectUserAddress @ 0x1405F8620 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1405FCED0 (MiAddSecureEntry.c)
 *     MiGetUserReservationHighestAddress @ 0x1405FD69C (MiGetUserReservationHighestAddress.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x1405FE340 (MiAdvanceVadHint.c)
 *     MiIsVaRangeAvailable @ 0x140601F98 (MiIsVaRangeAvailable.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiMapLockedPagesInUserSpace(
        __int64 a1,
        __int16 a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  unsigned __int64 *v7; // r15
  unsigned __int64 v8; // r14
  _QWORD *Pool; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r12
  __int64 Process; // rsi
  unsigned __int64 UserReservationHighestAddress; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  int v16; // eax
  unsigned __int64 v17; // r10
  NTSTATUS inserted; // esi
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rcx
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  __int64 v27; // rbp
  int v28; // r9d
  __int64 v30; // rax
  _DWORD *v31; // r8
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  struct _KPROCESS *v38; // [rsp+50h] [rbp-78h]
  unsigned __int64 v39; // [rsp+58h] [rbp-70h]
  _QWORD *v40; // [rsp+60h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-60h]
  unsigned __int64 v42; // [rsp+70h] [rbp-58h]
  unsigned __int64 v43; // [rsp+78h] [rbp-50h]
  unsigned __int64 v44; // [rsp+80h] [rbp-48h]
  __int64 v45; // [rsp+88h] [rbp-40h]
  unsigned __int64 v47; // [rsp+E8h] [rbp+20h] BYREF

  v47 = a4;
  if ( (a4 & 0xFFF) != 0 )
    RtlRaiseStatus(-1073741503);
  v7 = (unsigned __int64 *)(a1 + 48);
  v39 = a1 + 48;
  v8 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  Pool = MiAllocatePool(64, 0x40uLL, 0x6C646156u);
  v45 = (__int64)Pool;
  v10 = (__int64)Pool;
  if ( !Pool )
    RtlRaiseStatus(-1073741670);
  Pool[5] = 0LL;
  v11 = 0LL;
  Pool[2] = -2LL;
  a6 = ((a5 >> 31) & 0xFFFFFFFD) + 4;
  *((_DWORD *)Pool + 12) = Pool[6] & 0xFFFFF01F | (((((a5 >> 31) & 0xFD) + 4) & 0x1F) << 7) | 0x8100010;
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v38 = (struct _KPROCESS *)Process;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_22;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  v15 = v47;
  if ( !v47 )
  {
    v16 = MiSelectUserAddress(
            0,
            v14,
            UserReservationHighestAddress,
            v8 << 12,
            0x10000LL,
            0LL,
            a6,
            0,
            (__int64 *)&v40,
            &v47);
    v17 = 0LL;
    inserted = v16;
    if ( v16 >= 0 )
    {
      v15 = v47;
      goto LABEL_7;
    }
LABEL_22:
    v27 = (__int64)v38;
    goto LABEL_29;
  }
  if ( !MiIsVaRangeAvailable(Process, v47, v8 << 12, 0LL, UserReservationHighestAddress) )
  {
    inserted = -1073741800;
    goto LABEL_22;
  }
LABEL_7:
  v47 = v17;
  v19 = v17;
  v43 = v15 >> 12;
  *(_DWORD *)(v10 + 24) = v15 >> 12;
  *(_BYTE *)(v10 + 32) = v15 >> 44;
  v44 = v15 + (v8 << 12) - 1;
  v20 = v44 >> 12;
  v42 = v44 >> 12;
  *(_DWORD *)(v10 + 28) = v44 >> 12;
  *(_BYTE *)(v10 + 33) = BYTE4(v20);
  if ( v8 )
  {
    v21 = v7;
    do
    {
      v22 = *v21;
      if ( (unsigned int)MiIsPfn(*v21) )
      {
        v23 = 48 * v22 - 0x58000000000LL;
        inserted = MiLegitimatePageForDriversToMap(v23);
        if ( inserted < 0 || !(unsigned int)MiDoubleLockMdlPage(v23, v24, v25, v26) )
          goto LABEL_22;
        v19 = v47;
      }
      else
      {
        v30 = MiSanitizePage(v22);
        inserted = MiReferenceIoPages(1u, v30, 1LL, a3, v31, v31);
        if ( inserted < 0 )
          goto LABEL_22;
      }
      ++v19;
      v11 = v39;
      v47 = v19;
      v21 = (unsigned __int64 *)(v39 + 8);
      v39 += 8LL;
    }
    while ( v19 < v8 );
  }
  v27 = (__int64)v38;
  inserted = MiInsertVadCharges(v10, v38);
  if ( inserted < 0 )
  {
LABEL_29:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v27);
    if ( v11 )
    {
      v32 = 1LL;
      v33 = (v11 - (unsigned __int64)v7 + 8) >> 3;
      if ( (unsigned __int64)v7 > v11 )
        v33 = 0LL;
      if ( v33 )
      {
        do
        {
          v34 = *v7;
          if ( (unsigned int)MiIsPfn(*v7) )
            MiDoubleUnlockMdlPage(48 * v34 - 0x58000000000LL, v35, v36, v37);
          else
            MiDereferenceIoPages(1, v34, 1uLL);
          ++v7;
          ++v32;
        }
        while ( v32 <= v33 );
        v10 = v45;
      }
    }
    ExFreePoolWithTag((PVOID)v10, 0);
    RtlRaiseStatus(inserted);
  }
  if ( v40 )
    MiAdvanceVadHint(v43, v42, v40);
  MiLockVad((__int64)CurrentThread, v10);
  MiMapLockedPagesInUserSpaceHelper(v15, (__int64)v7, 0LL, (_DWORD *)a3, v8, v10, a5);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v38);
  MiReferenceVad(v10);
  v28 = 2;
  if ( a6 != 1 )
    v28 = 4;
  if ( !MiAddSecureEntry(v10, v15, v44, v28, 0) )
  {
    MiDeleteVad((_DWORD *)v10, 0LL, 0);
    RtlRaiseStatus(-1073741670);
  }
  MiUnlockAndDereferenceVad((PVOID)v10);
  return v15 + *(unsigned int *)(a1 + 44);
}
