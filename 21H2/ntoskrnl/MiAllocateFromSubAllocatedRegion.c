/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x140640FA0
 * Callers:
 *     MiCreatePebOrTeb @ 0x140640F24 (MiCreatePebOrTeb.c)
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x140267370 (RtlFindClearBitsAndSetEx.c)
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14027C900 (MiReferenceVad.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031FFDC (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1403214D8 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403216DC (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405FE4DC (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x140700864 (MiFreeToSubAllocatedRegion.c)
 */

__int64 MiAllocateFromSubAllocatedRegion(int a1, __int64 a2, unsigned __int64 *a3, ...)
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
  char *v17; // rcx
  int NewSubAllocatedRegion; // edi
  __int64 *v20; // rcx
  __int64 **v21; // rax
  int v22; // [rsp+50h] [rbp-68h] BYREF
  __int64 v23; // [rsp+58h] [rbp-60h]
  __int64 v24; // [rsp+60h] [rbp-58h]
  __int64 v28; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  va_list va1; // [rsp+E0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, _QWORD);
  v3 = a1;
  v4 = (unsigned __int64)(a2 + 4095) >> 12;
  v22 = 0;
  v5 = 0LL;
  LOWORD(v28) = 0;
  v6 = 0LL;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = *(_QWORD *)(Process + 1680) + 48LL;
  --CurrentThread->SpecialApcDisable;
  v24 = v9;
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
  v23 = v11;
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
          v20 = (__int64 *)*v12;
          if ( *(__int64 **)(*v12 + 8) != v12 || (v21 = (__int64 **)v12[1], *v21 != v12) )
            __fastfail(3u);
          *v21 = v20;
          v20[1] = (__int64)v21;
          *v12 = 0LL;
        }
        v5 = v12[2];
        v11 = v23;
        v6 = (v14 << 12)
           + ((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12);
        break;
      }
      v12 = (__int64 *)*v12;
      v11 = v23;
    }
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    if ( !v5 )
    {
      NewSubAllocatedRegion = MiAllocateNewSubAllocatedRegion(a1, v4);
      if ( NewSubAllocatedRegion >= 0 )
      {
        v9 = v24;
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
                              &v22,
                              (__int64 *)va);
    if ( NewSubAllocatedRegion < 0 )
    {
      MiFreeToSubAllocatedRegion((PVOID)v5);
    }
    else
    {
      MiUnlockAndDereferenceVad((char *)v5);
      *a3 = v6;
    }
    return (unsigned int)NewSubAllocatedRegion;
  }
  MiUnlockAndDereferenceVad(v17);
  return 3221225738LL;
}
