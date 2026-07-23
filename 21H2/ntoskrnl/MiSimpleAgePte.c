/*
 * XREFs of MiSimpleAgePte @ 0x14053BF00
 * Callers:
 *     <none>
 * Callees:
 *     MiWalkVaCheckCommon @ 0x140311474 (MiWalkVaCheckCommon.c)
 *     MiGetVaAge @ 0x140313E40 (MiGetVaAge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x1403446E0 (MiAgePteWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiInsertVmAccessedEntry @ 0x14053B640 (MiInsertVmAccessedEntry.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14053C210 (MiSimpleAgeWorkingSetTail.c)
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
  __int64 v13; // rbx
  BOOL v14; // ebp
  unsigned int *v15; // rcx
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

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
  if ( !(unsigned int)MiWalkVaCheckCommon(v3, a2, v11, a3 == 0, &v17) )
    return 0LL;
  v13 = *(_QWORD *)(a1 + 168);
  v14 = MiGetVaAge(v12, (__int64)(a2 << 25) >> 16) == 0;
  if ( (v17 & 0x20) != 0 )
  {
    v15 = *(unsigned int **)(v13 + 248);
    if ( v15 && (unsigned __int64)((__int64)(a2 << 25) >> 16) <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v15, (__int64)(a2 << 25) >> 16) )
        return MiSimpleAgeWorkingSetTail(a1);
    }
    else
    {
      MiAgePteWorker(v3, a2, (__int64)(a2 << 25) >> 16, (__int64)v11, (unsigned int *)v13, 3);
    }
  }
  if ( v14 && (++*(_QWORD *)(v13 + 40), *(_QWORD *)(v13 + 40) >= *(_QWORD *)(v13 + 48)) )
    return 3LL;
  else
    return 0LL;
}
