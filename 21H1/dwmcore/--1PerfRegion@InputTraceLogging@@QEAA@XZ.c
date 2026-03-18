/*
 * XREFs of ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18003531C
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@KAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001E320 (-ManipulationThreadCallback@CManipulationManager@@KAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x180034610 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180034B70 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x1802269B4 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180035384 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180223404 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::PerfRegion::~PerfRegion(InputTraceLogging::PerfRegion *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                     this,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v2 > 6u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    v3 = *(_QWORD *)this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v2,
      (__int64)&v3);
  }
}
