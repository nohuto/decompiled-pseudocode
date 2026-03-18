/*
 * XREFs of MiInsertLargeVadMapping @ 0x140542C80
 * Callers:
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  int v20; // esi
  unsigned __int64 v21; // rbx
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = MiLockProtoPoolPage(a2, 0LL);
  if ( !v10 )
    return 0LL;
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  LOBYTE(v12) = 17;
  v23[0] = v11;
  v13 = v11;
  MiUnlockProtoPoolPage(v10, v12, v14, v15);
  if ( MiPteInShadowRange((unsigned __int64)v23)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)v23 >> 3) & 0x1FF)) & 0x20) != 0 )
        v13 |= 0x20uLL;
    }
  }
  v18 = 0xFFFFC0000LL;
  if ( a3 != 2 )
    v18 = 0xFFFFFFE00LL;
  v23[0] = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (v13 >> 12) & v18, a5 | 0x84000000, v16);
  v19 = v23[0];
  if ( a3 != 1
    && _InterlockedCompareExchange(MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]), 0x80000000, 1) != 1 )
  {
    return 0LL;
  }
  v20 = 0;
  v21 = v19;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v20 = 1;
      if ( !HIBYTE(word_140C4DF48) )
      {
LABEL_20:
        if ( (v19 & 1) != 0 )
          v21 = v19 | 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_20;
    }
  }
  *a4 = v21;
  if ( v20 )
    MiWritePteShadow((__int64)a4, v21);
  if ( a3 != 1 )
    *MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]) = 1;
  return 1LL;
}
