/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x140693498
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140213398 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDoubleLockMdlPage @ 0x14021372C (MiDoubleLockMdlPage.c)
 *     MiLegitimatePageForDriversToMap @ 0x14021378C (MiLegitimatePageForDriversToMap.c)
 *     MiSanitizePage @ 0x140215598 (MiSanitizePage.c)
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiDoubleUnlockMdlPage @ 0x14025C03C (MiDoubleUnlockMdlPage.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiIsPfn @ 0x1402B2E00 (MiIsPfn.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MiUpdateVadStartVpn @ 0x14030B420 (MiUpdateVadStartVpn.c)
 *     MiLockVad @ 0x14030B7F0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14030B820 (LOCK_ADDRESS_SPACE.c)
 *     MiReferenceVad @ 0x14030EB64 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiIsVaRangeAvailable @ 0x1406F8804 (MiIsVaRangeAvailable.c)
 *     MiGetUserReservationHighestAddress @ 0x1406FC9C4 (MiGetUserReservationHighestAddress.c)
 *     MiAdvanceVadHint @ 0x1406FCFF0 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x1407B83C0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1407B88C0 (MiInsertVadCharges.c)
 *     MiAddSecureEntry @ 0x1407B9190 (MiAddSecureEntry.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 MiMapLockedPagesInUserSpace(__int64 a1, __int16 a2, int a3, ...)
{
  unsigned __int64 *v4; // r14
  unsigned __int64 v5; // rsi
  _QWORD *Pool; // rax
  __int64 v7; // rbx
  int v8; // edi
  unsigned int v9; // edi
  unsigned __int64 v10; // r15
  __int64 Process; // r13
  __int64 UserReservationHighestAddress; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r12
  int inserted; // esi
  unsigned __int64 v17; // r12
  int v18; // eax
  char v19; // rax^4
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // rsi
  int v22; // r9d
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // [rsp+28h] [rbp-A0h]
  int v27; // [rsp+38h] [rbp-90h]
  unsigned __int64 v28; // [rsp+50h] [rbp-78h]
  __int64 v29; // [rsp+50h] [rbp-78h]
  unsigned __int64 v30; // [rsp+58h] [rbp-70h]
  __int64 v31; // [rsp+60h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-60h]
  unsigned __int64 v33; // [rsp+70h] [rbp-58h]
  unsigned __int64 v34; // [rsp+78h] [rbp-50h]
  unsigned __int64 v35; // [rsp+80h] [rbp-48h]
  unsigned __int64 v38; // [rsp+E8h] [rbp+20h] BYREF
  va_list va; // [rsp+E8h] [rbp+20h]
  __int64 v40; // [rsp+F0h] [rbp+28h]
  va_list va1; // [rsp+F8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v38 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  if ( (v38 & 0xFFF) != 0 )
    RtlRaiseStatus(-1073741503);
  v4 = (unsigned __int64 *)(a1 + 48);
  v30 = a1 + 48;
  v5 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v28 = v5;
  Pool = MiAllocatePool(64, 0x40uLL, 0x6C646156u);
  v7 = (__int64)Pool;
  if ( !Pool )
    RtlRaiseStatus(-1073741670);
  v8 = v40;
  Pool[5] = 0LL;
  Pool[2] = -2LL;
  v9 = ((v8 >> 31) & 0xFFFFFFFD) + 4;
  if ( a3 )
  {
    if ( a3 == 2 )
      v9 |= 0x18u;
  }
  else
  {
    v9 |= 8u;
  }
  v10 = 0LL;
  *((_DWORD *)Pool + 12) = Pool[6] & 0xFFFFF01F | ((v9 & 0x1F) << 7) | 0x10200010;
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_31;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  v14 = v38;
  v15 = v5 << 12;
  if ( v38 )
  {
    if ( !(unsigned int)MiIsVaRangeAvailable(Process, v38, (_DWORD)v5 << 12, 0, UserReservationHighestAddress) )
    {
      inserted = -1073741800;
      goto LABEL_31;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(
                 0,
                 v13,
                 UserReservationHighestAddress,
                 (_DWORD)v5 << 12,
                 0x10000LL,
                 v13 & v26,
                 v9,
                 (unsigned int)v13 & v27,
                 (__int64)&v31,
                 (__int64)va);
    if ( inserted < 0 )
      goto LABEL_31;
    v14 = v38;
    v5 = v28;
  }
  v35 = v14 + v15 - 1;
  v34 = v14 >> 12;
  v33 = v35 >> 12;
  MiUpdateVadStartVpn(v7, v14 >> 12);
  v38 = 0LL;
  v17 = v28;
  *(_DWORD *)(v7 + 28) = v18;
  *(_BYTE *)(v7 + 33) = v19;
  if ( v5 )
  {
    v20 = v4;
    do
    {
      v21 = *v20;
      if ( (unsigned int)MiIsPfn(*v20) )
      {
        v29 = 48 * v21 - 0x220000000000LL;
        inserted = MiLegitimatePageForDriversToMap(v29);
        if ( inserted < 0 || !(unsigned int)MiDoubleLockMdlPage(v29) )
          goto LABEL_31;
      }
      else
      {
        v24 = MiSanitizePage(v21);
        inserted = MiReferenceIoPages(1, v24, 1LL, a3, 0LL, 0LL);
        if ( inserted < 0 )
          goto LABEL_31;
      }
      v10 = v30;
      v20 = (unsigned __int64 *)(v30 + 8);
      ++v38;
      v30 += 8LL;
    }
    while ( v38 < v17 );
  }
  inserted = MiInsertVadCharges(v7, Process);
  if ( inserted < 0 )
  {
LABEL_31:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    if ( v10 )
    {
      while ( (unsigned __int64)v4 <= v10 )
      {
        v25 = *v4;
        if ( (unsigned int)MiIsPfn(*v4) )
          MiDoubleUnlockMdlPage(48 * v25 - 0x220000000000LL);
        else
          MiDereferenceIoPages(1, v25, 1uLL);
        ++v4;
      }
    }
    ExFreePoolWithTag((PVOID)v7, 0);
    RtlRaiseStatus(inserted);
  }
  if ( v31 )
    MiAdvanceVadHint(v34, v33);
  MiLockVad((__int64)CurrentThread, v7);
  MiMapLockedPagesInUserSpaceHelper(v14, (__int64)v4, 0LL, a3, v17, v7, v40);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  MiReferenceVad(v7);
  v22 = 2;
  if ( v9 != 1 )
    v22 = 4;
  if ( !MiAddSecureEntry(v7, v14, v35, v22, 0) )
  {
    MiDeleteVad((PVOID)v7);
    RtlRaiseStatus(-1073741670);
  }
  MiUnlockAndDereferenceVad((char *)v7);
  return v14 + *(unsigned int *)(a1 + 44);
}
