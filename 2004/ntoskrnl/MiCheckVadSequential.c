/*
 * XREFs of MiCheckVadSequential @ 0x14029A500
 * Callers:
 *     MiZeroFault @ 0x14029CF50 (MiZeroFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckVadSequential(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int64 v4; // rbp
  unsigned int v6; // r15d
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 CurrentIrql; // rcx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rcx
  __int64 v13; // r12
  int v14; // edx
  __int64 v15; // r10
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r8
  unsigned int v19; // r11d
  unsigned __int8 v20; // bl
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned int v24; // r9d
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v33; // r9
  int v34; // edx
  bool v35; // zf
  unsigned int v36; // [rsp+70h] [rbp+8h]
  int v37; // [rsp+78h] [rbp+10h] BYREF
  __int64 v38; // [rsp+80h] [rbp+18h]
  unsigned __int64 v39; // [rsp+88h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v37 = 0;
  v8 = v4 & 0xFFFFFFFFFFFFF000uLL | 1;
  CurrentIrql = KeGetCurrentIrql();
  v38 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v10 = *(_DWORD *)(v7 + 48);
  do
  {
    while ( (v10 & 1) != 0 )
    {
      if ( (v10 & 2) != 0 )
      {
        v37 = 0;
        do
        {
          KeYieldProcessorEx(&v37, a2, a3, (__int64)SchedulerAssist);
          v10 = *(_DWORD *)(v7 + 48);
        }
        while ( (v10 & 1) != 0 );
      }
      else
      {
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 48), v10 | 2, v10);
      }
    }
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 48), v10 & 0xFFFFFFFC | 1, v10);
  }
  while ( v11 != v10 );
  v12 = *(_QWORD *)(v7 + 120);
  v13 = v12 & 0xFFF;
  v14 = *(_DWORD *)a1 | 0x20;
  v15 = *(_DWORD *)(v7 + 120) & 0xFFF;
  *(_DWORD *)a1 = v14;
  v16 = v12 & 0xFFFFFFFFFFFFF000uLL;
  v17 = (v12 & 0xFFFFFFFFFFFFF000uLL) + (v15 << 12);
  if ( (v4 & 0xFFFFFFFFFFFFF000uLL) == v17 )
  {
    if ( v13 == 4095 )
      v8 = (v16 + 4096) | 0xFFF;
    else
      v8 = v16 | ((_WORD)v12 + 1) & 0xFFF;
    LOBYTE(v19) = v14;
  }
  else if ( v4 > v17 && (v18 = (v4 - v17) >> 12, v39 = v18, v18 < 8) )
  {
    v19 = v14;
    v24 = (((v4 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
    v36 = v24;
    if ( v24 <= v18 )
    {
      if ( v24 )
      {
        v19 = v14 & 0xFFFFFFDF;
        *(_DWORD *)a1 = v14 & 0xFFFFFFDF;
      }
    }
    else
    {
      v24 = (v4 - v17) >> 12;
      v36 = v24;
    }
    if ( (v19 & 0x20) == 0 )
      goto LABEL_11;
    v25 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
    if ( v24 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL
          && v25 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            LOBYTE(v29) = v26 | 0x20;
            v30 = *((_QWORD *)&Flink->Flink + ((v25 >> 3) & 0x1FF));
            if ( (v30 & 0x20) == 0 )
              v29 = *(_QWORD *)v25;
            LOBYTE(v26) = v29;
            v24 = v36;
            if ( (v30 & 0x42) != 0 )
              LOBYTE(v26) = v26 | 0x42;
          }
        }
        if ( (v26 & 1) == 0 || (v26 & 0x20) == 0 )
          break;
        --v24;
        v25 -= 8LL;
        v36 = v24;
        if ( !v24 )
          goto LABEL_30;
      }
      if ( !v24 )
      {
LABEL_30:
        LODWORD(v18) = v39;
        goto LABEL_31;
      }
      goto LABEL_9;
    }
LABEL_31:
    v27 = (unsigned int)(v18 + 1);
    if ( (unsigned __int64)(v13 + v27) > 0xFFF )
      v8 = (v12 + ((unsigned __int64)((unsigned int)v27 + (v12 & 0xFFF) - 4095) << 12)) | 0xFFF;
    else
      v8 = v16 | ((_WORD)v18 + 1 + (_WORD)v12) & 0xFFF;
    v19 = *(_DWORD *)a1;
  }
  else
  {
    v19 = v14;
    if ( v17 || v4 >> 12 != (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) )
    {
LABEL_9:
      v19 &= ~0x20u;
      *(_DWORD *)a1 = v19;
    }
  }
  if ( (v19 & 0x20) == 0 )
  {
LABEL_11:
    *(_DWORD *)(v7 + 64) &= ~0x2000000u;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v7 + 64) & 0x2000000) != 0 )
  {
    v22 = *(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32);
    v23 = ((v4 >> 12) - v22) >> 8;
    if ( v17 )
      v4 = v17 - 4096;
    if ( (((v4 >> 12) - v22) >> 8) + 1 == v23 )
      v6 = -1073741280;
  }
LABEL_12:
  *(_QWORD *)(v7 + 120) = v8;
  _InterlockedAnd((volatile signed __int32 *)(v7 + 48), 0xFFFFFFFC);
  v20 = v38;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v31 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v33 = CurrentPrcb->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
        v35 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v20);
  return v6;
}
