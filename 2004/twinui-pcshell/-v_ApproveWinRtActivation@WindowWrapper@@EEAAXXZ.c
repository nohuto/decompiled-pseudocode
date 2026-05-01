/*
 * XREFs of ?v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ @ 0x180070500
 * Callers:
 *     <none>
 * Callees:
 *     ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x1800705CC (-SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapper::v_ApproveWinRtActivation(WindowWrapper *this)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 216LL))(*((_QWORD *)this + 36));
  v2 = *(_OWORD *)((char *)this + 708);
  WindowWrapper::SetImageLocationNoLock((char *)this - 8, &v2);
}
