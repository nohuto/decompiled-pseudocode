/*
 * XREFs of MiInitializeSharedUserData @ 0x140B0A680
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     HvlGetSharedPageVa @ 0x140262490 (HvlGetSharedPageVa.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiInitializeSharedUserData()
{
  unsigned __int64 v0; // rbp
  unsigned __int64 SharedPageVa; // rax
  unsigned __int64 v2; // rax
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 *v10; // r14
  char v11; // di
  int v12; // r15d
  __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  bool v16; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  _QWORD v21[7]; // [rsp+20h] [rbp-38h]
  unsigned __int64 ValidPte; // [rsp+60h] [rbp+8h] BYREF

  v21[0] = 0xFFFFF78000000000uLL;
  v0 = 1LL;
  SharedPageVa = (unsigned __int64)HvlGetSharedPageVa();
  v21[1] = SharedPageVa;
  if ( SharedPageVa )
  {
    ValidPte = MI_READ_PTE_LOCK_FREE(((SharedPageVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (ValidPte & 1) != 0 )
    {
      v2 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFFLL;
      if ( v2 <= qword_140C50840 && (*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
      {
        v0 = 2LL;
        v3 = ExGenRandom(1) & 0xF;
        v4 = 15LL;
        if ( v3 )
          v4 = v3;
        qword_140C50678 = (v4 + 524256) << 12;
      }
    }
  }
  result = (__int64)MiAllocatePool(274, 8 * v0, 0x74536D4Du);
  v6 = result;
  if ( result )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = ((v21[v7] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v8) >> 12) & 0xFFFFFFFFFFLL;
      ValidPte = MiMakeValidPte(v8, v9, 536870913);
      v10 = (__int64 *)(v6 + 8 * v7);
      v11 = ValidPte;
      v12 = 0;
      v13 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v10) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v12 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v16 = (v11 & 1) == 0;
            goto LABEL_22;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v16 = (v11 & 1) == 0;
LABEL_22:
          if ( !v16 )
            v13 |= 0x8000000000000000uLL;
        }
      }
      *v10 = v13;
      if ( v12 )
        MiWritePteShadow(v6 + 8 * v7, v13);
      qword_140C50668[v7] = (__int64)v10;
      v14 = 48 * v9 - 0x220000000000LL;
      v15 = (unsigned __int8)MiLockPageInline(v14);
      *(_QWORD *)(v14 + 16) = MiSwizzleInvalidPte(128LL);
      *(_QWORD *)(v14 + 40) |= 0x8000000000000000uLL;
      *(_QWORD *)(v14 + 8) = v10;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v16 = (v20 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v20;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
      if ( ++v7 >= v0 )
        return 1LL;
    }
  }
  return result;
}
