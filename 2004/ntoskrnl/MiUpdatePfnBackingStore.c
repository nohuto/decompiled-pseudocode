/*
 * XREFs of MiUpdatePfnBackingStore @ 0x1402F4AB4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402D3334 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiTransferSoftwarePte @ 0x1402F4DA8 (MiTransferSoftwarePte.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int8 v4; // di
  __int64 v9; // rbx
  int v10; // r15d
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax

  v4 = 0;
  if ( !a4 )
    v4 = MiLockPageInline(a1);
  v9 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), a2, a3, 2 * ((*(_DWORD *)(a1 + 16) >> 1) & 1u) + 1);
  v10 = 0;
  result = MiPteInShadowRange(a1 + 16);
  if ( (_DWORD)result )
  {
    result = MiPteHasShadow(v13, v12, v14, v15);
    if ( (_DWORD)result )
    {
      v10 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_4;
      v16 = (v9 & 1) == 0;
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_4;
      v16 = (v9 & 1) == 0;
    }
    if ( !v16 )
    {
      result = 0x8000000000000000uLL;
      v9 |= 0x8000000000000000uLL;
    }
  }
LABEL_4:
  *(_QWORD *)(a1 + 16) = v9;
  if ( v10 )
    result = MiWritePteShadow(a1 + 16, v9);
  if ( !a4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v16 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
