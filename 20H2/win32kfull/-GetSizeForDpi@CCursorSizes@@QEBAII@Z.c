/*
 * XREFs of ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0113B54
 * Callers:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0095764 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010347C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCursorSizes::GetSizeForDpi(CCursorSizes *this, unsigned int a2)
{
  CCursorSizes *v2; // rsi
  CPushLock *v4; // rbx
  unsigned __int64 v5; // rax
  unsigned int v6; // edi

  v2 = gpCursorSizes;
  v4 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v4 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v4)(v4) )
      CPushLock::ReleaseLock(v4);
  }
  if ( a2 >= 0x90 )
  {
    if ( a2 >= 0xC0 )
    {
      if ( a2 >= 0x120 )
        v5 = (-(__int64)(a2 < 0x180) & 0xFFFFFFFFFFFFFFF8uLL) + 60;
      else
        v5 = 44LL;
    }
    else
    {
      v5 = 36LL;
    }
  }
  else
  {
    v5 = 28LL;
  }
  v6 = *(_DWORD *)((char *)v2 + v5);
  CPushLock::ReleaseLock(v4);
  return v6;
}
