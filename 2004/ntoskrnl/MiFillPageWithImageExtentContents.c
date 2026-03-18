/*
 * XREFs of MiFillPageWithImageExtentContents @ 0x14053B684
 * Callers:
 *     MiCopyImageExtentContents @ 0x14053AC64 (MiCopyImageExtentContents.c)
 *     MiCopyFromDirectMapExtent @ 0x1408CC97C (MiCopyFromDirectMapExtent.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiAllocateHyperSpace @ 0x14033BA24 (MiAllocateHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memmove @ 0x140409FC0 (memmove.c)
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
  __int64 v16; // r8
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // r9
  int v20; // r8d
  int v21; // ecx
  int v22; // edx
  char *v23; // rbp
  __int64 v24; // r11
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  int v28; // r12d
  __int64 v29; // r8
  bool v30; // zf
  __int64 v31; // r12
  unsigned __int64 v32; // rsi
  const void *v33; // r12
  unsigned __int64 v34; // rax
  int v35; // ebp
  unsigned __int64 v36; // rbx
  __int64 v37; // r8
  bool v38; // zf
  __int64 v39; // rbx
  int v40; // edi
  __int64 v41; // r8
  bool v42; // zf
  __int64 v43; // rdi
  unsigned __int64 v44; // rbx
  __int64 v45; // r8
  struct _KPRCB *result; // rax
  _QWORD *MmInternal; // rcx
  unsigned __int8 v48; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v50; // r8
  int v51; // eax
  __int16 v52; // [rsp+30h] [rbp-68h]
  unsigned __int64 v53; // [rsp+38h] [rbp-60h]
  unsigned __int64 HyperSpace; // [rsp+40h] [rbp-58h]
  __int64 v55; // [rsp+50h] [rbp-48h]
  unsigned int v56; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v57; // [rsp+B0h] [rbp+18h]

  BugCheckParameter4 = a4;
  v52 = a3;
  v56 = (a3 & 0xFFF) + a4;
  v9 = (v56 > 0x1000) + 3;
  if ( a4 == 4096 )
    v9 = (v56 > 0x1000) + 2;
  if ( a5 )
  {
    v57 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v57 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  v55 = v9;
  HyperSpace = MiAllocateHyperSpace(v9);
  v12 = (unsigned __int64 *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v12, a2, 2684354564LL, v13);
  v15 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v12) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v15 = 1;
    if ( !HIBYTE(word_140C4DE08) )
    {
      v18 = (ValidPte & 1) == 0;
      goto LABEL_15;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v18 = (ValidPte & 1) == 0;
LABEL_15:
    if ( !v18 )
      ValidPte |= v17;
  }
LABEL_17:
  *v12 = ValidPte;
  if ( v15 )
    MiWritePteShadow((__int64)v12, ValidPte, v16);
  v19 = a3 >> 12;
  v20 = 0;
  v21 = *(_DWORD *)BugCheckParameter3 - 1;
  if ( v21 < 0 )
    goto LABEL_91;
  do
  {
    v22 = (v20 + v21) >> 1;
    v23 = &BugCheckParameter3[48 * v22];
    v24 = *((unsigned int *)v23 + 8);
    if ( (unsigned int)v19 >= (unsigned int)v24 )
    {
      if ( (unsigned int)v19 < (int)v24 + *((_DWORD *)v23 + 12) )
        break;
      v20 = v22 + 1;
    }
    else
    {
      if ( !v22 )
        KeBugCheckEx(0x1Au, 0x13000uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v21 = v22 - 1;
    }
  }
  while ( v21 >= v20 );
  if ( v21 < v20 )
LABEL_91:
    KeBugCheckEx(0x1Au, 0x13001uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  v25 = v12 + 1;
  v53 = *((_QWORD *)v23 + 5) + (unsigned int)v19 - v24;
  v26 = MiMakeValidPte((unsigned __int64)(v12 + 1), v53, 536870913LL, v19);
  v27 = v26;
  v28 = 0;
  if ( MiPteInShadowRange((unsigned __int64)(v12 + 1)) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v28 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_36;
      v30 = (v26 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_36;
      v30 = (v26 & 1) == 0;
    }
    if ( !v30 )
      v27 = v26 | 0x8000000000000000uLL;
  }
LABEL_36:
  *v25 = v27;
  if ( v28 )
    MiWritePteShadow((__int64)(v12 + 1), v27, v29);
  v31 = (_QWORD)v25 << 25;
  v32 = (unsigned __int64)(v12 + 2);
  v33 = (const void *)((v52 & 0xFFF) + (v31 >> 16));
  if ( v56 > 0x1000 )
  {
    if ( v53 >= *((_QWORD *)v23 + 5) + *((_QWORD *)v23 + 6) - 1LL )
    {
      if ( (v23 + 56 - BugCheckParameter3 - 8) / 48 == *(_DWORD *)BugCheckParameter3 )
        KeBugCheckEx(0x1Au, 0x13002uLL, a3, (ULONG_PTR)BugCheckParameter3, a4);
      v34 = *((_QWORD *)v23 + 11) << 12;
    }
    else
    {
      v34 = (v26 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    v35 = 0;
    v26 ^= (v26 ^ v34) & 0xFFFFFFFFF000LL;
    v36 = v26;
    if ( !MiPteInShadowRange(v32) )
      goto LABEL_52;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v35 = 1;
      if ( !HIBYTE(word_140C4DE08) )
      {
        v38 = (v26 & 1) == 0;
        goto LABEL_50;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v38 = (v26 & 1) == 0;
LABEL_50:
      if ( !v38 )
        v36 = v26 | 0x8000000000000000uLL;
    }
LABEL_52:
    *(_QWORD *)v32 = v36;
    if ( v35 )
      MiWritePteShadow(v32, v36, v37);
    v32 = (unsigned __int64)(v12 + 3);
  }
  memmove((void *)HyperSpace, v33, a4);
  if ( a4 != 4096 )
  {
    v39 = v26 ^ (v26 ^ (qword_140C4EB80 << 12)) & 0xFFFFFFFFF000LL;
    v40 = 0;
    if ( MiPteInShadowRange(v32) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v40 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v42 = (v39 & 1) == 0;
          goto LABEL_62;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v42 = (v39 & 1) == 0;
LABEL_62:
        if ( !v42 )
          v39 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v32 = v39;
    if ( v40 )
      MiWritePteShadow(v32, v39, v41);
    memmove((void *)(HyperSpace + a4), (const void *)((__int64)(v32 << 25) >> 16), 4096 - a4);
  }
  v43 = v55;
  do
  {
    v44 = ZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)v12) )
      goto LABEL_77;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v44 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_77:
      *v12 = v44;
      goto LABEL_78;
    }
    if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
      v44 = ZeroPte | 0x8000000000000000uLL;
    *v12 = v44;
    MiWritePteShadow((__int64)v12, v44, v45);
LABEL_78:
    ++v12;
    --v43;
  }
  while ( v43 );
  result = KeGetCurrentPrcb();
  MmInternal = result->MmInternal;
  if ( MmInternal )
    MmInternal[1543] = 0LL;
  if ( v57 != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v48 = KeGetCurrentIrql();
        if ( v48 <= 0xFu && v57 <= 0xFu && v48 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v50 = CurrentPrcb->SchedulerAssist;
          v51 = ~(unsigned __int16)(-1LL << (v57 + 1));
          v18 = (v51 & v50[5]) == 0;
          v50[5] &= v51;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = (struct _KPRCB *)v57;
    __writecr8(v57);
  }
  return result;
}
