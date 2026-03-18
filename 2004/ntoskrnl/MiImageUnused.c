/*
 * XREFs of MiImageUnused @ 0x140349068
 * Callers:
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x14060666C (MiRelocateImageAgain.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiImageUnused(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  KIRQL v6; // di
  unsigned int v7; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)a3 = -1LL;
  if ( *(_QWORD *)(v4 + 32) )
  {
    if ( a2 == 1 )
      v6 = 17;
    else
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    LODWORD(v4) = *(_DWORD *)(a1 + 88);
    if ( (_DWORD)v4 != -1 )
    {
      *(_QWORD *)a3 = (unsigned int)v4;
      v7 = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(a3 + 8) = (unsigned __int16)v7;
      *(_DWORD *)(a3 + 16) = (v7 >> 20) & 3;
      LODWORD(v4) = *(_DWORD *)(a1 + 56);
      if ( (v4 & 0x10000000) != 0 )
      {
        LODWORD(v4) = v4 & 0xEFFFFFFF;
        *(_DWORD *)(a1 + 56) = v4;
        *(_BYTE *)(a3 + 13) = BYTE2(v7) & 1;
        *(_BYTE *)(a3 + 12) = 1;
      }
      *(_DWORD *)(a1 + 88) = -1;
    }
    *(_DWORD *)(a1 + 92) &= ~0x400000u;
    if ( v6 != 17 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << (v6 + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      LODWORD(v4) = v6;
      __writecr8(v6);
    }
  }
  return v4;
}
