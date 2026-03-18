/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x1402F7C80
 * Callers:
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiUnmapFrameBuffer @ 0x1402F8088 (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x1402F8260 (MiIsProbeActive.c)
 *     MiDereferenceIoPages @ 0x1402FA7E8 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZero(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned int IsProbeActive; // r12d
  __int64 v6; // rbx
  _KPROCESS *Process; // r13
  ULONG_PTR v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _KPROCESS *v16; // rdx
  _QWORD *v17; // r15
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // [rsp+28h] [rbp-E0h]
  unsigned int v27; // [rsp+2Ch] [rbp-DCh]
  __int64 v28; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v30; // [rsp+40h] [rbp-C8h]
  __int64 v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  _QWORD v33[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v34[44]; // [rsp+118h] [rbp+10h] BYREF

  v4 = 0LL;
  v29 = 0LL;
  memset(v33, 0, 0xB8uLL);
  IsProbeActive = 0;
  v27 = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v30 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v33[0]) = 0;
  v10 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v33[2] = 0LL;
  LODWORD(v33[1]) = 20;
  LODWORD(v33[0]) = 1;
  v33[3] = 0LL;
  v31 = v10;
  v26 = MiLockWorkingSetShared(v10);
  if ( v8 <= v30 )
  {
    v12 = 0LL;
    v32 = 0LL;
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_30;
      if ( (v8 & 0xFFF) == 0 )
        break;
LABEL_5:
      if ( !IsProbeActive )
        IsProbeActive = MiIsProbeActive(v8, 1LL, 3LL);
      if ( (unsigned int)MiUnmapFrameBuffer(v8) )
        IsProbeActive = 1;
      if ( v29 != -1 )
      {
        if ( (_DWORD)v6 && (v13 = 2LL * (unsigned int)(v6 - 1), v14 = v34[2 * (unsigned int)(v6 - 1) + 1], v14 == v29) )
        {
          v15 = v14 + 1;
        }
        else
        {
          v15 = v29 + 1;
          v13 = 2LL * (unsigned int)v6;
          v6 = (unsigned int)(v6 + 1);
          v34[v13] = v29;
        }
        v34[v13 + 1] = v15;
      }
      MiInsertTbFlushEntry((__int64)v33, (__int64)((v8 << 25) - v12) >> 16, 1LL, 0);
      ++v27;
      v8 += 8LL;
      if ( (v8 & 0xFFF) == 0
        || v8 > v30
        || (_DWORD)v6 == 22
        || (v8 & 0x78) == 0
        && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v4)
                                         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList((__int64)v33, v16);
        if ( (_DWORD)v6 )
        {
          v17 = v34;
          do
          {
            MiDereferenceIoPages(1LL, *v17, v17[1] - *v17);
            v17 += 2;
            --v6;
          }
          while ( v6 );
          v10 = v31;
          v12 = v32;
        }
        v18 = *(_QWORD *)v9;
        if ( MiPteInShadowRange(v9)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v18 & 1) != 0
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v19 = v18 | 0x20;
            v25 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
            if ( (v25 & 0x20) == 0 )
              v19 = v18;
            v18 = v19;
            if ( (v25 & 0x42) != 0 )
              v18 = v19 | 0x42;
          }
        }
        v22 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        HIDWORD(v28) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((_DWORD *)&v28 + 1, v19, v20, v21);
          while ( *(__int64 *)(v22 + 24) < 0 );
        }
        *(_QWORD *)(v22 + 24) ^= (*(_QWORD *)(v22 + 24) ^ (*(_QWORD *)(v22 + 24) - v27)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v10, v4, v20);
        MiUnlockWorkingSetShared(v10, v26);
        if ( v8 > v30 )
          return IsProbeActive;
        v6 = 0LL;
        v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v27 = 0;
        v4 = 0LL;
        MiLockWorkingSetShared(v10);
      }
    }
    MiUnlockPageTableInternal(v10, v4, v11);
LABEL_30:
    v4 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v10, v4, 0LL);
    goto LABEL_5;
  }
  return IsProbeActive;
}
