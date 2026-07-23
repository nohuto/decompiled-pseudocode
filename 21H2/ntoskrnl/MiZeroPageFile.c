/*
 * XREFs of MiZeroPageFile @ 0x14052D990
 * Callers:
 *     MiZeroAllPageFiles @ 0x1409B0EA0 (MiZeroAllPageFiles.c)
 * Callees:
 *     MmZeroPageWrite @ 0x14023E0E8 (MmZeroPageWrite.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiZeroPageFile(PVOID P)
{
  __int64 *v2; // r14
  bool v3; // zf
  unsigned int v4; // ebx
  int v5; // edi
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // si
  unsigned int v9; // r12d
  unsigned __int64 v10; // r8
  unsigned int v11; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r8
  _DWORD *v19; // rdi
  int v20; // eax
  unsigned int v22; // [rsp+28h] [rbp-A9h]
  unsigned __int64 v23; // [rsp+30h] [rbp-A1h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-99h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-91h]
  _BYTE MemoryDescriptorList[176]; // [rsp+48h] [rbp-89h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  v2 = (__int64 *)*((_QWORD *)P + 4);
  Event = (PRKEVENT)*((_QWORD *)P + 5);
  ExFreePoolWithTag(P, 0);
  v3 = (*((_WORD *)v2 + 102) & 0x800) == 0;
  *(_QWORD *)&MemoryDescriptorList[32] = 0LL;
  *(_QWORD *)&MemoryDescriptorList[40] = 0LL;
  if ( v3 )
  {
    *(_DWORD *)&MemoryDescriptorList[8] = 48;
  }
  else
  {
    *(_DWORD *)&MemoryDescriptorList[8] = 131120;
    memset64(&MemoryDescriptorList[48], qword_140C4EDC0, 0x10uLL);
  }
  v22 = 0;
  v4 = 0;
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 58);
  v7 = *v2;
  v8 = v6;
  v9 = 1;
  if ( (unsigned __int64)*v2 > 1 )
  {
    v10 = 1LL;
    do
    {
      if ( _bittest64(*(const signed __int64 **)(v2[14] + 16), v10) )
      {
        if ( v4 )
          v5 = 1;
      }
      else
      {
        v11 = v9;
        if ( v4 )
          v11 = v22;
        ++v4;
        v22 = v11;
        if ( v4 == 16 || v10 == v7 - 1 )
          v5 = 1;
      }
      if ( v5 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 58);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)(-1LL << (v8 + 1));
              v3 = (v15 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v15;
              if ( v3 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v8);
        if ( (*((_WORD *)v2 + 102) & 0x800) != 0 )
        {
          *(_DWORD *)&MemoryDescriptorList[40] = v4 << 12;
        }
        else
        {
          v16 = v2[7];
          v24 = (unsigned __int64)v22 << 12;
          v23 = (unsigned __int64)v4 << 12;
          MmZeroPageWrite(v16, (__int64)&v24, (__int64 *)&v23, 0);
        }
        v5 = 0;
        v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 58);
        v4 = 0;
      }
      v7 = *v2;
      v10 = ++v9;
    }
    while ( v9 < (unsigned __int64)*v2 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 58);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && v8 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (v8 + 1));
        v3 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
    }
  }
  __writecr8(v8);
  if ( (*((_WORD *)v2 + 102) & 0x800) != 0 && (MemoryDescriptorList[10] & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)&MemoryDescriptorList[24], (PMDL)MemoryDescriptorList);
  return KeSetEvent(Event, 0, 0);
}
