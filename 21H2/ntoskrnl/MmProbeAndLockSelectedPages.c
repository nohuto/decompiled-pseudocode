/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x140247CF0
 * Callers:
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 * Callees:
 *     MiLockProbePacketWorkingSet @ 0x14023CB20 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14023CB68 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeLeafFrame @ 0x140247F34 (MiProbeLeafFrame.c)
 *     MiProbePacketContended @ 0x140274818 (MiProbePacketContended.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockComplete @ 0x14031A4F0 (MiProbeAndLockComplete.c)
 *     MiProbeLockFrame @ 0x14031BAB0 (MiProbeLockFrame.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  unsigned __int64 *Pool; // rdi
  BOOL v8; // esi
  unsigned __int64 v9; // rax
  size_t v10; // rbx
  unsigned __int64 *v11; // r13
  unsigned int v12; // r12d
  KPROCESSOR_MODE v13; // r15
  int v14; // ebx
  unsigned __int64 *v15; // r14
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned int v18; // r15d
  __int64 v19; // rsi
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[22]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE P[4096]; // [rsp+100h] [rbp+0h] BYREF

  memset(v22, 0, sizeof(v22));
  Pool = (unsigned __int64 *)P;
  v8 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v10 = v9;
  if ( v9 > 0x200 )
  {
    Pool = (unsigned __int64 *)MiAllocatePool(64LL, 8 * v9, 1917873485LL);
    if ( !Pool )
      RtlRaiseStatus(3221225626LL);
  }
  v11 = &Pool[v10];
  v12 = 0;
  memmove(Pool, SegmentArray, v10 * 8);
  v13 = AccessMode;
  v14 = MiProbeAndLockPrepare((unsigned int)v22, (_DWORD)MemoryDescriptorList, *Pool, 1, AccessMode, v8, 1);
  if ( v14 >= 0 )
  {
    v15 = Pool;
    if ( Pool < v11 )
    {
      v16 = (_QWORD *)v22[7];
      while ( 1 )
      {
        v17 = *v15;
        v22[1] = v17;
        v22[2] = v17 + 1;
        *v16 = -1LL;
        v22[3] = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v17 >= 0x7FFFFFFF0000LL )
        {
          if ( v13 )
            break;
        }
        if ( (v22[9] & 0x20) != 0 && v17 <= v22[20] && v17 >= v22[19] )
        {
          if ( v22[21] == -1LL )
          {
            v21 = MI_READ_PTE_LOCK_FREE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v22[17] = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v21) >> 12) & 0xFFFFFFFFFFLL;
          }
          else
          {
            v22[17] = v22[21] + ((v17 - v22[19]) >> 12);
          }
          v18 = 64;
        }
        else
        {
          v14 = MiProbeLeafFrame(v22);
          if ( v14 < 0 )
            goto LABEL_18;
          v18 = 16;
        }
        v14 = MiProbeLockFrame(v22, 1LL);
        if ( v14 < 0 )
          goto LABEL_18;
        v19 = v22[7];
        ++v12;
        *(_QWORD *)v22[7] = v22[17];
        v16 = (_QWORD *)(v19 + 8);
        v22[7] = v16;
        if ( !(v12 % v18) && (unsigned int)MiProbePacketContended(v22) )
        {
          MiUnlockProbePacketWorkingSet((__int64)v22);
          MiLockProbePacketWorkingSet((__int64)v22);
          v16 = (_QWORD *)v22[7];
        }
        if ( ++v15 >= v11 )
          goto LABEL_18;
        v13 = AccessMode;
      }
      ++dword_140C52A70;
      v14 = -1073741819;
    }
LABEL_18:
    v14 = MiProbeAndLockComplete(v22, (unsigned int)v14, 7LL);
  }
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  if ( v14 < 0 )
    RtlRaiseStatus((unsigned int)v14);
}
