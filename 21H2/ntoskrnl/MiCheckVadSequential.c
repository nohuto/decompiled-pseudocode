/*
 * XREFs of MiCheckVadSequential @ 0x14020CC50
 * Callers:
 *     MiZeroFault @ 0x140359BB0 (MiZeroFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckVadSequential(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v3; // r15d
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 CurrentIrql; // rcx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // rcx
  __int64 v10; // r12
  int v11; // edx
  __int64 v12; // r10
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r8
  unsigned int v16; // r11d
  unsigned __int8 v17; // bl
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r9
  _DWORD *SchedulerAssist; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v31; // r9
  int v32; // edx
  bool v33; // zf
  unsigned int v34; // [rsp+70h] [rbp+8h]
  int v35; // [rsp+78h] [rbp+10h] BYREF
  __int64 v36; // [rsp+80h] [rbp+18h]
  unsigned __int64 v37; // [rsp+88h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v35 = 0;
  v5 = v1 & 0xFFFFFFFFFFFFF000uLL | 1;
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v7 = *(_DWORD *)(v4 + 48);
  do
  {
    while ( (v7 & 1) != 0 )
    {
      if ( (v7 & 2) != 0 )
      {
        v35 = 0;
        do
        {
          KeYieldProcessorEx(&v35);
          v7 = *(_DWORD *)(v4 + 48);
        }
        while ( (v7 & 1) != 0 );
      }
      else
      {
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 48), v7 | 2, v7);
      }
    }
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 48), v7 & 0xFFFFFFFC | 1, v7);
  }
  while ( v8 != v7 );
  v9 = *(_QWORD *)(v4 + 120);
  v10 = v9 & 0xFFF;
  v11 = *(_DWORD *)a1 | 0x20;
  v12 = *(_DWORD *)(v4 + 120) & 0xFFF;
  *(_DWORD *)a1 = v11;
  v13 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v9 & 0xFFFFFFFFFFFFF000uLL) + (v12 << 12);
  if ( (v1 & 0xFFFFFFFFFFFFF000uLL) == v14 )
  {
    if ( v10 == 4095 )
      v5 = (v13 + 4096) | 0xFFF;
    else
      v5 = v13 | ((_WORD)v9 + 1) & 0xFFF;
    LOBYTE(v16) = v11;
  }
  else if ( v1 > v14 && (v15 = (v1 - v14) >> 12, v37 = v15, v15 < 8) )
  {
    v16 = v11;
    v21 = (((v1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
    v34 = v21;
    if ( v21 <= v15 )
    {
      if ( v21 )
      {
        v16 = v11 & 0xFFFFFFDF;
        *(_DWORD *)a1 = v11 & 0xFFFFFFDF;
      }
    }
    else
    {
      v21 = (v1 - v14) >> 12;
      v34 = v21;
    }
    if ( (v16 & 0x20) == 0 )
      goto LABEL_11;
    v22 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
    if ( v21 )
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)v22;
        if ( v22 >= 0xFFFFF6FB7DBED000uLL
          && v22 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v23 & 1) != 0
          && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            LOBYTE(v27) = v23 | 0x20;
            v28 = *((_QWORD *)&Flink->Flink + ((v22 >> 3) & 0x1FF));
            if ( (v28 & 0x20) == 0 )
              v27 = *(_QWORD *)v22;
            LOBYTE(v23) = v27;
            v21 = v34;
            if ( (v28 & 0x42) != 0 )
              LOBYTE(v23) = v23 | 0x42;
          }
        }
        if ( (v23 & 1) == 0 || (v23 & 0x20) == 0 )
          break;
        --v21;
        v22 -= 8LL;
        v34 = v21;
        if ( !v21 )
          goto LABEL_30;
      }
      if ( !v21 )
      {
LABEL_30:
        LODWORD(v15) = v37;
        goto LABEL_31;
      }
      goto LABEL_9;
    }
LABEL_31:
    v24 = (unsigned int)(v15 + 1);
    if ( (unsigned __int64)(v10 + v24) > 0xFFF )
      v5 = (v9 + ((unsigned __int64)((unsigned int)v24 + (v9 & 0xFFF) - 4095) << 12)) | 0xFFF;
    else
      v5 = v13 | ((_WORD)v15 + 1 + (_WORD)v9) & 0xFFF;
    v16 = *(_DWORD *)a1;
  }
  else
  {
    v16 = v11;
    if ( v14 || v1 >> 12 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) )
    {
LABEL_9:
      v16 &= ~0x20u;
      *(_DWORD *)a1 = v16;
    }
  }
  if ( (v16 & 0x20) == 0 )
  {
LABEL_11:
    *(_DWORD *)(v4 + 64) &= ~0x2000000u;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v4 + 64) & 0x2000000) != 0 )
  {
    v19 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
    v20 = ((v1 >> 12) - v19) >> 8;
    if ( v14 )
      v1 = v14 - 4096;
    if ( (((v1 >> 12) - v19) >> 8) + 1 == v20 )
      v3 = -1073741280;
  }
LABEL_12:
  *(_QWORD *)(v4 + 120) = v5;
  _InterlockedAnd((volatile signed __int32 *)(v4 + 48), 0xFFFFFFFC);
  v17 = v36;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v29 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v31 = CurrentPrcb->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
        v33 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v17);
  return v3;
}
