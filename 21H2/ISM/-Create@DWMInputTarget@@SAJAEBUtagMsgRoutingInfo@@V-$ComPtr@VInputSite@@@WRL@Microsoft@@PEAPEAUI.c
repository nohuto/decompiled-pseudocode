/*
 * XREFs of ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800B6784
 * Callers:
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1801382B0 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 *     ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180176D30 (-OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x18017B6C4 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x180029ED8 (-CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::Create(int a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = *a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v10);
  v6 = DWMInputTarget::CreateHelper(a1, &v10, 0, 0, a3);
  v7 = *a2;
  v8 = v6;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v8;
}
