/*
 * XREFs of ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x18008D220
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x18008B1E8 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800956B0 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18008CD58 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_polic.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHeadUpdateListener::AddHeadEventOccurred(
        MPCHeadUpdateListener *this,
        struct IHeadEventHandler *a2,
        unsigned __int8 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v7 = (*(_QWORD *)this)++;
  *(_QWORD *)a3 = v7;
  std::unordered_map<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::_Try_emplace<unsigned __int64 const &,>(
    (__int64)this + 8,
    (__int64)v9,
    a3);
  v8 = *(_QWORD *)(v9[0] + 24LL);
  *(_QWORD *)(v9[0] + 24LL) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IHeadEventHandler *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v6 )
    LeaveCriticalSection(v6);
}
