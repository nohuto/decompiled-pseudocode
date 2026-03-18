/*
 * XREFs of MiInsertLargeVadMapping @ 0x1405A7464
 * Callers:
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 *a4,
        int a5)
{
  _KPROCESS *Process; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  int v18; // ebp
  unsigned __int64 v19; // rbx
  unsigned __int64 v21[5]; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = MiLockProtoPoolPage(a2, 0LL);
  if ( !v10 )
    return 0LL;
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  LOBYTE(v12) = 17;
  v21[0] = v11;
  MiUnlockProtoPoolPage(v10, v12, v13, v14);
  v15 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v21) >> 12;
  v16 = 0xFFFFFC0000LL;
  if ( a3 != 2 )
    v16 = 0xFFFFFFFE00LL;
  v21[0] = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v16 & v15, a5 | 0x84000000);
  v17 = v21[0];
  if ( a3 != 1
    && _InterlockedCompareExchange(
         (volatile signed __int32 *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]),
         0x80000000,
         1) != 1 )
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
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_11:
        if ( (v17 & 1) != 0 )
          v19 = v17 | 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_11;
    }
  }
  *a4 = v19;
  if ( v18 )
    MiWritePteShadow((__int64)a4, v19);
  if ( a3 != 1 )
    *(_DWORD *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]) = 1;
  return 1LL;
}
