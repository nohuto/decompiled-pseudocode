/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x140639628
 * Callers:
 *     MiCreatePebOrTeb @ 0x1406395AC (MiCreatePebOrTeb.c)
 * Callees:
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     LOCK_ADDRESS_SPACE @ 0x1402A195C (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1402A2E28 (MiLockVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402A2E58 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1402A305C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402A3DE4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiVadDeleted @ 0x1402A4680 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x1402A46E0 (MiReferenceVad.c)
 *     RtlFindClearBitsAndSetEx @ 0x1402A92F0 (RtlFindClearBitsAndSetEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x14063A73C (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406CEA44 (MiAllocateNewSubAllocatedRegion.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rcx
  int NewSubAllocatedRegion; // edi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rcx
  __int64 **v27; // rax
  int v28; // [rsp+50h] [rbp-68h] BYREF
  __int64 v29; // [rsp+58h] [rbp-60h]
  __int64 v30; // [rsp+60h] [rbp-58h]
  __int64 v34; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  va_list va1; // [rsp+E0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v34 = va_arg(va1, _QWORD);
  v3 = (int)a1;
  v4 = (unsigned __int64)(a2 + 4095) >> 12;
  v28 = 0;
  v5 = 0LL;
  LOWORD(v34) = 0;
  v6 = 0LL;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = *(_QWORD *)(Process + 1680) + 48LL;
  --CurrentThread->SpecialApcDisable;
  v30 = v9;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    NewSubAllocatedRegion = -1073741558;
LABEL_16:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v23, v24, v25);
    return (unsigned int)NewSubAllocatedRegion;
  }
  v10 = 2 * (v3 + 17);
  v11 = v9 + 16 * (v3 + 17);
  v29 = v11;
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
          v26 = (__int64 *)*v12;
          if ( *(__int64 **)(*v12 + 8) != v12 || (v27 = (__int64 **)v12[1], *v27 != v12) )
            __fastfail(3u);
          *v27 = v26;
          v26[1] = (__int64)v27;
          *v12 = 0LL;
        }
        v5 = v12[2];
        v11 = v29;
        v6 = (v14 << 12)
           + ((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12);
        break;
      }
      v12 = (__int64 *)*v12;
      v11 = v29;
    }
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    if ( !v5 )
    {
      NewSubAllocatedRegion = MiAllocateNewSubAllocatedRegion(a1, v4);
      if ( NewSubAllocatedRegion >= 0 )
      {
        v9 = v30;
        continue;
      }
      goto LABEL_16;
    }
    break;
  }
  MiReferenceVad(v5);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  MiLockVad((__int64)CurrentThread, v5);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v17, v18, v19);
  if ( !(unsigned int)MiVadDeleted(v5) )
  {
    NewSubAllocatedRegion = MiCommitExistingVad(
                              (ULONG_PTR)v20,
                              v6,
                              a2,
                              (*(_DWORD *)(v5 + 48) >> 7) & 0x1F,
                              0,
                              0LL,
                              0,
                              0LL,
                              &v28,
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
  MiUnlockAndDereferenceVad(v20);
  return 3221225738LL;
}
