/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x1402B7460
 * Callers:
 *     NtReadFileScatter @ 0x140699E80 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14069A620 (NtWriteFileGather.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x14020A2F0 (MiProbeAndLockPrepare.c)
 *     MiProbeLockFrame @ 0x14020ACD0 (MiProbeLockFrame.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x1402B76D0 (MiProbeAndLockComplete.c)
 *     MiLockProbePacketWorkingSet @ 0x1402B7AB8 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402B7B00 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeLeafFrame @ 0x1402FD840 (MiProbeLeafFrame.c)
 *     MiProbePacketContended @ 0x140308408 (MiProbePacketContended.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  unsigned __int64 *Pool; // rdi
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  size_t v10; // rbx
  unsigned __int64 *v11; // r12
  unsigned int v12; // r13d
  signed int v13; // ebx
  unsigned __int64 *v14; // r15
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned int v17; // r14d
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v24[22]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE P[4096]; // [rsp+100h] [rbp+0h] BYREF

  memset(v24, 0, 0xA8uLL);
  Pool = (unsigned __int64 *)P;
  v8 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v10 = (unsigned int)v9;
  if ( v9 > 0x200 )
  {
    Pool = (unsigned __int64 *)MiAllocatePool(64, 8LL * (unsigned int)v9, 0x72506D4Du);
    if ( !Pool )
      RtlRaiseStatus(0xC000009A);
  }
  v11 = &Pool[v10];
  v12 = 0;
  memmove(Pool, SegmentArray, v10 * 8);
  v13 = MiProbeAndLockPrepare((__int64)v24, (__int64)MemoryDescriptorList, *Pool, 1u, AccessMode, v8, 1);
  if ( v13 >= 0 )
  {
    v14 = Pool;
    if ( Pool < v11 )
    {
      v15 = (_QWORD *)v24[6];
      while ( 1 )
      {
        v16 = *v14;
        v24[0] = v16;
        v24[1] = v16 + 1;
        *v15 = -1LL;
        v24[2] = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v16 >= 0x7FFFFFFF0000LL )
        {
          if ( AccessMode )
            break;
        }
        if ( (v24[8] & 0x20) != 0 && v16 <= v24[19] && v16 >= v24[18] )
        {
          if ( v24[20] == -1LL )
          {
            v23 = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v19 = v23;
            if ( (unsigned int)MiPteInShadowRange(&v23, v20)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v19 & 1) != 0
              && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v19 |= 0x20uLL;
              }
            }
            v24[16] = (v19 >> 12) & 0xFFFFFFFFFLL;
          }
          else
          {
            v24[16] = v24[20] + ((v16 - v24[18]) >> 12);
          }
          v17 = 64;
        }
        else
        {
          v13 = MiProbeLeafFrame(v24);
          if ( v13 < 0 )
            goto LABEL_12;
          v17 = 16;
        }
        v13 = MiProbeLockFrame(v24);
        if ( v13 >= 0 )
        {
          v18 = v24[6];
          ++v12;
          *(_QWORD *)v24[6] = v24[16];
          v15 = (_QWORD *)(v18 + 8);
          v24[6] = (unsigned __int64)v15;
          if ( !(v12 % v17) && (unsigned int)MiProbePacketContended(v24, 0LL) )
          {
            MiUnlockProbePacketWorkingSet(v24);
            MiLockProbePacketWorkingSet(v24);
            v15 = (_QWORD *)v24[6];
          }
          if ( ++v14 < v11 )
            continue;
        }
        goto LABEL_12;
      }
      ++dword_140C4E778;
      v13 = -1073741819;
    }
LABEL_12:
    v13 = MiProbeAndLockComplete(v24, (unsigned int)v13, 7LL);
  }
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
}
