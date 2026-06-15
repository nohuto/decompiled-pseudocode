/*
 * XREFs of ??1?$CAutoPtr@VCAPOEndpointProcessNode@@@ATL@@QEAA@XZ @ 0x1400465CC
 * Callers:
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$8 @ 0x14002C420 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$8.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$10 @ 0x14002C460 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$10.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x14002CC10 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$3 @ 0x14002CC50 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$3.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$8 @ 0x14002CD70 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$2 @ 0x14002CF60 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$3 @ 0x14002CF80 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$4 @ 0x14002CFA0 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$5 @ 0x14002CFC0 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$5.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$10 @ 0x14002D040 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$12 @ 0x14002D060 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$12.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$3 @ 0x14002D250 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$7 @ 0x14002D2D0 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$8 @ 0x14002D2F0 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$1 @ 0x140046DA0 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$2 @ 0x140046DAC (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x140047348 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x140047360 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x14004736C (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 *     _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$0 @ 0x140048345 (_CAPOEndpointProcessNode--CreateAPOEndpointProcessNode_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<CAPOEndpointProcessNode>::~CAutoPtr<CAPOEndpointProcessNode>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
