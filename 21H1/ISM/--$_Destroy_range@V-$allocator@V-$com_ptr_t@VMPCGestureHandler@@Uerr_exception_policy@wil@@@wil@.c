/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18006A48C
 * Callers:
 *     _std::vector_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__&__::_1_::catch$33 @ 0x18006A5EA (_std--vector_wil--com_ptr_t_IHeadEventHandler_wil--err_exception_policy__std--allocator_wil--com.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18006B104 (--$_Uninitialized_move@PEAV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@PEAV.c)
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x18006B498 (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18006C2A8 (-_Change_array@-$vector@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 *     _std::vector_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy__const_&__::_1_::catch$33 @ 0x18007A75D (_std--vector_wil--com_ptr_t_IMPCInputProviderBase_wil--err_exception_policy__std--allocator_wil-.c)
 *     ??1?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18007AC80 (--1-$vector@V-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18007ACD4 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x18008DBB4 (-OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002828C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
