/*
 * XREFs of ??1_Task_impl_base@details@Concurrency@@UEAA@XZ @ 0x180325088
 * Callers:
 *     ??1?$_Task_impl@E@details@Concurrency@@UEAA@XZ @ 0x180324E04 (--1-$_Task_impl@E@details@Concurrency@@UEAA@XZ.c)
 *     ??1?$_Task_impl@_N@details@Concurrency@@UEAA@XZ @ 0x180324E40 (--1-$_Task_impl@_N@details@Concurrency@@UEAA@XZ.c)
 *     ??_G_Task_impl_base@details@Concurrency@@UEAAPEAXI@Z @ 0x180325D50 (--_G_Task_impl_base@details@Concurrency@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800CD6D4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x180327FB4 (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 */

void __fastcall Concurrency::details::_Task_impl_base::~_Task_impl_base(Concurrency::details::_Task_impl_base *this)
{
  Concurrency::details::_RefCounter *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  *(_QWORD *)this = &Concurrency::details::_Task_impl_base::`vftable';
  v2 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 15);
  if ( v2 != (Concurrency::details::_RefCounter *)2 )
    Concurrency::details::_RefCounter::_Release(v2);
  std::vector<void *>::_Tidy((__int64)this + 328);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 37);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  _Mtx_destroy_in_situ((Concurrency::details::_Task_impl_base *)((char *)this + 208));
  _Cnd_destroy_in_situ((Concurrency::details::_Task_impl_base *)((char *)this + 136));
  _Mtx_destroy_in_situ((Concurrency::details::_Task_impl_base *)((char *)this + 32));
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
