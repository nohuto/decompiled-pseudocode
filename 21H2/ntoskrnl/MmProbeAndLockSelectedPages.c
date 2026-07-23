/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x140235640
 * Callers:
 *     NtReadFileScatter @ 0x1405F9040 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1405F97E0 (NtWriteFileGather.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x1402358B0 (MiProbeAndLockComplete.c)
 *     MiLockProbePacketWorkingSet @ 0x140235C98 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140235CE0 (MiUnlockProbePacketWorkingSet.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiProbeAndLockPrepare @ 0x1402AEBF0 (MiProbeAndLockPrepare.c)
 *     MiProbeLockFrame @ 0x1402AF5D0 (MiProbeLockFrame.c)
 *     MiProbeLeafFrame @ 0x140308590 (MiProbeLeafFrame.c)
 *     MiProbePacketContended @ 0x140313158 (MiProbePacketContended.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  __int64 v7; // r9
  unsigned __int64 *Pool; // rdi
  BOOL v9; // esi
  unsigned __int64 v10; // rax
  size_t v11; // rbx
  unsigned __int64 *v12; // r12
  unsigned int v13; // r13d
  NTSTATUS v14; // ebx
  unsigned __int64 *v15; // r15
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v24[22]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE P[4096]; // [rsp+100h] [rbp+0h] BYREF

  memset(v24, 0, 0xA8uLL);
  Pool = (unsigned __int64 *)P;
  v9 = Operation != IoReadAccess;
  v10 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v11 = (unsigned int)v10;
  if ( v10 > 0x200 )
  {
    Pool = (unsigned __int64 *)MiAllocatePool(64LL, 8LL * (unsigned int)v10, 1917873485LL, v7);
    if ( !Pool )
      RtlRaiseStatus(-1073741670);
  }
  v12 = &Pool[v11];
  v13 = 0;
  memmove(Pool, SegmentArray, v11 * 8);
  v14 = MiProbeAndLockPrepare((unsigned int)v24, (_DWORD)MemoryDescriptorList, *Pool, 1, AccessMode, v9, 1);
  if ( v14 >= 0 )
  {
    v15 = Pool;
    if ( Pool < v12 )
    {
      v16 = (_QWORD *)v24[6];
      while ( 1 )
      {
        v17 = *v15;
        v24[0] = v17;
        v24[1] = v17 + 1;
        *v16 = -1LL;
        v24[2] = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v17 >= 0x7FFFFFFF0000LL )
        {
          if ( AccessMode )
            break;
        }
        if ( (v24[8] & 0x20) != 0 && v17 <= v24[19] && v17 >= v24[18] )
        {
          if ( v24[20] == -1LL )
          {
            v23 = MI_READ_PTE_LOCK_FREE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v20 = v23;
            if ( (unsigned int)MiPteInShadowRange(&v23)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v20 & 1) != 0
              && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v20 |= 0x20uLL;
              }
            }
            v24[16] = (v20 >> 12) & 0xFFFFFFFFFLL;
          }
          else
          {
            v24[16] = v24[20] + ((v17 - v24[18]) >> 12);
          }
          v18 = 64;
        }
        else
        {
          v14 = MiProbeLeafFrame(v24);
          if ( v14 < 0 )
            goto LABEL_12;
          v18 = 16;
        }
        v14 = MiProbeLockFrame(v24);
        if ( v14 >= 0 )
        {
          v19 = v24[6];
          ++v13;
          *(_QWORD *)v24[6] = v24[16];
          v16 = (_QWORD *)(v19 + 8);
          v24[6] = v16;
          if ( !(v13 % v18) && (unsigned int)MiProbePacketContended(v24) )
          {
            MiUnlockProbePacketWorkingSet(v24);
            MiLockProbePacketWorkingSet(v24);
            v16 = (_QWORD *)v24[6];
          }
          if ( ++v15 < v12 )
            continue;
        }
        goto LABEL_12;
      }
      ++dword_140C4E7B8;
      v14 = -1073741819;
    }
LABEL_12:
    v14 = MiProbeAndLockComplete(v24, (unsigned int)v14, 7LL);
  }
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  if ( v14 < 0 )
    RtlRaiseStatus(v14);
}
