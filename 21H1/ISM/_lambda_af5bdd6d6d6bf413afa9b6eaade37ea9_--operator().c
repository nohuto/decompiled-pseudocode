/*
 * XREFs of _lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_::operator() @ 0x1800CEAF4
 * Callers:
 *     wil::details::lambda_call__lambda_af5bdd6d6d6bf413afa9b6eaade37ea9___::_lambda_call__lambda_af5bdd6d6d6bf413afa9b6eaade37ea9___ @ 0x1800CE4FC (wil--details--lambda_call__lambda_af5bdd6d6d6bf413afa9b6eaade37ea9___--_lambda_call__lambda_af5b.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800D0EDC (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069708 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18007FE2C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C66D8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800D1EEC (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     ?Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W_N1@Z @ 0x1800D2CF8 (-Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_::operator()(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 *v3; // rbx
  __int64 v4; // rax
  PCWSTR v5; // rbx
  PCWSTR StringRawBuffer; // rsi
  HSTRING v7; // rcx
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD v22[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+90h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+98h] [rbp+28h]

  if ( **(_BYTE **)a1 )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 432LL);
    EnterCriticalSection(v2);
    v24 = v2;
    v3 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 472LL);
    v4 = *v3;
    v23 = *v3;
    while ( (__int64 *)v4 != v3 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 40) + 168LL))(*(_QWORD *)(v4 + 40), 1LL);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v23);
      v4 = v23;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
  }
  v5 = L"UndefinedDeviceInterfacePath";
  StringRawBuffer = L"UndefinedDeviceInterfacePath";
  v7 = **(HSTRING **)(a1 + 16);
  if ( v7 )
    StringRawBuffer = WindowsGetStringRawBuffer(v7, 0LL);
  v8 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v8 + 152) )
  {
    v5 = WindowsGetStringRawBuffer(*(HSTRING *)(v8 + 152), 0LL);
    v8 = *(_QWORD *)(a1 + 8);
  }
  v22[0] = off_1801B1A48;
  v22[1] = v8;
  v22[7] = v22;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(v8, v22);
  v9 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 40), 0LL);
  SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::Stop(
    *(SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged **)(a1 + 24),
    **(_DWORD **)(a1 + 32),
    v9,
    **(_BYTE **)(a1 + 48),
    **(_BYTE **)(a1 + 56));
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v10) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v11,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    v13 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
            v12,
            _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v13[1] > 4u && tlgKeywordOn(v13[1], 2LL) )
    {
      v23 = (__int64)StringRawBuffer;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v14,
        (unsigned __int8 *)dword_1801CC825,
        v14,
        v15,
        (const wchar_t **)&v23);
    }
  }
  LOBYTE(v16) = SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v11);
  if ( (_BYTE)v16 )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v17,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    v16 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
            v18,
            _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v16[1] > 4u )
    {
      LOBYTE(v16) = tlgKeywordOn(v16[1], 2LL);
      if ( (_BYTE)v16 )
      {
        v23 = (__int64)v5;
        LOBYTE(v16) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                        v19,
                        (unsigned __int8 *)dword_1801CBD3B,
                        v19,
                        v20,
                        (const wchar_t **)&v23);
      }
    }
  }
  return (char)v16;
}
