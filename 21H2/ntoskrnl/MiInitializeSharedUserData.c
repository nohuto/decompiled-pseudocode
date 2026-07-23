/*
 * XREFs of MiInitializeSharedUserData @ 0x140A589E0
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     HvlGetSharedPageVa @ 0x14029E4C0 (HvlGetSharedPageVa.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiInitializeSharedUserData()
{
  unsigned __int64 v0; // rbp
  unsigned __int64 SharedPageVa; // rax
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 *v9; // r14
  char v10; // di
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  bool v16; // zf
  __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h]
  unsigned __int64 ValidPte; // [rsp+60h] [rbp+8h] BYREF

  v23[0] = 0xFFFFF78000000000uLL;
  v0 = 1LL;
  SharedPageVa = (unsigned __int64)HvlGetSharedPageVa();
  v23[1] = SharedPageVa;
  if ( SharedPageVa )
  {
    ValidPte = MI_READ_PTE_LOCK_FREE(((SharedPageVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (ValidPte & 1) != 0
      && (*(_QWORD *)(48
                    * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v0 = 2LL;
      v2 = ExGenRandom(1) & 0xF;
      v3 = 15LL;
      if ( v2 )
        v3 = v2;
      qword_140C4DE88 = (v3 + 524256) << 12;
    }
  }
  result = (__int64)MiAllocatePool(274, 8 * v0, 0x74536D4Du);
  v5 = result;
  if ( result )
  {
    v6 = 0LL;
    while ( 1 )
    {
      v7 = ((v23[v6] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v7) >> 12) & 0xFFFFFFFFFLL;
      ValidPte = MiMakeValidPte(v7, v8, 536870913);
      v9 = (__int64 *)(v5 + 8 * v6);
      v10 = ValidPte;
      v11 = 0;
      v12 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v9) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v11 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v16 = (v10 & 1) == 0;
            goto LABEL_15;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v16 = (v10 & 1) == 0;
LABEL_15:
          if ( !v16 )
            v12 |= 0x8000000000000000uLL;
        }
      }
      *v9 = v12;
      if ( v11 )
        MiWritePteShadow(v5 + 8 * v6, v12);
      qword_140C4DE78[v6] = (__int64)v9;
      v17 = 48 * v8 - 0x58000000000LL;
      v18 = (unsigned __int8)MiLockPageInline(v17, v13, v14, v15);
      *(_QWORD *)(v17 + 16) = MiSwizzleInvalidPte(128LL);
      *(_QWORD *)(v17 + 40) |= 0x8000000000000000uLL;
      *(_QWORD *)(v17 + 8) = v9;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v16 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v18);
      if ( ++v6 >= v0 )
        return 1LL;
    }
  }
  return result;
}
