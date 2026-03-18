/*
 * XREFs of MiSimpleAgePte @ 0x1405367F0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiAgePteWorker @ 0x140244AA0 (MiAgePteWorker.c)
 *     MiGetVaAge @ 0x1402471D0 (MiGetVaAge.c)
 *     MiWalkVaCheckCommon @ 0x14032DAC4 (MiWalkVaCheckCommon.c)
 *     MiInsertVmAccessedEntry @ 0x140535F30 (MiInsertVmAccessedEntry.c)
 *     MiSimpleAgeWorkingSetTail @ 0x140536B00 (MiSimpleAgeWorkingSetTail.c)
 */

__int64 __fastcall MiSimpleAgePte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r12
  unsigned __int64 v7; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  BOOL v14; // ebp
  unsigned int *v15; // rcx
  unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v17 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = v17;
  if ( MiPteInShadowRange((unsigned __int64)&v17)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v9 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v17 >> 3) & 0x1FF));
      v10 = v7 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v7;
      v7 = v10;
      if ( (v9 & 0x42) != 0 )
        v7 = v10;
    }
  }
  v11 = (_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( !(unsigned int)MiWalkVaCheckCommon(v3, a2, v11, a3 == 0, (__int64 *)&v17) )
    return 0LL;
  v13 = *(_QWORD **)(a1 + 168);
  v14 = MiGetVaAge(v12, (__int64)(a2 << 25) >> 16) == 0;
  if ( (v17 & 0x20) != 0 )
  {
    v15 = (unsigned int *)v13[31];
    if ( v15 && (unsigned __int64)((__int64)(a2 << 25) >> 16) <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v15, (__int64)(a2 << 25) >> 16) )
        return MiSimpleAgeWorkingSetTail(a1);
    }
    else
    {
      MiAgePteWorker(v3, a2, (__int64)(a2 << 25) >> 16, (__int64)v11, (__int64)v13, 3);
    }
  }
  if ( v14 && (++v13[5], v13[5] >= v13[6]) )
    return 3LL;
  else
    return 0LL;
}
