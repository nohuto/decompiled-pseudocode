/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x140686200
 * Callers:
 *     MiCreatePebOrTeb @ 0x140686184 (MiCreatePebOrTeb.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiVadDeleted @ 0x14022C150 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14022C1B0 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14022C3E0 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x14022E378 (MiLockVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14022E3A8 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14022E5AC (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402304A4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     RtlFindClearBitsAndSetEx @ 0x1402D7390 (RtlFindClearBitsAndSetEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x140658E00 (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406C37D0 (MiAllocateNewSubAllocatedRegion.c)
 */

__int64 MiAllocateFromSubAllocatedRegion(unsigned int a1, __int64 a2, unsigned __int64 *a3, ...)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r15
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 *v12; // rdi
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // eax
  void *v17; // rcx
  __int64 v18; // rdx
  int NewSubAllocatedRegion; // edi
  __int64 *v21; // rcx
  __int64 **v22; // rax
  int v23; // [rsp+50h] [rbp-68h] BYREF
  __int64 v24; // [rsp+58h] [rbp-60h]
  __int64 v25; // [rsp+60h] [rbp-58h]
  __int64 v29; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  va_list va1; // [rsp+E0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  v3 = (int)a1;
  v4 = (unsigned __int64)(a2 + 4095) >> 12;
  v23 = 0;
  v5 = 0LL;
  LOWORD(v29) = 0;
  v6 = 0LL;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = *(_QWORD *)(Process + 1680) + 48LL;
  --CurrentThread->SpecialApcDisable;
  v25 = v9;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    NewSubAllocatedRegion = -1073741558;
LABEL_16:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)NewSubAllocatedRegion;
  }
  v10 = 2 * (v3 + 17);
  v11 = v9 + 16 * (v3 + 17);
  v24 = v11;
  while ( 2 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    v12 = *(__int64 **)(v9 + 8 * v10);
    while ( v12 != (__int64 *)v11 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSetEx(
                          (unsigned __int64 *)v12 - 2,
                          v4,
                          (unsigned __int64)*((unsigned int *)v12 + 8) >> 2);
      v14 = ClearBitsAndSet;
      if ( ClearBitsAndSet != -1LL )
      {
        *((_DWORD *)v12 + 6) += v4;
        v15 = v12[4] & 3 | (4 * (v4 + ClearBitsAndSet));
        v16 = *((_DWORD *)v12 + 6);
        *((_DWORD *)v12 + 8) = v15;
        if ( v16 >= *((_DWORD *)v12 + 7) )
        {
          v21 = (__int64 *)*v12;
          if ( *(__int64 **)(*v12 + 8) != v12 || (v22 = (__int64 **)v12[1], *v22 != v12) )
            __fastfail(3u);
          *v22 = v21;
          v21[1] = (__int64)v22;
          *v12 = 0LL;
        }
        v5 = v12[2];
        v11 = v24;
        v6 = (v14 << 12)
           + ((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12);
        break;
      }
      v12 = (__int64 *)*v12;
      v11 = v24;
    }
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    if ( !v5 )
    {
      NewSubAllocatedRegion = MiAllocateNewSubAllocatedRegion(a1, v4);
      if ( NewSubAllocatedRegion >= 0 )
      {
        v9 = v25;
        continue;
      }
      goto LABEL_16;
    }
    break;
  }
  MiReferenceVad(v5);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  MiLockVad((__int64)CurrentThread, v5);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !(unsigned int)MiVadDeleted(v5) )
  {
    NewSubAllocatedRegion = MiCommitExistingVad(
                              (ULONG_PTR)v17,
                              v6,
                              a2,
                              (*(_DWORD *)(v5 + 48) >> 7) & 0x1F,
                              0,
                              0LL,
                              0,
                              0LL,
                              &v23,
                              (__int64 *)va);
    if ( NewSubAllocatedRegion < 0 )
    {
      MiFreeToSubAllocatedRegion((_QWORD *)v5, v18, v6, a2);
    }
    else
    {
      MiUnlockAndDereferenceVad((PVOID)v5);
      *a3 = v6;
    }
    return (unsigned int)NewSubAllocatedRegion;
  }
  MiUnlockAndDereferenceVad(v17);
  return 3221225738LL;
}
