/*
 * XREFs of ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBUComputeScribbleLatencyData@@@Z @ 0x1801D7DE8
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801EA384 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     McTemplateU0qqxx_EventWriteTransfer @ 0x180193E88 (McTemplateU0qqxx_EventWriteTransfer.c)
 *     ??$?0AEBUComputeScribbleLatencyData@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UComputeScribbleLatencyData@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UComputeScribbleLatencyData@@PEAX@std@@@1@AEBUComputeScribbleLatencyData@@@Z @ 0x1801D7D84 (--$-0AEBUComputeScribbleLatencyData@@@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCompu.c)
 */

void __fastcall CTelemetryComputeScribbleAggregator::AddLatencyData(const struct ComputeScribbleLatencyData *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp-10h]
  RTL_SRWLOCK *v8; // [rsp+58h] [rbp+10h] BYREF

  AcquireSRWLockExclusive(&stru_1803D7C88);
  v8 = &stru_1803D7C88;
  if ( *((_QWORD *)&xmmword_1803D3808 + 1) < 0xAuLL )
  {
    v3 = xmmword_1803D3808;
    if ( *((_QWORD *)&xmmword_1803D3808 + 1) == 0x38E38E38E38E38ELL )
      std::_Xlength_error("list too long");
    std::_List_node_emplace_op2<std::allocator<std::_List_node<ComputeScribbleLatencyData,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<ComputeScribbleLatencyData,void *>>>(
      &v6,
      (__int64)&xmmword_1803D3808,
      (__int64)a1);
    ++*((_QWORD *)&xmmword_1803D3808 + 1);
    v4 = v7;
    v5 = *(_QWORD **)(v3 + 8);
    *v7 = v3;
    v4[1] = v5;
    *(_QWORD *)(v3 + 8) = v4;
    *v5 = v4;
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
  {
    McTemplateU0qqxx_EventWriteTransfer(
      v2,
      &EVTDESC_COMPUTESCRIBBLE_TELEMETRYDROPPED,
      *(unsigned int *)a1,
      *((_DWORD *)a1 + 1),
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 4));
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
}
