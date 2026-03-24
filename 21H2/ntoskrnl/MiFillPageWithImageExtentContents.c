/*
 * XREFs of MiFillPageWithImageExtentContents @ 0x140540B54
 * Callers:
 *     MiCopyImageExtentContents @ 0x140540134 (MiCopyImageExtentContents.c)
 *     MiCopyFromDirectMapExtent @ 0x1408CFF7C (MiCopyFromDirectMapExtent.c)
 * Callees:
 *     MiAllocateHyperSpace @ 0x14023D10C (MiAllocateHyperSpace.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memmove @ 0x140413F40 (memmove.c)
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
  __int64 v15; // r8
  __int64 v16; // rdx
  bool v17; // zf
  ULONG_PTR v18; // r9
  int v19; // r8d
  int v20; // ecx
  int v21; // edx
  char *v22; // rbp
  __int64 v23; // r11
  unsigned __int64 *v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  int v27; // r12d
  __int64 v28; // r8
  bool v29; // zf
  __int64 v30; // r12
  unsigned __int64 v31; // rsi
  const void *v32; // r12
  unsigned __int64 v33; // rax
  int v34; // ebp
  unsigned __int64 v35; // rbx
  __int64 v36; // r8
  bool v37; // zf
  __int64 v38; // rbx
  int v39; // edi
  __int64 v40; // r8
  bool v41; // zf
  __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  __int64 v44; // r8
  struct _KPRCB *result; // rax
  _QWORD *MmInternal; // rcx
  unsigned __int8 v47; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v49; // r8
  int v50; // eax
  __int16 v51; // [rsp+30h] [rbp-68h]
  unsigned __int64 v52; // [rsp+38h] [rbp-60h]
  unsigned __int64 HyperSpace; // [rsp+40h] [rbp-58h]
  __int64 v54; // [rsp+50h] [rbp-48h]
  unsigned int v55; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v56; // [rsp+B0h] [rbp+18h]

  BugCheckParameter4 = a4;
  v51 = a3;
  v55 = (a3 & 0xFFF) + a4;
  v9 = (v55 > 0x1000) + 3;
  if ( a4 == 4096 )
    v9 = (v55 > 0x1000) + 2;
  if ( a5 )
  {
    v56 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v56 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  v54 = v9;
  HyperSpace = MiAllocateHyperSpace(v9);
  v12 = (unsigned __int64 *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v12, a2, -1610612732);
  v14 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v12) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v14 = 1;
    if ( !HIBYTE(word_140C4E008) )
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
  if ( v14 )
    MiWritePteShadow((__int64)v12, ValidPte, v15);
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
  v52 = *((_QWORD *)v22 + 5) + (unsigned int)v18 - v23;
  v25 = MiMakeValidPte((unsigned __int64)(v12 + 1), v52, 536870913);
  v26 = v25;
  v27 = 0;
  if ( MiPteInShadowRange((unsigned __int64)(v12 + 1)) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v27 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_36;
      v29 = (v25 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_36;
      v29 = (v25 & 1) == 0;
    }
    if ( !v29 )
      v26 = v25 | 0x8000000000000000uLL;
  }
LABEL_36:
  *v24 = v26;
  if ( v27 )
    MiWritePteShadow((__int64)(v12 + 1), v26, v28);
  v30 = (_QWORD)v24 << 25;
  v31 = (unsigned __int64)(v12 + 2);
  v32 = (const void *)((v51 & 0xFFF) + (v30 >> 16));
  if ( v55 > 0x1000 )
  {
    if ( v52 >= *((_QWORD *)v22 + 5) + *((_QWORD *)v22 + 6) - 1LL )
    {
      if ( (v22 + 56 - BugCheckParameter3 - 8) / 48 == *(_DWORD *)BugCheckParameter3 )
        KeBugCheckEx(0x1Au, 0x13002uLL, a3, (ULONG_PTR)BugCheckParameter3, a4);
      v33 = *((_QWORD *)v22 + 11) << 12;
    }
    else
    {
      v33 = (v25 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    v34 = 0;
    v25 ^= (v25 ^ v33) & 0xFFFFFFFFF000LL;
    v35 = v25;
    if ( !MiPteInShadowRange(v31) )
      goto LABEL_52;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v34 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v37 = (v25 & 1) == 0;
        goto LABEL_50;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v37 = (v25 & 1) == 0;
LABEL_50:
      if ( !v37 )
        v35 = v25 | 0x8000000000000000uLL;
    }
LABEL_52:
    *(_QWORD *)v31 = v35;
    if ( v34 )
      MiWritePteShadow(v31, v35, v36);
    v31 = (unsigned __int64)(v12 + 3);
  }
  memmove((void *)HyperSpace, v32, a4);
  if ( a4 != 4096 )
  {
    v38 = v25 ^ (v25 ^ (qword_140C4ED80 << 12)) & 0xFFFFFFFFF000LL;
    v39 = 0;
    if ( MiPteInShadowRange(v31) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v39 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v41 = (v38 & 1) == 0;
          goto LABEL_62;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v41 = (v38 & 1) == 0;
LABEL_62:
        if ( !v41 )
          v38 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v31 = v38;
    if ( v39 )
      MiWritePteShadow(v31, v38, v40);
    memmove((void *)(HyperSpace + a4), (const void *)((__int64)(v31 << 25) >> 16), 4096 - a4);
  }
  v42 = v54;
  do
  {
    v43 = ZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)v12) )
      goto LABEL_77;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v43 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_77:
      *v12 = v43;
      goto LABEL_78;
    }
    if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
      v43 = ZeroPte | 0x8000000000000000uLL;
    *v12 = v43;
    MiWritePteShadow((__int64)v12, v43, v44);
LABEL_78:
    ++v12;
    --v42;
  }
  while ( v42 );
  result = KeGetCurrentPrcb();
  MmInternal = result->MmInternal;
  if ( MmInternal )
    MmInternal[1543] = 0LL;
  if ( v56 != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v47 = KeGetCurrentIrql();
        if ( v47 <= 0xFu && v56 <= 0xFu && v47 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v49 = CurrentPrcb->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << (v56 + 1));
          v17 = (v50 & v49[5]) == 0;
          v49[5] &= v50;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = (struct _KPRCB *)v56;
    __writecr8(v56);
  }
  return result;
}
