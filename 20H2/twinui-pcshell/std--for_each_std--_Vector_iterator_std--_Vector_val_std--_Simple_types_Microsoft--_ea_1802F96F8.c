/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___ @ 0x1802F96F8
 * Callers:
 *     ?v_DismissView@XamlAllUpViewHost@@MEAAXXZ @ 0x18030E0C0 (-v_DismissView@XamlAllUpViewHost@@MEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x180300894 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___(
        __int64 a1,
        MonitorFrame **a2,
        MonitorFrame **a3)
{
  MonitorFrame **v4; // rsi
  MonitorFrame *v6; // rdi
  RTL_SRWLOCK *v7; // rbp
  MonitorFrame *v8; // rcx
  MonitorFrame *v10; // [rsp+50h] [rbp+8h] BYREF
  MonitorFrame **v11; // [rsp+58h] [rbp+10h]
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+18h]

  v4 = a2;
  if ( a2 != a3 )
  {
    v11 = &v10;
    do
    {
      v10 = *v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
      v6 = v10;
      v7 = (RTL_SRWLOCK *)((char *)v10 + 184);
      AcquireSRWLockExclusive((PSRWLOCK)v10 + 23);
      v12 = v7;
      MonitorFrame::DestroyInternal(v6);
      if ( v7 )
        ReleaseSRWLockExclusive(v7);
      v8 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      ++v4;
    }
    while ( v4 != a3 );
  }
  return a1;
}
