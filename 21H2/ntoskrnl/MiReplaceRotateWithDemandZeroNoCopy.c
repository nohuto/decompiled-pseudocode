/*
 * XREFs of MiReplaceRotateWithDemandZeroNoCopy @ 0x140200D20
 * Callers:
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 * Callees:
 *     MiUnmapFrameBuffer @ 0x14020101C (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x140201144 (MiIsProbeActive.c)
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZeroNoCopy(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  int IsProbeActive; // r15d
  __int64 v6; // rbx
  _KPROCESS *Process; // r13
  ULONG_PTR v8; // rdi
  __int64 v9; // r14
  unsigned __int64 *v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v18; // rax
  char v19; // [rsp+28h] [rbp-E0h]
  unsigned int v20; // [rsp+2Ch] [rbp-DCh]
  __int64 v21; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v23; // [rsp+40h] [rbp-C8h]
  unsigned __int64 *v24; // [rsp+48h] [rbp-C0h]
  __int64 v25; // [rsp+50h] [rbp-B8h]
  _QWORD v26[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v27[44]; // [rsp+118h] [rbp+10h] BYREF

  v4 = 0LL;
  v22 = 0LL;
  memset(v26, 0, 0xB8uLL);
  IsProbeActive = 0;
  v20 = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v26[0]) = 0;
  v10 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v26[2] = 0LL;
  LODWORD(v26[1]) = 20;
  LODWORD(v26[0]) = 1;
  v26[3] = 0LL;
  v24 = v10;
  v19 = MiLockWorkingSetShared(v10);
  if ( v8 > v23 )
    return 0LL;
  v11 = 0LL;
  v25 = 0LL;
  while ( 1 )
  {
    do
    {
      if ( !v4 )
        goto LABEL_4;
      if ( (v8 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v10, v4);
LABEL_4:
        v4 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v10, v4, 0LL);
      }
      if ( !IsProbeActive )
        IsProbeActive = MiIsProbeActive(v8, 1LL, 3LL);
      if ( (unsigned int)MiUnmapFrameBuffer(v8) )
        IsProbeActive = 1;
      if ( v22 != -1 )
      {
        if ( (_DWORD)v6 && (v13 = 2LL * (unsigned int)(v6 - 1), v18 = v27[2 * (unsigned int)(v6 - 1) + 1], v18 == v22) )
        {
          v12 = v18 + 1;
        }
        else
        {
          v12 = v22 + 1;
          v13 = 2LL * (unsigned int)v6;
          v6 = (unsigned int)(v6 + 1);
          v27[v13] = v22;
        }
        v27[v13 + 1] = v12;
      }
      MiInsertTbFlushEntry(v26, (__int64)((v8 << 25) - v11) >> 16, 1LL, 0LL);
      ++v20;
      v8 += 8LL;
    }
    while ( (v8 & 0xFFF) != 0
         && v8 <= v23
         && (_DWORD)v6 != 22
         && ((v8 & 0x78) != 0
          || !(unsigned int)MiWorkingSetIsContended(v10)
          && !(unsigned int)MiPageTableLockIsContended(v10, v4)
          && !KeShouldYieldProcessor()) );
    MiFlushTbList(v26);
    if ( (_DWORD)v6 )
    {
      v14 = v27;
      do
      {
        MiDereferenceIoPages(1LL, *v14, v14[1] - *v14);
        v14 += 2;
        --v6;
      }
      while ( v6 );
      v10 = v24;
      v11 = v25;
    }
    v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    HIDWORD(v21) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((char *)&v21 + 4);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) - v20)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(v10, v4);
    LOBYTE(v16) = v19;
    MiUnlockWorkingSetShared(v10, v16);
    if ( v8 > v23 )
      break;
    v6 = 0LL;
    v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = 0;
    v4 = 0LL;
    MiLockWorkingSetShared(v10);
  }
  if ( !IsProbeActive )
    return 0LL;
  return 1073741849LL;
}
