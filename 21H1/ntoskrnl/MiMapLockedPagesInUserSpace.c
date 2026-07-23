/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x140756C50
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MiIsPfn @ 0x14025F1A0 (MiIsPfn.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     LOCK_ADDRESS_SPACE @ 0x1402A195C (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1402A2E28 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402A3DE4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiReferenceVad @ 0x1402A46E0 (MiReferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A5728 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     MiReferenceIoPages @ 0x1402F9AE4 (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x1402F9F28 (MiSanitizePage.c)
 *     MiDereferenceIoPages @ 0x1402FA7E8 (MiDereferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiLegitimatePageForDriversToMap @ 0x1403476D4 (MiLegitimatePageForDriversToMap.c)
 *     MiDoubleLockMdlPage @ 0x14037A46C (MiDoubleLockMdlPage.c)
 *     MiDoubleUnlockMdlPage @ 0x14037CB18 (MiDoubleUnlockMdlPage.c)
 *     MiSelectUserAddress @ 0x14062D660 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x140631F10 (MiAddSecureEntry.c)
 *     MiGetUserReservationHighestAddress @ 0x1406326DC (MiGetUserReservationHighestAddress.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140633380 (MiAdvanceVadHint.c)
 *     MiIsVaRangeAvailable @ 0x140636FD8 (MiIsVaRangeAvailable.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  __int64 v28; // rbp
  int v29; // r9d
  __int64 v31; // rax
  _DWORD *v32; // r8
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rbx
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r8
  _DWORD *v38; // r9
  struct _KPROCESS *v39; // [rsp+50h] [rbp-78h]
  unsigned __int64 v40; // [rsp+58h] [rbp-70h]
  _QWORD *v41; // [rsp+60h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-60h]
  unsigned __int64 v43; // [rsp+70h] [rbp-58h]
  unsigned __int64 v44; // [rsp+78h] [rbp-50h]
  unsigned __int64 v45; // [rsp+80h] [rbp-48h]
  __int64 v46; // [rsp+88h] [rbp-40h]
  unsigned __int64 v48; // [rsp+E8h] [rbp+20h] BYREF

  v48 = a4;
  if ( (a4 & 0xFFF) != 0 )
    RtlRaiseStatus(-1073741503);
  v7 = (unsigned __int64 *)(a1 + 48);
  v40 = a1 + 48;
  v8 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  Pool = MiAllocatePool(64, 0x40uLL, 0x6C646156u);
  v46 = (__int64)Pool;
  v10 = (__int64)Pool;
  if ( !Pool )
    RtlRaiseStatus(-1073741670);
  Pool[5] = 0LL;
  v11 = 0LL;
  Pool[2] = -2LL;
  a6 = ((a5 >> 31) & 0xFFFFFFFD) + 4;
  *((_DWORD *)Pool + 12) = Pool[6] & 0xFFFFF01F | (((((a5 >> 31) & 0xFD) + 4) & 0x1F) << 7) | 0x8100010;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v39 = (struct _KPROCESS *)Process;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_22;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  v15 = v48;
  if ( !v48 )
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
            (__int64 *)&v41,
            &v48);
    v17 = 0LL;
    inserted = v16;
    if ( v16 >= 0 )
    {
      v15 = v48;
      goto LABEL_7;
    }
LABEL_22:
    v28 = (__int64)v39;
    goto LABEL_29;
  }
  if ( !MiIsVaRangeAvailable(Process, v48, v8 << 12, 0LL, UserReservationHighestAddress) )
  {
    inserted = -1073741800;
    goto LABEL_22;
  }
LABEL_7:
  v48 = v17;
  v19 = v17;
  v44 = v15 >> 12;
  *(_DWORD *)(v10 + 24) = v15 >> 12;
  *(_BYTE *)(v10 + 32) = v15 >> 44;
  v45 = v15 + (v8 << 12) - 1;
  v20 = v45 >> 12;
  v43 = v45 >> 12;
  *(_DWORD *)(v10 + 28) = v45 >> 12;
  *(_BYTE *)(v10 + 33) = BYTE4(v20);
  if ( v8 )
  {
    v21 = v7;
    do
    {
      v22 = *v21;
      if ( (unsigned int)MiIsPfn(*v21) )
      {
        v24 = 48 * v22 - 0x58000000000LL;
        inserted = MiLegitimatePageForDriversToMap(v24, v23, 0LL);
        if ( inserted < 0 || !(unsigned int)MiDoubleLockMdlPage(v24, v25, v26, v27) )
          goto LABEL_22;
        v19 = v48;
      }
      else
      {
        v31 = MiSanitizePage(v22);
        inserted = MiReferenceIoPages(1u, v31, 1LL, a3, v32, v32);
        if ( inserted < 0 )
          goto LABEL_22;
      }
      ++v19;
      v11 = v40;
      v48 = v19;
      v21 = (unsigned __int64 *)(v40 + 8);
      v40 += 8LL;
    }
    while ( v19 < v8 );
  }
  v28 = (__int64)v39;
  inserted = MiInsertVadCharges(v10, v39);
  if ( inserted < 0 )
  {
LABEL_29:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v28);
    if ( v11 )
    {
      v33 = 1LL;
      v34 = (v11 - (unsigned __int64)v7 + 8) >> 3;
      if ( (unsigned __int64)v7 > v11 )
        v34 = 0LL;
      if ( v34 )
      {
        do
        {
          v35 = *v7;
          if ( (unsigned int)MiIsPfn(*v7) )
            MiDoubleUnlockMdlPage(48 * v35 - 0x58000000000LL, v36, v37, v38);
          else
            MiDereferenceIoPages(1, v35, 1uLL);
          ++v7;
          ++v33;
        }
        while ( v33 <= v34 );
        v10 = v46;
      }
    }
    ExFreePoolWithTag((PVOID)v10, 0);
    RtlRaiseStatus(inserted);
  }
  if ( v41 )
    MiAdvanceVadHint(v44, v43, v41);
  MiLockVad((__int64)CurrentThread, v10);
  MiMapLockedPagesInUserSpaceHelper(v15, (__int64)v7, 0LL, (_DWORD *)a3, v8, v10, a5);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v39);
  MiReferenceVad(v10);
  v29 = 2;
  if ( a6 != 1 )
    v29 = 4;
  if ( !MiAddSecureEntry(v10, v15, v45, v29, 0) )
  {
    MiDeleteVad((_DWORD *)v10, 0LL, 0);
    RtlRaiseStatus(-1073741670);
  }
  MiUnlockAndDereferenceVad((char *)v10);
  return v15 + *(unsigned int *)(a1 + 44);
}
