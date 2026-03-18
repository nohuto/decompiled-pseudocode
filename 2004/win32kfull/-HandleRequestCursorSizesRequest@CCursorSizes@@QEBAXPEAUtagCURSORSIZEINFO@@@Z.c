/*
 * XREFs of ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C011018C
 * Callers:
 *     NtUserGetRequiredCursorSizes @ 0x1C01100E0 (NtUserGetRequiredCursorSizes.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0102ADC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCursorSizes::HandleRequestCursorSizesRequest(CCursorSizes *this, struct tagCURSORSIZEINFO *a2)
{
  CCursorSizes *v2; // rdi
  CPushLock *v4; // rbx

  v2 = gpCursorSizes;
  v4 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v4 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v4)(v4) )
      CPushLock::ReleaseLock(v4);
  }
  *(_OWORD *)a2 = *(_OWORD *)((char *)v2 + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)v2 + 40);
  *((_QWORD *)a2 + 4) = *((_QWORD *)v2 + 7);
  CPushLock::ReleaseLock(v4);
}
