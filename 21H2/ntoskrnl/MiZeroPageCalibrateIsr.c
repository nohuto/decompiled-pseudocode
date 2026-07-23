/*
 * XREFs of MiZeroPageCalibrateIsr @ 0x1403BC5A0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiComputeOptimalWriteProcessors @ 0x1403BCA84 (MiComputeOptimalWriteProcessors.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 *     memset @ 0x140414300 (memset.c)
 */

ULONG_PTR __fastcall MiZeroPageCalibrateIsr(ULONG_PTR Argument, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v4; // r9
  unsigned __int64 i; // rdx
  __int64 v7; // r10
  unsigned int v8; // eax
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 CurrentIrql; // r13
  __int64 v13; // r13
  _DWORD *MmInternal; // r14
  __int64 v15; // rsi
  signed __int32 v16; // eax
  unsigned int v17; // edi
  signed __int32 v18; // eax
  unsigned int v19; // edi
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  unsigned __int64 v22; // rax
  unsigned int v23; // edi
  int v24; // ecx
  unsigned __int8 v25; // r13
  ULONG_PTR result; // rax
  unsigned __int32 v27; // ecx
  size_t v28; // r8
  void *v29; // rcx
  __int64 v30; // rdx
  _DWORD *v31; // rcx
  __int64 v32; // rax
  signed __int32 v33; // ecx
  unsigned int v34; // edx
  _DWORD *v35; // rcx
  __int64 v36; // r14
  __int128 v37; // xmm0
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rsi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  bool v46; // zf
  signed __int32 v47[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v48; // [rsp+20h] [rbp-68h]
  struct _KPRCB *v49; // [rsp+28h] [rbp-60h]
  __int64 v50; // [rsp+30h] [rbp-58h]
  __int64 v51; // [rsp+38h] [rbp-50h]
  int v52; // [rsp+90h] [rbp+8h] BYREF
  int v53; // [rsp+98h] [rbp+10h] BYREF
  int v54; // [rsp+A0h] [rbp+18h] BYREF
  int v55; // [rsp+A8h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  i = (unsigned __int16)KeNumberNodes;
  v7 = *(_QWORD *)(Argument + 72);
  v8 = 0;
  v48 = v7;
  v49 = CurrentPrcb;
  v9 = 1;
  if ( KeNumberNodes )
  {
    a3 = *(_QWORD *)(v7 + 16);
    do
    {
      v10 = 4544LL * v8;
      if ( CurrentPrcb->Group == *(_WORD *)(v10 + a3 + 4480)
        && (*(_QWORD *)(v10 + a3 + 4472) & CurrentPrcb->GroupSetMember) != 0 )
      {
        break;
      }
      ++v8;
    }
    while ( v8 < (unsigned __int16)KeNumberNodes );
    v4 = 0LL;
  }
  v11 = *(_QWORD *)(v7 + 16) + 4544LL * v8;
  v50 = *(_QWORD *)(v11 + 4432);
  *(_DWORD *)(v11 + 4440) = *(_DWORD *)(v50 + 128);
  CurrentIrql = KeGetCurrentIrql();
  v51 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    i = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
    a3 = (unsigned int)i | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
    v4 = 0LL;
  }
  v13 = v50;
  while ( 1 )
  {
    MmInternal = CurrentPrcb->MmInternal;
    v15 = *(_QWORD *)(Argument + 32) + 16LL * (unsigned int)(*(_DWORD *)(Argument + 40) - 1);
    v53 = 0;
    MmInternal[3121] = 0;
    v16 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v17 = ~v16 & 0x80000000;
    if ( (v16 & 0x7FFFFFFF) != 0 )
    {
      while ( (*(_DWORD *)Argument & 0x80000000) != v17 )
        KeYieldProcessorEx(&v53, i, a3, v4);
      v4 = 0LL;
      v54 = 0;
      v18 = _InterlockedDecrement((volatile signed __int32 *)Argument);
      v19 = ~v18 & 0x80000000;
      if ( (v18 & 0x7FFFFFFF) == 0 )
      {
        *(_DWORD *)Argument = v19 | *(_DWORD *)(Argument + 4);
        goto LABEL_24;
      }
      while ( (*(_DWORD *)Argument & 0x80000000) != v19 )
        KeYieldProcessorEx(&v54, i, a3, v4);
LABEL_23:
      v4 = 0LL;
LABEL_24:
      v7 = v48;
      CurrentPrcb = v49;
      goto LABEL_25;
    }
    *(_DWORD *)Argument = *(_DWORD *)(Argument + 4) | v17;
    a3 = *(_QWORD *)(v7 + 16);
    if ( KeNumberNodes )
    {
      a3 += 4440LL;
      do
      {
        if ( *(_DWORD *)a3 )
          v20 = (*(_QWORD *)(a3 - 24) / (unsigned __int64)*(unsigned int *)a3) & 0xFFFFFFFFFFFFF000uLL;
        else
          v20 = 0LL;
        *(_QWORD *)(a3 - 16) = v20;
        LODWORD(v4) = v4 + 1;
        v21 = (unsigned __int16)KeNumberNodes;
        *(_DWORD *)(a3 + 4) = 0;
        a3 += 4544LL;
      }
      while ( (unsigned int)v4 < v21 );
    }
    v4 = 0LL;
    *(_DWORD *)(Argument + 44) = 0;
    v22 = __rdtsc();
    i = (unsigned __int64)HIDWORD(v22) << 32;
    *(_QWORD *)(Argument + 56) = i | (unsigned int)v22;
    _InterlockedOr(v47, 0);
    v52 = 0;
    LODWORD(v22) = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v23 = ~(_DWORD)v22 & 0x80000000;
    if ( (v22 & 0x7FFFFFFF) != 0 )
    {
      while ( (*(_DWORD *)Argument & 0x80000000) != v23 )
        KeYieldProcessorEx(&v52, i, a3, v4);
      goto LABEL_23;
    }
    *(_DWORD *)Argument = *(_DWORD *)(Argument + 4) | v23;
LABEL_25:
    if ( CurrentPrcb->Group == *(_WORD *)(v13 + 120) && (CurrentPrcb->GroupSetMember & *(_QWORD *)(v13 + 112)) != 0 )
    {
      v27 = _InterlockedIncrement((volatile signed __int32 *)(v11 + 4444));
      if ( v27 <= *(_DWORD *)(v11 + 4440) )
      {
        v28 = *(_QWORD *)(v11 + 4424);
        v29 = (void *)(*(_QWORD *)(v11 + 4408) + v28 * (v27 - 1));
        if ( *(_DWORD *)(Argument + 48) == 1 )
          KeZeroPages(v29, *(_QWORD *)(v11 + 4424));
        else
          memset(v29, 0, v28);
        v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 4448), 1u);
        v7 = v48;
        v4 = 0LL;
        if ( v33 + 1 == *(_DWORD *)(v11 + 4440) )
        {
          _InterlockedOr(v47, 0);
          i = 16LL * (unsigned int)(*(_DWORD *)(v11 + 4440) - 1);
          a3 = i + *(_QWORD *)(v11 + 4384);
          *(_QWORD *)(a3 + 8LL * *(int *)(Argument + 48)) = __rdtsc() - *(_QWORD *)(Argument + 56);
          *(_DWORD *)(v11 + 4448) = 0;
        }
      }
    }
    v24 = KeNumberProcessors_0;
    if ( _InterlockedIncrement((volatile signed __int32 *)(Argument + 44)) == v24 )
    {
      _InterlockedOr(v47, 0);
      a3 = 0LL;
      *(_QWORD *)(v15 + 8LL * *(int *)(Argument + 48)) = __rdtsc() - *(_QWORD *)(Argument + 56);
      v30 = (unsigned __int16)KeNumberNodes;
      if ( KeNumberNodes )
      {
        v31 = (_DWORD *)(*(_QWORD *)(v7 + 16) + 4440LL);
        do
        {
          if ( *v31 )
          {
            --*v31;
            --*(_DWORD *)(Argument + 40);
          }
          v30 = (unsigned __int16)KeNumberNodes;
          v31 += 1136;
          a3 = (unsigned int)(a3 + 1);
        }
        while ( (unsigned int)a3 < (unsigned __int16)KeNumberNodes );
      }
      if ( !*(_DWORD *)(Argument + 40) )
      {
        if ( *(_DWORD *)(Argument + 48) )
        {
          v36 = v7 + 6368;
          v37 = *(_OWORD *)(Argument + 8);
          *(_QWORD *)(Argument + 64) = *(_QWORD *)(v7 + 6392);
          v9 = 2;
          v38 = *(_QWORD *)(v7 + 16);
          *(_OWORD *)(v7 + 6368) = v37;
          *(_OWORD *)(v7 + 6384) = *(_OWORD *)(Argument + 24);
          if ( (_WORD)v30 )
          {
            v39 = v38 + 4360;
            v40 = (unsigned __int16)v30;
            do
            {
              MiComputeOptimalWriteProcessors(v39, v30, a3, v4);
              v39 += 4544LL;
              --v40;
            }
            while ( v40 );
          }
          MiComputeOptimalWriteProcessors(v36, v30, a3, v4);
          v7 = v48;
          v4 = 0LL;
        }
        else
        {
          *(_DWORD *)(Argument + 48) = 1;
          v34 = 0;
          a3 = (unsigned __int16)KeNumberNodes;
          *(_DWORD *)(Argument + 40) = *(_DWORD *)(v7 + 6404);
          if ( (_WORD)a3 )
          {
            v35 = (_DWORD *)(*(_QWORD *)(v7 + 16) + 4440LL);
            do
            {
              ++v34;
              *v35 = *(v35 - 20);
              v35 += 1136;
            }
            while ( v34 < (unsigned int)a3 );
          }
        }
      }
      for ( i = 0LL;
            (unsigned int)i < (unsigned int)KeNumberProcessors_0;
            *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v32] + 32760) + 12484LL) = v9 )
      {
        v32 = (unsigned int)i;
        i = (unsigned int)(i + 1);
      }
    }
    else
    {
      v55 = 0;
      while ( 1 )
      {
        v9 = MmInternal[3121];
        if ( v9 )
          break;
        KeYieldProcessorEx(&v55, i, a3, 0LL);
        v4 = 0LL;
      }
      v7 = v48;
    }
    CurrentPrcb = v49;
    if ( v9 != 1 )
      break;
    v9 = 1;
  }
  v25 = v51;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v42 = KeGetCurrentIrql();
      if ( v42 <= 0xFu && (unsigned __int8)v51 <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v51 + 1));
        v46 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v46 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
  }
  result = v25;
  __writecr8(v25);
  return result;
}
