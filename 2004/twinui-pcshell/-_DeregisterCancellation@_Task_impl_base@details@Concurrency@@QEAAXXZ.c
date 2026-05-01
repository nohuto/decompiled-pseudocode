/*
 * XREFs of ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x1803278F8
 * Callers:
 *     ??1?$_Task_impl@E@details@Concurrency@@UEAA@XZ @ 0x180324E04 (--1-$_Task_impl@E@details@Concurrency@@UEAA@XZ.c)
 *     ??1?$_Task_impl@_N@details@Concurrency@@UEAA@XZ @ 0x180324E40 (--1-$_Task_impl@_N@details@Concurrency@@UEAA@XZ.c)
 * Callees:
 *     ?_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x180327754 (-_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenReg.c)
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x180327FB4 (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 */

void __fastcall Concurrency::details::_Task_impl_base::_DeregisterCancellation(
        Concurrency::details::_Task_impl_base *this)
{
  struct Concurrency::details::_CancellationTokenRegistration *v1; // rdx

  v1 = (struct Concurrency::details::_CancellationTokenRegistration *)*((_QWORD *)this + 16);
  if ( v1 )
  {
    Concurrency::details::_CancellationTokenState::_DeregisterCallback(
      *((Concurrency::details::_CancellationTokenState **)this + 15),
      v1);
    Concurrency::details::_RefCounter::_Release(*((Concurrency::details::_RefCounter **)this + 16));
    *((_QWORD *)this + 16) = 0LL;
  }
}
