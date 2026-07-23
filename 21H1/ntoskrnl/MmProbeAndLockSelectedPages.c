/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x140307A70
 * Callers:
 *     NtReadFileScatter @ 0x1406CACB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406CB2C0 (NtWriteFileGather.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiProbeLockFrame @ 0x1402A6D80 (MiProbeLockFrame.c)
 *     MiProbeAndLockPrepare @ 0x1402A7E50 (MiProbeAndLockPrepare.c)
 *     MiProbePacketContended @ 0x1402A8EF8 (MiProbePacketContended.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x140307CE0 (MiProbeAndLockComplete.c)
 *     MiLockProbePacketWorkingSet @ 0x140307E60 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140307EA8 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeLeafFrame @ 0x140345A1C (MiProbeLeafFrame.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  unsigned __int64 *v11; // r12
  unsigned int v12; // r13d
  NTSTATUS v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 *v16; // r15
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 Flink; // rdx
  unsigned int v20; // r14d
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v25[22]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE P[4096]; // [rsp+100h] [rbp+0h] BYREF

  memset(v25, 0, 0xA8uLL);
  Pool = (unsigned __int64 *)P;
  v8 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v10 = (unsigned int)v9;
  if ( v9 > 0x200 )
  {
    Pool = (unsigned __int64 *)MiAllocatePool(64, 8LL * (unsigned int)v9, 0x72506D4Du);
    if ( !Pool )
      RtlRaiseStatus(-1073741670);
  }
  v11 = &Pool[v10];
  v12 = 0;
  memmove(Pool, SegmentArray, v10 * 8);
  v13 = MiProbeAndLockPrepare((__int64)v25, (__int64)MemoryDescriptorList, *Pool, 1u, AccessMode, v8, 1);
  if ( v13 >= 0 )
  {
    v16 = Pool;
    if ( Pool < v11 )
    {
      v17 = (_QWORD *)v25[6];
      while ( 1 )
      {
        v18 = *v16;
        v25[0] = v18;
        v25[1] = v18 + 1;
        *v17 = -1LL;
        Flink = 0x7FFFFFFF0000LL;
        v25[2] = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v18 >= 0x7FFFFFFF0000LL )
        {
          if ( AccessMode )
            break;
        }
        if ( (v25[8] & 0x20) != 0 && v18 <= v25[19] && v18 >= v25[18] )
        {
          if ( v25[20] == -1LL )
          {
            v24 = MI_READ_PTE_LOCK_FREE(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v22 = v24;
            if ( MiPteInShadowRange((unsigned __int64)&v24)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v22 & 1) != 0
              && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
            {
              Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                if ( (*(_QWORD *)(Flink + 8 * (((unsigned __int64)&v24 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v22 |= 0x20uLL;
              }
            }
            v25[16] = (v22 >> 12) & 0xFFFFFFFFFLL;
          }
          else
          {
            v25[16] = v25[20] + ((v18 - v25[18]) >> 12);
          }
          v20 = 64;
        }
        else
        {
          v13 = MiProbeLeafFrame(v25);
          if ( v13 < 0 )
            goto LABEL_12;
          v20 = 16;
        }
        v13 = MiProbeLockFrame((__int64)v25, Flink, v14, v15);
        if ( v13 >= 0 )
        {
          v21 = v25[6];
          ++v12;
          *(_QWORD *)v25[6] = v25[16];
          v17 = (_QWORD *)(v21 + 8);
          v25[6] = v17;
          if ( !(v12 % v20) && MiProbePacketContended((__int64)v25) )
          {
            MiUnlockProbePacketWorkingSet(v25);
            MiLockProbePacketWorkingSet(v25);
            v17 = (_QWORD *)v25[6];
          }
          if ( ++v16 < v11 )
            continue;
        }
        goto LABEL_12;
      }
      ++dword_140C4E6B8;
      v13 = -1073741819;
    }
LABEL_12:
    v13 = MiProbeAndLockComplete(v25, (unsigned int)v13, 7LL);
  }
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
}
