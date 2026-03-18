/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x14025E4B0
 * Callers:
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiUnmapFrameBuffer @ 0x14025E8B8 (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x14025EA90 (MiIsProbeActive.c)
 *     MiDereferenceIoPages @ 0x140261608 (MiDereferenceIoPages.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZero(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  unsigned int IsProbeActive; // r12d
  __int64 v6; // rbx
  _KPROCESS *Process; // r13
  ULONG_PTR v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 *v10; // r13
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // r15
  unsigned __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // [rsp+28h] [rbp-E0h]
  unsigned int v25; // [rsp+2Ch] [rbp-DCh]
  __int64 v26; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v28; // [rsp+40h] [rbp-C8h]
  unsigned __int64 *v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h]
  _QWORD v31[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v32[44]; // [rsp+118h] [rbp+10h] BYREF

  v4 = 0LL;
  v27 = 0LL;
  memset(v31, 0, 0xB8uLL);
  IsProbeActive = 0;
  v25 = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v31[0]) = 0;
  v10 = &Process[1].ActiveProcessorsPadding[6];
  v31[2] = 0LL;
  LODWORD(v31[1]) = 20;
  LODWORD(v31[0]) = 1;
  v31[3] = 0LL;
  v29 = v10;
  v24 = MiLockWorkingSetShared(v10);
  if ( v8 <= v28 )
  {
    v11 = 0LL;
    v30 = 0LL;
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
      if ( v27 != -1 )
      {
        if ( (_DWORD)v6 && (v12 = 2LL * (unsigned int)(v6 - 1), v13 = v32[2 * (unsigned int)(v6 - 1) + 1], v13 == v27) )
        {
          v14 = v13 + 1;
        }
        else
        {
          v14 = v27 + 1;
          v12 = 2LL * (unsigned int)v6;
          v6 = (unsigned int)(v6 + 1);
          v32[v12] = v27;
        }
        v32[v12 + 1] = v14;
      }
      MiInsertTbFlushEntry(v31, (__int64)((v8 << 25) - v11) >> 16, 1LL, 0LL);
      ++v25;
      v8 += 8LL;
      if ( (v8 & 0xFFF) == 0
        || v8 > v28
        || (_DWORD)v6 == 22
        || (v8 & 0x78) == 0
        && ((unsigned int)MiWorkingSetIsContended(v10)
         || (unsigned int)MiPageTableLockIsContended(v10, v4)
         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList(v31, v15);
        if ( (_DWORD)v6 )
        {
          v16 = v32;
          do
          {
            MiDereferenceIoPages(1LL, *v16, v16[1] - *v16);
            v16 += 2;
            --v6;
          }
          while ( v6 );
          v10 = v29;
          v11 = v30;
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
            v22 = v17 | 0x20;
            v23 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
            if ( (v23 & 0x20) == 0 )
              v22 = v17;
            v17 = v22;
            if ( (v23 & 0x42) != 0 )
              v17 = v22 | 0x42;
          }
        }
        v18 = 48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        HIDWORD(v26) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((char *)&v26 + 4);
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
        *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - v25)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v10);
        LOBYTE(v19) = v24;
        MiUnlockWorkingSetShared(v10, v19);
        if ( v8 > v28 )
          return IsProbeActive;
        v6 = 0LL;
        v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v25 = 0;
        v4 = 0LL;
        MiLockWorkingSetShared(v10);
      }
    }
    MiUnlockPageTableInternal(v10);
LABEL_30:
    v4 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v10, v4, 0LL);
    goto LABEL_5;
  }
  return IsProbeActive;
}
