/*
 * XREFs of MiFillPageWithImageExtentContents @ 0x140540D94
 * Callers:
 *     MiCopyImageExtentContents @ 0x140540374 (MiCopyImageExtentContents.c)
 *     MiCopyFromDirectMapExtent @ 0x1408D00DC (MiCopyFromDirectMapExtent.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiAllocateHyperSpace @ 0x1402E195C (MiAllocateHyperSpace.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

struct _KPRCB *__fastcall MiFillPageWithImageExtentContents(
        char *BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        int a5)
{
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int v9; // r10d
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 *v12; // r14
  unsigned __int64 ValidPte; // rbx
  int v14; // edi
  __int64 v15; // rdx
  bool v16; // zf
  ULONG_PTR v17; // r9
  int v18; // r8d
  int v19; // ecx
  int v20; // edx
  char *v21; // rbp
  __int64 v22; // r11
  unsigned __int64 *v23; // rsi
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rbx
  int v26; // r12d
  bool v27; // zf
  __int64 v28; // r12
  unsigned __int64 v29; // rsi
  const void *v30; // r12
  unsigned __int64 v31; // rax
  int v32; // ebp
  unsigned __int64 v33; // rbx
  bool v34; // zf
  __int64 v35; // rbx
  int v36; // edi
  bool v37; // zf
  __int64 v38; // rdi
  unsigned __int64 v39; // rbx
  struct _KPRCB *result; // rax
  _QWORD *MmInternal; // rcx
  unsigned __int8 v42; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v44; // r8
  int v45; // eax
  __int16 v46; // [rsp+30h] [rbp-68h]
  unsigned __int64 v47; // [rsp+38h] [rbp-60h]
  unsigned __int64 HyperSpace; // [rsp+40h] [rbp-58h]
  __int64 v49; // [rsp+50h] [rbp-48h]
  unsigned int v50; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v51; // [rsp+B0h] [rbp+18h]

  BugCheckParameter4 = a4;
  v46 = a3;
  v50 = (a3 & 0xFFF) + a4;
  v9 = (v50 > 0x1000) + 3;
  if ( a4 == 4096 )
    v9 = (v50 > 0x1000) + 2;
  if ( a5 )
  {
    v51 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v51 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  v49 = v9;
  HyperSpace = MiAllocateHyperSpace(v9);
  v12 = (unsigned __int64 *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v12, a2, -1610612732);
  v14 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v12) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v14 = 1;
    if ( !HIBYTE(word_140C4E048) )
    {
      v16 = (ValidPte & 1) == 0;
      goto LABEL_15;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v16 = (ValidPte & 1) == 0;
LABEL_15:
    if ( !v16 )
      ValidPte |= v15;
  }
LABEL_17:
  *v12 = ValidPte;
  if ( v14 )
    MiWritePteShadow((__int64)v12, ValidPte);
  v17 = a3 >> 12;
  v18 = 0;
  v19 = *(_DWORD *)BugCheckParameter3 - 1;
  if ( v19 < 0 )
    goto LABEL_91;
  do
  {
    v20 = (v18 + v19) >> 1;
    v21 = &BugCheckParameter3[48 * v20];
    v22 = *((unsigned int *)v21 + 8);
    if ( (unsigned int)v17 >= (unsigned int)v22 )
    {
      if ( (unsigned int)v17 < (int)v22 + *((_DWORD *)v21 + 12) )
        break;
      v18 = v20 + 1;
    }
    else
    {
      if ( !v20 )
        KeBugCheckEx(0x1Au, 0x13000uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v19 = v20 - 1;
    }
  }
  while ( v19 >= v18 );
  if ( v19 < v18 )
LABEL_91:
    KeBugCheckEx(0x1Au, 0x13001uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  v23 = v12 + 1;
  v47 = *((_QWORD *)v21 + 5) + (unsigned int)v17 - v22;
  v24 = MiMakeValidPte((unsigned __int64)(v12 + 1), v47, 536870913);
  v25 = v24;
  v26 = 0;
  if ( MiPteInShadowRange((unsigned __int64)(v12 + 1)) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v26 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_36;
      v27 = (v24 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_36;
      v27 = (v24 & 1) == 0;
    }
    if ( !v27 )
      v25 = v24 | 0x8000000000000000uLL;
  }
LABEL_36:
  *v23 = v25;
  if ( v26 )
    MiWritePteShadow((__int64)(v12 + 1), v25);
  v28 = (_QWORD)v23 << 25;
  v29 = (unsigned __int64)(v12 + 2);
  v30 = (const void *)((v46 & 0xFFF) + (v28 >> 16));
  if ( v50 > 0x1000 )
  {
    if ( v47 >= *((_QWORD *)v21 + 5) + *((_QWORD *)v21 + 6) - 1LL )
    {
      if ( (v21 + 56 - BugCheckParameter3 - 8) / 48 == *(_DWORD *)BugCheckParameter3 )
        KeBugCheckEx(0x1Au, 0x13002uLL, a3, (ULONG_PTR)BugCheckParameter3, a4);
      v31 = *((_QWORD *)v21 + 11) << 12;
    }
    else
    {
      v31 = (v24 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    v32 = 0;
    v24 ^= (v24 ^ v31) & 0xFFFFFFFFF000LL;
    v33 = v24;
    if ( !MiPteInShadowRange(v29) )
      goto LABEL_52;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v32 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
        v34 = (v24 & 1) == 0;
        goto LABEL_50;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v34 = (v24 & 1) == 0;
LABEL_50:
      if ( !v34 )
        v33 = v24 | 0x8000000000000000uLL;
    }
LABEL_52:
    *(_QWORD *)v29 = v33;
    if ( v32 )
      MiWritePteShadow(v29, v33);
    v29 = (unsigned __int64)(v12 + 3);
  }
  memmove((void *)HyperSpace, v30, a4);
  if ( a4 != 4096 )
  {
    v35 = v24 ^ (v24 ^ (qword_140C4EDC0 << 12)) & 0xFFFFFFFFF000LL;
    v36 = 0;
    if ( MiPteInShadowRange(v29) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v36 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v37 = (v35 & 1) == 0;
          goto LABEL_62;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v37 = (v35 & 1) == 0;
LABEL_62:
        if ( !v37 )
          v35 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v29 = v35;
    if ( v36 )
      MiWritePteShadow(v29, v35);
    memmove((void *)(HyperSpace + a4), (const void *)((__int64)(v29 << 25) >> 16), 4096 - a4);
  }
  v38 = v49;
  do
  {
    v39 = ZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)v12) )
      goto LABEL_77;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v39 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_77:
      *v12 = v39;
      goto LABEL_78;
    }
    if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
      v39 = ZeroPte | 0x8000000000000000uLL;
    *v12 = v39;
    MiWritePteShadow((__int64)v12, v39);
LABEL_78:
    ++v12;
    --v38;
  }
  while ( v38 );
  result = KeGetCurrentPrcb();
  MmInternal = result->MmInternal;
  if ( MmInternal )
    MmInternal[1543] = 0LL;
  if ( v51 != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && v51 <= 0xFu && v42 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v44 = CurrentPrcb->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (v51 + 1));
          v16 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = (struct _KPRCB *)v51;
    __writecr8(v51);
  }
  return result;
}
