/*
 * XREFs of MiInitializeSharedUserData @ 0x140A563BC
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     HvlGetSharedPageVa @ 0x1403608D0 (HvlGetSharedPageVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v9; // r9
  __int64 *v10; // r14
  char v11; // di
  int v12; // r15d
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  bool v17; // zf
  __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  _QWORD v24[7]; // [rsp+20h] [rbp-38h]
  unsigned __int64 ValidPte; // [rsp+60h] [rbp+8h] BYREF

  v24[0] = 0xFFFFF78000000000uLL;
  v0 = 1LL;
  SharedPageVa = (unsigned __int64)HvlGetSharedPageVa();
  v24[1] = SharedPageVa;
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
      qword_140C4DCC8 = (v3 + 524256) << 12;
    }
  }
  result = (__int64)MiAllocatePool(274, 8 * v0, 0x74536D4Du);
  v5 = result;
  if ( result )
  {
    v6 = 0LL;
    while ( 1 )
    {
      v7 = ((v24[v6] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v7) >> 12) & 0xFFFFFFFFFLL;
      ValidPte = MiMakeValidPte(v7, v8, 536870913LL, v9);
      v10 = (__int64 *)(v5 + 8 * v6);
      v11 = ValidPte;
      v12 = 0;
      v13 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v10) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v12 = 1;
          if ( !HIBYTE(word_140C4DE88) )
          {
            v17 = (v11 & 1) == 0;
            goto LABEL_15;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v17 = (v11 & 1) == 0;
LABEL_15:
          if ( !v17 )
            v13 |= 0x8000000000000000uLL;
        }
      }
      *v10 = v13;
      if ( v12 )
        MiWritePteShadow(v5 + 8 * v6, v13, v15);
      qword_140C4DCB8[v6] = (__int64)v10;
      v18 = 48 * v8 - 0x58000000000LL;
      v19 = (unsigned __int8)MiLockPageInline(v18, v14, v15, v16);
      *(_QWORD *)(v18 + 16) = MiSwizzleInvalidPte(128LL);
      *(_QWORD *)(v18 + 40) |= 0x8000000000000000uLL;
      *(_QWORD *)(v18 + 8) = v10;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
            v17 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v19);
      if ( ++v6 >= v0 )
        return 1LL;
    }
  }
  return result;
}
