/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180029000
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18004A940 (-OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180027F80 (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18002918C (--$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@-$unordered_map@KPEAUIRawInputProvider@@U-$h.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800295C8 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029610 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x1800298E8 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180086C9C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceAttach(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IRawInputProvider *a3)
{
  __int64 v6; // rcx
  __int64 i; // rax
  __int64 v8; // rbx
  struct IRawInputProvider *v9; // r14
  struct IRawInputProvider *v10; // r14
  __int64 v11; // r9
  int InputProcessorWorker; // eax
  int v13; // ebx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v17; // rax
  int v18; // r8d
  int v19; // r9d
  int v20; // [rsp+20h] [rbp-30h]
  _QWORD v21[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  struct IRawInputProvider *v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v24 = a3;
  if ( InputETW::IsVerboseEnabled(1uLL) )
  {
    v17 = wil::details::static_lazy<InputETW>::get(
            v6,
            _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v17 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v17 + 8), 1LL) )
    {
      v23 = *((int *)a2 + 1);
      v25 = *(unsigned int *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v18,
        (unsigned int)&unk_1801C8CDE,
        v18,
        v19,
        (__int64)&v25,
        (__int64)&v23);
    }
  }
  if ( a3 )
    std::unordered_map<unsigned long,IRawInputProvider *>::_Insert_or_assign<unsigned long const &,IRawInputProvider * &>(
      (char *)this + 96,
      v21,
      a2,
      &v24);
  for ( i = *((_QWORD *)this + 10); ; i = v8 - 16 )
  {
    v8 = i;
    if ( i == *((_QWORD *)this + 9) )
    {
      v10 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v21[2] = 0LL;
      v21[0] = a2;
      v21[1] = (char *)this + 8;
      if ( !a2 || this == (InputStateManager *)-8LL )
        v11 = 2147942487LL;
      else
        v11 = 0LL;
      if ( (int)v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xDD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
          (const char *)v11,
          v20);
        __debugbreak();
      }
      InputProcessorWorker = CreateInputProcessorWorker(v21, (__int64)&v24, 0, 0);
      v13 = InputProcessorWorker;
      if ( InputProcessorWorker < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
          (const char *)(unsigned int)InputProcessorWorker,
          v20);
      else
        v13 = 0;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x253,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v13,
          v20);
      }
      else
      {
        v10 = v24;
        v13 = 0;
      }
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v13,
          v20);
        if ( v10 )
          (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)v10 + 16LL))(v10);
        return (unsigned int)v13;
      }
      v23 = 0LL;
      v24 = v10;
      v14 = *((_QWORD *)this + 10);
      if ( *((_QWORD *)this + 11) == v14 )
        goto LABEL_18;
      *(_DWORD *)v14 = *(_DWORD *)a2;
      *(_QWORD *)(v14 + 8) = v10;
      *((_QWORD *)this + 10) += 16LL;
      goto LABEL_19;
    }
    v9 = *(struct IRawInputProvider **)(i - 8);
    v24 = v9;
    if ( (*(unsigned __int8 (__fastcall **)(struct IRawInputProvider *, struct DeviceInfo *))(*(_QWORD *)v9 + 32LL))(
           v9,
           a2) )
    {
      break;
    }
  }
  (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)v9 + 8LL))(v9);
  v14 = *((_QWORD *)this + 10);
  if ( *((_QWORD *)this + 11) == v14 )
  {
LABEL_18:
    std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
      (char *)this + 72,
      v14,
      a2,
      &v24);
    goto LABEL_19;
  }
  *(_DWORD *)v14 = *(_DWORD *)a2;
  *(_QWORD *)(v14 + 8) = v9;
  *((_QWORD *)this + 10) += 16LL;
LABEL_19:
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 24LL))(
          *((_QWORD *)this + 5),
          a2);
  v13 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x143,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)(unsigned int)v15,
    v20);
  return (unsigned int)v13;
}
