/*
 * XREFs of MiDecrementAweMapCount @ 0x1405AA4C8
 * Callers:
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14097D2A0 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDecrementAweMapCount(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  char v12; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v16; // edx
  bool v17; // zf

  v7 = MiLockPageInline(a2);
  v8 = *(_QWORD *)(a2 + 24);
  v9 = v7;
  v10 = (v8 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  v11 = v8 ^ (v10 ^ v8) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) = v11;
  if ( (a4 & 1) != 0 )
  {
    *(_QWORD *)(a2 + 24) = v11 | 0x4000000000000000LL;
  }
  else if ( (v8 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    v12 = *(_BYTE *)(a2 + 34);
    if ( (v12 & 8) != 0 )
    {
      v10 = 1LL;
    }
    else
    {
      *(_BYTE *)(a2 + 34) = v12 | 8;
      *(_QWORD *)(a2 + 16) = *a3;
      *a3 = a2;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v10;
}
