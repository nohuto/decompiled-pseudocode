/*
 * XREFs of ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x1400418C0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400053EC (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14003EB18 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x140041B4C (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z @ 0x1400445C0 (-TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z.c)
 */

__int64 __fastcall AudioDGUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  int v1; // edi
  unsigned int v2; // ebx
  _DWORD *v3; // rcx
  CSystemAudioDeviceSharedBase **ValueAt; // rax
  int v6; // [rsp+30h] [rbp-58h] BYREF
  char v7[32]; // [rsp+38h] [rbp-50h] BYREF
  int *v8; // [rsp+58h] [rbp-30h]
  __int64 v9; // [rsp+60h] [rbp-28h]

  v1 = qword_140090378;
  v2 = 0;
  if ( (_DWORD)qword_140090378 )
  {
    v3 = (_DWORD *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                     (__int64)ExceptionInfo,
                     _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
    if ( *v3 > 2u )
    {
      v6 = v1;
      v8 = &v6;
      v9 = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer((__int64)v3, byte_14007C276, 0LL, 0LL, 3, (__int64)v7);
    }
    if ( v1 )
    {
      do
      {
        ValueAt = (CSystemAudioDeviceSharedBase **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                                                     v3,
                                                     v2);
        CSystemAudioDeviceSharedBase::TrackAPOFailureUnhandled(*ValueAt, (float)v1);
        ++v2;
      }
      while ( v2 < v1 );
    }
  }
  return 0LL;
}
