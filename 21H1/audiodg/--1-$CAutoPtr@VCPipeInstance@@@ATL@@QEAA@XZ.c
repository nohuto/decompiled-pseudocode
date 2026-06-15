/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140033328
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$0 @ 0x140021B10 (_CSubmixImpl--CreateStream_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$14 @ 0x140022520 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$14.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$10 @ 0x1400227D0 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$4 @ 0x14003C4F8 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x14003CAD9 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$0 @ 0x140042E37 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$0.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x14004478B (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(__int64 a1)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1);
}
