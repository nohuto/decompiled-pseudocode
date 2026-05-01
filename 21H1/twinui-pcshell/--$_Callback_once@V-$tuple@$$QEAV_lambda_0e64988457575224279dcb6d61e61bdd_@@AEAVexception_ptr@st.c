/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_0e64988457575224279dcb6d61e61bdd_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180301F60
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x18008CE40 (atexit.c)
 *     _Init_thread_footer @ 0x18008DC88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008DCF0 (_Init_thread_header.c)
 */

__int64 std::_Callback_once<std::tuple<_lambda_0e64988457575224279dcb6d61e61bdd_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>()
{
  if ( __TSS0__1___GetStaticAmbientSchedulerStorage_details_Concurrency__YAPEAV__shared_ptr_Uscheduler_interface_Concurrency___std__XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1___GetStaticAmbientSchedulerStorage_details_Concurrency__YAPEAV__shared_ptr_Uscheduler_interface_Concurrency___std__XZ_4HA);
    if ( __TSS0__1___GetStaticAmbientSchedulerStorage_details_Concurrency__YAPEAV__shared_ptr_Uscheduler_interface_Concurrency___std__XZ_4HA == -1 )
    {
      `Concurrency::details::_GetStaticAmbientSchedulerStorage'::`2'::_S_scheduler = 0LL;
      atexit(`Concurrency::details::_GetStaticAmbientSchedulerStorage'::`2'::`dynamic atexit destructor for '_S_scheduler'');
      Init_thread_footer(&__TSS0__1___GetStaticAmbientSchedulerStorage_details_Concurrency__YAPEAV__shared_ptr_Uscheduler_interface_Concurrency___std__XZ_4HA);
    }
  }
  `Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_S_scheduler_address = (__int64)&`Concurrency::details::_GetStaticAmbientSchedulerStorage'::`2'::_S_scheduler;
  return 1LL;
}
