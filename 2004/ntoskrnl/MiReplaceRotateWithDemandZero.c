/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140334CB0
 * Callers:
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiUnmapFrameBuffer @ 0x1403350B8 (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x140335290 (MiIsProbeActive.c)
 *     MiDereferenceIoPages @ 0x140337818 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
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
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _KPROCESS *v15; // rdx
  _QWORD *v16; // r15
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // [rsp+28h] [rbp-E0h]
  unsigned int v26; // [rsp+2Ch] [rbp-DCh]
  __int64 v27; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  _QWORD v32[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v33[44]; // [rsp+118h] [rbp+10h] BYREF

  v4 = 0LL;
  v28 = 0LL;
  memset(v32, 0, 0xB8uLL);
  IsProbeActive = 0;
  v26 = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v32[0]) = 0;
  v10 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v32[2] = 0LL;
  LODWORD(v32[1]) = 20;
  LODWORD(v32[0]) = 1;
  v32[3] = 0LL;
  v30 = v10;
  v25 = MiLockWorkingSetShared(v10);
  if ( v8 <= v29 )
  {
    v11 = 0LL;
    v31 = 0LL;
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
      if ( v28 != -1 )
      {
        if ( (_DWORD)v6 && (v12 = 2LL * (unsigned int)(v6 - 1), v13 = v33[2 * (unsigned int)(v6 - 1) + 1], v13 == v28) )
        {
          v14 = v13 + 1;
        }
        else
        {
          v14 = v28 + 1;
          v12 = 2LL * (unsigned int)v6;
          v6 = (unsigned int)(v6 + 1);
          v33[v12] = v28;
        }
        v33[v12 + 1] = v14;
      }
      MiInsertTbFlushEntry((__int64)v32, (__int64)((v8 << 25) - v11) >> 16, 1LL, 0);
      ++v26;
      v8 += 8LL;
      if ( (v8 & 0xFFF) == 0
        || v8 > v29
        || (_DWORD)v6 == 22
        || (v8 & 0x78) == 0
        && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v4)
                                         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList((__int64)v32, v15);
        if ( (_DWORD)v6 )
        {
          v16 = v33;
          do
          {
            MiDereferenceIoPages(1LL, *v16, v16[1] - *v16);
            v16 += 2;
            --v6;
          }
          while ( v6 );
          v10 = v30;
          v11 = v31;
        }
        v17 = *(_QWORD *)v9;
        if ( MiPteInShadowRange(v9)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v18 = v17 | 0x20;
            v24 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
            if ( (v24 & 0x20) == 0 )
              v18 = v17;
            v17 = v18;
            if ( (v24 & 0x42) != 0 )
              v17 = v18 | 0x42;
          }
        }
        v21 = 48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        HIDWORD(v27) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((_DWORD *)&v27 + 1, v18, v19, v20);
          while ( *(__int64 *)(v21 + 24) < 0 );
        }
        *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) - v26)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v10, v4);
        MiUnlockWorkingSetShared(v10, v25);
        if ( v8 > v29 )
          return IsProbeActive;
        v6 = 0LL;
        v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = 0;
        v4 = 0LL;
        MiLockWorkingSetShared(v10);
      }
    }
    MiUnlockPageTableInternal(v10, v4);
LABEL_30:
    v4 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v10, v4, 0LL);
    goto LABEL_5;
  }
  return IsProbeActive;
}
