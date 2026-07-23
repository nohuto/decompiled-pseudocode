/*
 * XREFs of MiDemotePfnListChain @ 0x14055E458
 * Callers:
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiMakeLargePageTable @ 0x14053DC54 (MiMakeLargePageTable.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiSetPfnPageState @ 0x140334C50 (MiSetPfnPageState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSetResidentPageMemberInPfn @ 0x1403F4998 (MiSetResidentPageMemberInPfn.c)
 *     MiLockPageAtDpc @ 0x14054FB5C (MiLockPageAtDpc.c)
 */

__int64 __fastcall MiDemotePfnListChain(__int64 a1, int a2, __int64 a3, _DWORD *SchedulerAssist)
{
  int v4; // r13d
  __int64 result; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v15; // r15d
  unsigned __int64 v16; // r13
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v19; // eax
  bool v20; // zf
  __int64 v21; // [rsp+30h] [rbp-58h]
  char v22; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+A0h] [rbp+18h]

  v4 = a2;
  result = (unsigned int)(a2 - 1);
  do
  {
    v7 = *(_QWORD **)(a1 + 8 * result);
    v8 = (unsigned int)result;
    while ( !v7 )
    {
      if ( !(_DWORD)v8 )
        return result;
      v8 = (unsigned int)(v8 - 1);
      v7 = *(_QWORD **)(a1 + 8LL * (unsigned int)v8);
    }
    v9 = MiLargePageSizes[v8];
    *(_QWORD *)(a1 + 8 * v8) = *v7;
    v10 = v9;
    if ( (_DWORD)v8 == 1 )
    {
      MiUpdateLargePageBitMap(
        *(_QWORD *)(qword_140C4E688 + 8 * ((v7[5] >> 39) & 0x3FFLL)),
        (__int64)(v7 + 0xB000000000LL) / 48,
        v9,
        0,
        1);
      v10 = MiLargePageSizes[v8];
    }
    v22 = 2 - v8;
    v24 = v8 + 1;
    v11 = MiLargePageSizes[(unsigned int)(v8 + 1)];
    v12 = v10 % v11;
    v21 = (unsigned int)(v8 + 1);
    v13 = (__int64)&v7[6 * v9];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)v12 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    v15 = 0;
    if ( v10 / v11 )
    {
      v16 = v10 / v11;
      do
      {
        v13 -= 48 * v11;
        MiLockPageAtDpc(v13, v12, a3, (__int64)SchedulerAssist);
        if ( v11 == 1 )
          MiSetResidentPageMemberInPfn(v13, 0);
        else
          *(_BYTE *)(v13 + 39) ^= (v22 ^ *(_BYTE *)(v13 + 39)) & 3;
        if ( (_QWORD *)v13 != v7 )
        {
          MiSetPfnPageState(v13, 5);
          *(_QWORD *)(v13 + 16) = v7[2];
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ++v15;
        *(_QWORD *)v13 = *(_QWORD *)(a1 + 8 * v21);
        *(_QWORD *)(a1 + 8 * v21) = v13;
      }
      while ( v15 < v16 );
      v4 = a2;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v19 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    result = (unsigned int)(v4 - 1);
  }
  while ( v24 != v4 );
  return result;
}
