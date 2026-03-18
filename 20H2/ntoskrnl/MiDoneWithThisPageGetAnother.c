/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x140558668
 * Callers:
 *     MiUpdateForkMaps @ 0x140559CD0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiFinishLastForkPageTable @ 0x140558BD0 (MiFinishLastForkPageTable.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  signed __int32 v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // r15
  LONG *SharedVm; // rbx
  KIRQL v13; // al
  __int64 Page; // rax
  __int64 result; // rax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2 + 1664;
  v5 = *a1;
  v16 = 0LL;
  if ( v5 != -1 )
    MiFinishLastForkPageTable(a1, v5);
  MiInitializePageColorBase(v4, 0, (__int64)&v16);
  v9 = _InterlockedExchangeAdd((volatile signed __int32 *)v16, 1u);
  v10 = HIDWORD(v16) | v9 & DWORD2(v16);
  v11 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  while ( 1 )
  {
    Page = MiGetPage(v11, v10, 770LL);
    *a1 = Page;
    if ( Page != -1 )
      break;
    MiUnlockWorkingSetExclusive(v4, a4);
    MiWaitForFreePage(v11);
    SharedVm = MiGetSharedVm(v4);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    a4 = v13;
  }
  result = 6 * Page;
  *(_QWORD *)(8 * result - 0x58000000000LL + 16) &= 0xFFFFFFFFFC00FFFFuLL;
  return result;
}
