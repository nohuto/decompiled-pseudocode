/*
 * XREFs of MiResizeAweBitMap @ 0x14097D688
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     RtlCopyBitMapEx @ 0x140230180 (RtlCopyBitMapEx.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14030B820 (LOCK_ADDRESS_SPACE.c)
 *     MiLockAwePagesExclusive @ 0x1405AB970 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x1405AC8D4 (MiUnlockAwePagesExclusive.c)
 *     MiCreateAweInfoBitMap @ 0x14097CAE8 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x14097CF84 (MiDeleteAweBitMap.c)
 */

__int64 __fastcall MiResizeAweBitMap(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 result; // rax
  __int128 *v10; // r14
  __int64 *v11; // rdx
  __int128 v12; // [rsp+28h] [rbp-29h] BYREF
  __int128 v13; // [rsp+38h] [rbp-19h] BYREF
  __m256i v14; // [rsp+48h] [rbp-9h] BYREF
  __int128 v15; // [rsp+68h] [rbp+17h]
  __int128 v16; // [rsp+78h] [rbp+27h]
  __int128 v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+98h] [rbp+47h]

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = 0LL;
  v4 = *(_OWORD *)(a1 + 16);
  v13 = *(_OWORD *)a1;
  v5 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)v14.m256i_i8 = v4;
  v6 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)&v14.m256i_u64[2] = v5;
  v7 = *(_OWORD *)(a1 + 64);
  v15 = v6;
  v8 = *(_OWORD *)(a1 + 80);
  v16 = v7;
  v18 = *(_QWORD *)(a1 + 96);
  v17 = v8;
  result = MiCreateAweInfoBitMap((__int64)&v13);
  if ( (int)result >= 0 )
  {
    v10 = (__int128 *)(a1 + 24);
    if ( Process )
    {
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
        MiDeleteAweBitMap((struct _KPROCESS *)Process, &v14.m256i_i64[1]);
        return 3221225738LL;
      }
    }
    MiLockAwePagesExclusive(a1, (__int64)CurrentThread);
    if ( v14.m256i_i64[1] > *(_QWORD *)v10 )
    {
      RtlCopyBitMapEx((unsigned __int64 *)(a1 + 24), &v14.m256i_i64[1], 0LL);
      v12 = *v10;
      *v10 = *(_OWORD *)&v14.m256i_u64[1];
      MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
      if ( Process )
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      if ( !*((_QWORD *)&v12 + 1) )
        return 0LL;
      v11 = (__int64 *)&v12;
    }
    else
    {
      MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
      if ( Process )
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      v11 = &v14.m256i_i64[1];
    }
    MiDeleteAweBitMap((struct _KPROCESS *)Process, v11);
    return 0LL;
  }
  return result;
}
