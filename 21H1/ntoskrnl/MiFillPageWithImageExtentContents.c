/*
 * XREFs of MiFillPageWithImageExtentContents @ 0x14053B034
 * Callers:
 *     MiCopyImageExtentContents @ 0x14053A614 (MiCopyImageExtentContents.c)
 *     MiCopyFromDirectMapExtent @ 0x1408CB62C (MiCopyFromDirectMapExtent.c)
 * Callees:
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiAllocateHyperSpace @ 0x1402FF124 (MiAllocateHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memmove @ 0x140408CC0 (memmove.c)
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
  __int64 v13; // r9
  unsigned __int64 ValidPte; // rbx
  int v15; // edi
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // r9
  int v19; // r8d
  int v20; // ecx
  int v21; // edx
  char *v22; // rbp
  __int64 v23; // r11
  unsigned __int64 *v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  int v27; // r12d
  bool v28; // zf
  __int64 v29; // r12
  unsigned __int64 v30; // rsi
  const void *v31; // r12
  unsigned __int64 v32; // rax
  int v33; // ebp
  unsigned __int64 v34; // rbx
  bool v35; // zf
  __int64 v36; // rbx
  int v37; // edi
  bool v38; // zf
  __int64 v39; // rdi
  unsigned __int64 v40; // rbx
  struct _KPRCB *result; // rax
  _QWORD *MmInternal; // rcx
  unsigned __int8 v43; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v45; // r8
  int v46; // eax
  __int16 v47; // [rsp+30h] [rbp-68h]
  unsigned __int64 v48; // [rsp+38h] [rbp-60h]
  unsigned __int64 HyperSpace; // [rsp+40h] [rbp-58h]
  __int64 v50; // [rsp+50h] [rbp-48h]
  unsigned int v51; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v52; // [rsp+B0h] [rbp+18h]

  BugCheckParameter4 = a4;
  v47 = a3;
  v51 = (a3 & 0xFFF) + a4;
  v9 = (v51 > 0x1000) + 3;
  if ( a4 == 4096 )
    v9 = (v51 > 0x1000) + 2;
  if ( a5 )
  {
    v52 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v52 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  v50 = v9;
  HyperSpace = MiAllocateHyperSpace(v9);
  v12 = (unsigned __int64 *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v12, a2, 2684354564LL, v13);
  v15 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v12) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v15 = 1;
    if ( !HIBYTE(word_140C4DF48) )
    {
      v17 = (ValidPte & 1) == 0;
      goto LABEL_15;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v17 = (ValidPte & 1) == 0;
LABEL_15:
    if ( !v17 )
      ValidPte |= v16;
  }
LABEL_17:
  *v12 = ValidPte;
  if ( v15 )
    MiWritePteShadow((__int64)v12, ValidPte);
  v18 = a3 >> 12;
  v19 = 0;
  v20 = *(_DWORD *)BugCheckParameter3 - 1;
  if ( v20 < 0 )
    goto LABEL_91;
  do
  {
    v21 = (v19 + v20) >> 1;
    v22 = &BugCheckParameter3[48 * v21];
    v23 = *((unsigned int *)v22 + 8);
    if ( (unsigned int)v18 >= (unsigned int)v23 )
    {
      if ( (unsigned int)v18 < (int)v23 + *((_DWORD *)v22 + 12) )
        break;
      v19 = v21 + 1;
    }
    else
    {
      if ( !v21 )
        KeBugCheckEx(0x1Au, 0x13000uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v20 = v21 - 1;
    }
  }
  while ( v20 >= v19 );
  if ( v20 < v19 )
LABEL_91:
    KeBugCheckEx(0x1Au, 0x13001uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  v24 = v12 + 1;
  v48 = *((_QWORD *)v22 + 5) + (unsigned int)v18 - v23;
  v25 = MiMakeValidPte((unsigned __int64)(v12 + 1), v48, 536870913LL, v18);
  v26 = v25;
  v27 = 0;
  if ( MiPteInShadowRange((unsigned __int64)(v12 + 1)) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v27 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_36;
      v28 = (v25 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_36;
      v28 = (v25 & 1) == 0;
    }
    if ( !v28 )
      v26 = v25 | 0x8000000000000000uLL;
  }
LABEL_36:
  *v24 = v26;
  if ( v27 )
    MiWritePteShadow((__int64)(v12 + 1), v26);
  v29 = (_QWORD)v24 << 25;
  v30 = (unsigned __int64)(v12 + 2);
  v31 = (const void *)((v47 & 0xFFF) + (v29 >> 16));
  if ( v51 > 0x1000 )
  {
    if ( v48 >= *((_QWORD *)v22 + 5) + *((_QWORD *)v22 + 6) - 1LL )
    {
      if ( (v22 + 56 - BugCheckParameter3 - 8) / 48 == *(_DWORD *)BugCheckParameter3 )
        KeBugCheckEx(0x1Au, 0x13002uLL, a3, (ULONG_PTR)BugCheckParameter3, a4);
      v32 = *((_QWORD *)v22 + 11) << 12;
    }
    else
    {
      v32 = (v25 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    v33 = 0;
    v25 ^= (v25 ^ v32) & 0xFFFFFFFFF000LL;
    v34 = v25;
    if ( !MiPteInShadowRange(v30) )
      goto LABEL_52;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v33 = 1;
      if ( !HIBYTE(word_140C4DF48) )
      {
        v35 = (v25 & 1) == 0;
        goto LABEL_50;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v35 = (v25 & 1) == 0;
LABEL_50:
      if ( !v35 )
        v34 = v25 | 0x8000000000000000uLL;
    }
LABEL_52:
    *(_QWORD *)v30 = v34;
    if ( v33 )
      MiWritePteShadow(v30, v34);
    v30 = (unsigned __int64)(v12 + 3);
  }
  memmove((void *)HyperSpace, v31, a4);
  if ( a4 != 4096 )
  {
    v36 = v25 ^ (v25 ^ (qword_140C4ECC0 << 12)) & 0xFFFFFFFFF000LL;
    v37 = 0;
    if ( MiPteInShadowRange(v30) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v37 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v38 = (v36 & 1) == 0;
          goto LABEL_62;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v38 = (v36 & 1) == 0;
LABEL_62:
        if ( !v38 )
          v36 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v30 = v36;
    if ( v37 )
      MiWritePteShadow(v30, v36);
    memmove((void *)(HyperSpace + a4), (const void *)((__int64)(v30 << 25) >> 16), 4096 - a4);
  }
  v39 = v50;
  do
  {
    v40 = ZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)v12) )
      goto LABEL_77;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v40 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_77:
      *v12 = v40;
      goto LABEL_78;
    }
    if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
      v40 = ZeroPte | 0x8000000000000000uLL;
    *v12 = v40;
    MiWritePteShadow((__int64)v12, v40);
LABEL_78:
    ++v12;
    --v39;
  }
  while ( v39 );
  result = KeGetCurrentPrcb();
  MmInternal = result->MmInternal;
  if ( MmInternal )
    MmInternal[1543] = 0LL;
  if ( v52 != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && v52 <= 0xFu && v43 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v45 = CurrentPrcb->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << (v52 + 1));
          v17 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = (struct _KPRCB *)v52;
    __writecr8(v52);
  }
  return result;
}
