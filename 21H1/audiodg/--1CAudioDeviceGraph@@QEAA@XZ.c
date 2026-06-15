/*
 * XREFs of ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140001A0C
 * Callers:
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140001874 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComCreator_ATL::CComObject_CAudioDeviceGraph___::CreateInstance_::_1_::dtor$1 @ 0x140022988 (_ATL--CComCreator_ATL--CComObject_CAudioDeviceGraph___--CreateInstance_--_1_--dtor$1.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14003041C (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x140030460 (--1-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x1400018CC (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400019B0 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x14000538C (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140034408 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

void __fastcall CAudioDeviceGraph::~CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF

  CAudioDeviceGraph::Cleanup(this);
  v3 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                     v2,
                     _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    tlgWriteTransfer_EtwEventWriteTransfer(v3, (unsigned int)&unk_140071E28, (_DWORD)this + 352, 0, 2, (__int64)v13);
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (void *)*((_QWORD *)this + 49);
  if ( v5 )
    CoTaskMemFree(v5);
  v6 = *((_QWORD *)this + 48);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 46);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 43);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (void *)*((_QWORD *)this + 40);
  if ( v9 )
  {
    free(v9);
    *((_QWORD *)this + 40) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 41);
  if ( v10 )
  {
    free(v10);
    *((_QWORD *)this + 41) = 0LL;
  }
  *((_DWORD *)this + 84) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 168);
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 18);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
