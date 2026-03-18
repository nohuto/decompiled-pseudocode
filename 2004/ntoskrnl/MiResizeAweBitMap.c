/*
 * XREFs of MiResizeAweBitMap @ 0x1408D2EE4
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x14024892C (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14024ADB4 (UNLOCK_ADDRESS_SPACE.c)
 *     RtlCopyBitMapEx @ 0x140339E80 (RtlCopyBitMapEx.c)
 *     MiLockAwePagesExclusive @ 0x140547AE8 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x140548AD0 (MiUnlockAwePagesExclusive.c)
 *     MiCreateAweInfoBitMap @ 0x1408D238C (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x1408D27EC (MiDeleteAweBitMap.c)
 */

__int64 __fastcall MiResizeAweBitMap(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 *v9; // r14
  __int128 *v10; // rdx
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)a1 & 1) != 0 )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = 0LL;
  v4 = *(_OWORD *)(a1 + 16);
  v12 = *(_OWORD *)a1;
  v5 = *(_OWORD *)(a1 + 32);
  v13[0] = v4;
  v6 = *(_OWORD *)(a1 + 48);
  v13[1] = v5;
  v7 = *(_OWORD *)(a1 + 64);
  v13[2] = v6;
  v13[3] = v7;
  result = MiCreateAweInfoBitMap((__int64)&v12);
  if ( (int)result >= 0 )
  {
    v9 = (__int128 *)(a1 + 16);
    if ( Process )
    {
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
        MiDeleteAweBitMap((struct _KPROCESS *)Process, v13);
        return 3221225738LL;
      }
    }
    MiLockAwePagesExclusive(a1, (__int64)CurrentThread);
    if ( *(_QWORD *)&v13[0] > *(_QWORD *)v9 )
    {
      RtlCopyBitMapEx(a1 + 16, v13, 0LL);
      v11 = *v9;
      *v9 = v13[0];
      MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
      if ( Process )
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      if ( !*((_QWORD *)&v11 + 1) )
        return 0LL;
      v10 = &v11;
    }
    else
    {
      MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
      if ( Process )
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      v10 = v13;
    }
    MiDeleteAweBitMap((struct _KPROCESS *)Process, v10);
    return 0LL;
  }
  return result;
}
