/*
 * XREFs of MiInsertLargeVadMapping @ 0x1405432D0
 * Callers:
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 *a4,
        int a5)
{
  _KPROCESS *Process; // rbp
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  int v18; // esi
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  _QWORD v22[5]; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = MiLockProtoPoolPage(a2, 0LL);
  if ( !v10 )
    return 0LL;
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  LOBYTE(v12) = 17;
  v22[0] = v11;
  v13 = v11;
  MiUnlockProtoPoolPage(v10, v12);
  if ( MiPteInShadowRange((unsigned __int64)v22)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)v22 >> 3) & 0x1FF)) & 0x20) != 0 )
        v13 |= 0x20uLL;
    }
  }
  v16 = 0xFFFFC0000LL;
  if ( a3 != 2 )
    v16 = 0xFFFFFFE00LL;
  v22[0] = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (v13 >> 12) & v16, a5 | 0x84000000, v14);
  v17 = v22[0];
  if ( a3 != 1
    && _InterlockedCompareExchange(MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]), 0x80000000, 1) != 1 )
  {
    return 0LL;
  }
  v18 = 0;
  v19 = v17;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v18 = 1;
      if ( !HIBYTE(word_140C4DE08) )
      {
LABEL_20:
        if ( (v17 & 1) != 0 )
          v19 = v17 | 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_20;
    }
  }
  *a4 = v19;
  if ( v18 )
    MiWritePteShadow((__int64)a4, v19, v20);
  if ( a3 != 1 )
    *MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]) = 1;
  return 1LL;
}
