/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140219184
 * Callers:
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiDereferenceIoPages @ 0x1402183E8 (MiDereferenceIoPages.c)
 *     MiUnmapFrameBuffer @ 0x14021958C (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x140219764 (MiIsProbeActive.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
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
  __int64 *v15; // r15
  unsigned __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // [rsp+28h] [rbp-E0h]
  unsigned int v24; // [rsp+2Ch] [rbp-DCh]
  __int64 v25; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v27; // [rsp+40h] [rbp-C8h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B8h]
  _QWORD v30[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v31[44]; // [rsp+118h] [rbp+10h] BYREF

  v4 = 0LL;
  v26 = 0LL;
  memset(v30, 0, 0xB8uLL);
  IsProbeActive = 0;
  v24 = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v30[0]) = 0;
  v10 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v30[2] = 0LL;
  LODWORD(v30[1]) = 20;
  LODWORD(v30[0]) = 1;
  v30[3] = 0LL;
  v28 = v10;
  v23 = MiLockWorkingSetShared(v10);
  if ( v8 <= v27 )
  {
    v11 = 0LL;
    v29 = 0LL;
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
      if ( v26 != -1 )
      {
        if ( (_DWORD)v6 && (v12 = 2LL * (unsigned int)(v6 - 1), v13 = v31[2 * (unsigned int)(v6 - 1) + 1], v13 == v26) )
        {
          v14 = v13 + 1;
        }
        else
        {
          v14 = v26 + 1;
          v12 = 2LL * (unsigned int)v6;
          v6 = (unsigned int)(v6 + 1);
          v31[v12] = v26;
        }
        v31[v12 + 1] = v14;
      }
      MiInsertTbFlushEntry(v30, (__int64)((v8 << 25) - v11) >> 16, 1LL, 0LL);
      ++v24;
      v8 += 8LL;
      if ( (v8 & 0xFFF) == 0
        || v8 > v27
        || (_DWORD)v6 == 22
        || (v8 & 0x78) == 0
        && ((unsigned int)MiWorkingSetIsContended(v10)
         || (unsigned int)MiPageTableLockIsContended(v10, v4)
         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList(v30);
        if ( (_DWORD)v6 )
        {
          v15 = v31;
          do
          {
            MiDereferenceIoPages(1, *v15, v15[1] - *v15);
            v15 += 2;
            --v6;
          }
          while ( v6 );
          v10 = v28;
          v11 = v29;
        }
        v16 = *(_QWORD *)v9;
        if ( (unsigned int)MiPteInShadowRange(v9)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v16 & 1) != 0
          && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v21 = v16 | 0x20;
            v22 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
            if ( (v22 & 0x20) == 0 )
              v21 = v16;
            v16 = v21;
            if ( (v22 & 0x42) != 0 )
              v16 = v21 | 0x42;
          }
        }
        v17 = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        HIDWORD(v25) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((char *)&v25 + 4);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) - v24)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v10, v4);
        LOBYTE(v18) = v23;
        MiUnlockWorkingSetShared(v10, v18);
        if ( v8 > v27 )
          return IsProbeActive;
        v6 = 0LL;
        v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v24 = 0;
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
