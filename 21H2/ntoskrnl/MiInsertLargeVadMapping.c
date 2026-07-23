/*
 * XREFs of MiInsertLargeVadMapping @ 0x1405489E0
 * Callers:
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
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
  unsigned __int64 v11; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  int v15; // esi
  unsigned __int64 v16; // rbx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = MiLockProtoPoolPage(a2, 0LL);
  if ( !v10 )
    return 0LL;
  v18[0] = MI_READ_PTE_LOCK_FREE(a2);
  v11 = v18[0];
  MiUnlockProtoPoolPage(v10, 0x11u);
  if ( MiPteInShadowRange((unsigned __int64)v18)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)v18 >> 3) & 0x1FF)) & 0x20) != 0 )
        v11 |= 0x20uLL;
    }
  }
  v13 = 0xFFFFC0000LL;
  if ( a3 != 2 )
    v13 = 0xFFFFFFE00LL;
  v18[0] = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (v11 >> 12) & v13, a5 | 0x84000000);
  v14 = v18[0];
  if ( a3 != 1
    && _InterlockedCompareExchange(MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]), 0x80000000, 1) != 1 )
  {
    return 0LL;
  }
  v15 = 0;
  v16 = v14;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
LABEL_20:
        if ( (v14 & 1) != 0 )
          v16 = v14 | 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_20;
    }
  }
  *a4 = v16;
  if ( v15 )
    MiWritePteShadow((__int64)a4, v16);
  if ( a3 != 1 )
    *MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]) = 1;
  return 1LL;
}
