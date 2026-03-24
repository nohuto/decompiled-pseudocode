/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140299824
 * Callers:
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiDereferenceIoPages @ 0x140297968 (MiDereferenceIoPages.c)
 *     MiUnmapFrameBuffer @ 0x140299C2C (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x140299E04 (MiIsProbeActive.c)
 *     MiPageTableLockIsContended @ 0x140308460 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
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
  _DWORD *v11; // r9
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r15
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v28; // rax
  unsigned __int8 v29; // [rsp+28h] [rbp-E0h]
  unsigned int v30; // [rsp+2Ch] [rbp-DCh]
  __int64 v31; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v33; // [rsp+40h] [rbp-C8h]
  __int64 v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B8h]
  _QWORD v36[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v37[44]; // [rsp+118h] [rbp+10h] BYREF

  v4 = 0LL;
  v32 = 0LL;
  memset(v36, 0, 0xB8uLL);
  IsProbeActive = 0;
  v30 = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v36[0]) = 0;
  v10 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v36[2] = 0LL;
  LODWORD(v36[1]) = 20;
  LODWORD(v36[0]) = 1;
  v36[3] = 0LL;
  v34 = v10;
  v29 = MiLockWorkingSetShared(v10, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL, v11);
  if ( v8 <= v33 )
  {
    v12 = 0LL;
    v35 = 0LL;
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
      if ( v32 != -1 )
      {
        if ( (_DWORD)v6 && (v13 = 2LL * (unsigned int)(v6 - 1), v14 = v37[2 * (unsigned int)(v6 - 1) + 1], v14 == v32) )
        {
          v15 = v14 + 1;
        }
        else
        {
          v15 = v32 + 1;
          v13 = 2LL * (unsigned int)v6;
          v6 = (unsigned int)(v6 + 1);
          v37[v13] = v32;
        }
        v37[v13 + 1] = v15;
      }
      MiInsertTbFlushEntry(v36, (__int64)((v8 << 25) - v12) >> 16, 1LL, 0LL);
      ++v30;
      v8 += 8LL;
      if ( (v8 & 0xFFF) == 0
        || v8 > v33
        || (_DWORD)v6 == 22
        || (v8 & 0x78) == 0
        && ((unsigned int)MiWorkingSetIsContended(v10)
         || (unsigned int)MiPageTableLockIsContended(v10)
         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList(v36);
        if ( (_DWORD)v6 )
        {
          v17 = v37;
          do
          {
            MiDereferenceIoPages(1, *v17, v17[1] - *v17);
            v17 += 2;
            --v6;
          }
          while ( v6 );
          v10 = v34;
          v12 = v35;
        }
        v18 = *(_QWORD *)v9;
        if ( (unsigned int)MiPteInShadowRange(v9, v16)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v18 & 1) != 0
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v19 = v18 | 0x20;
            v28 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
            if ( (v28 & 0x20) == 0 )
              v19 = v18;
            v18 = v19;
            if ( (v28 & 0x42) != 0 )
              v18 = v19 | 0x42;
          }
        }
        v22 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        HIDWORD(v31) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((_DWORD *)&v31 + 1, v19, v20, v21);
          while ( *(__int64 *)(v22 + 24) < 0 );
        }
        *(_QWORD *)(v22 + 24) ^= (*(_QWORD *)(v22 + 24) ^ (*(_QWORD *)(v22 + 24) - v30)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v10, v4);
        MiUnlockWorkingSetShared(v10, v29);
        if ( v8 > v33 )
          return IsProbeActive;
        v6 = 0LL;
        v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v30 = 0;
        v4 = 0LL;
        MiLockWorkingSetShared(v10, v23, v24, v25);
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
