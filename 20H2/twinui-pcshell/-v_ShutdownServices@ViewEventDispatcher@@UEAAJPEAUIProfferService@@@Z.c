/*
 * XREFs of ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1802AD9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x1802AB5B4 (-_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x1802AD130 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::v_ShutdownServices(ViewEventDispatcher *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 i; // rdi

  v3 = (RTL_SRWLOCK *)((char *)this + 160);
  AcquireSRWLockExclusive((PSRWLOCK)this + 20);
  for ( i = *((_QWORD *)this + 30); i; --i )
    ViewEventDispatcher::_RemoveValidView((ViewEventDispatcher *)((char *)this - 120), i - 1);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  ViewEventDispatcher::_FlushRemovedPendingActivations((ViewEventDispatcher *)((char *)this - 120));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  return 0LL;
}
