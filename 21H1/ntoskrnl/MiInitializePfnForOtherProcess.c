/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x140328FB8
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140328C34 (MiInitializeSystemPageTable.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B5F58 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
 *     MiAllocateTopLevelPage @ 0x1406F10F0 (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x1407827B4 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiLockAndIncrementShareCount @ 0x1402BA158 (MiLockAndIncrementShareCount.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // si
  __int64 v7; // rbx
  unsigned __int8 v8; // di
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  char v13; // al
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  int v20; // [rsp+58h] [rbp+20h] BYREF

  v4 = a4;
  v7 = 48 * a1 - 0x58000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    v20 = 0;
    v8 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20, a2, a3, a4);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  else
  {
    v8 = MiLockPageInline(48 * a1 - 0x58000000000LL, a2, a3);
  }
  v9 = *(_QWORD *)(v7 + 24) & 0xF0FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v7 + 8) = a2;
  *(_QWORD *)(v7 + 24) = v9;
  *(_QWORD *)(v7 + 16) = MiSwizzleInvalidPte(128LL);
  *(_WORD *)(v7 + 32) = 1;
  if ( (v4 & 0x80u) != 0 )
    v12 = v10 ^ ((v10 + 1) ^ v10) & 0x3FFFFFFFFFFFFFFFLL;
  else
    v12 = v10 & 0xC000000000000000uLL | 1;
  *(_QWORD *)(v7 + 24) = v12;
  v13 = *(_BYTE *)(v7 + 34) | 0x10;
  *(_BYTE *)(v7 + 34) = v13;
  if ( (v4 & 0x200) != 0 )
    *(_BYTE *)(v7 + 34) = v13 & 0xF8 | 6;
  *(_QWORD *)(v7 + 40) ^= (a3 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = -1LL << (v8 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)v10;
          v19 = (v18 & SchedulerAssist[5]) == 0;
          v11 = (unsigned int)v18 & SchedulerAssist[5];
          SchedulerAssist[5] = v11;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v8;
    __writecr8(v8);
  }
  if ( (v4 & 0x800) == 0 )
    return MiLockAndIncrementShareCount(a3, v10, v11);
  return result;
}
