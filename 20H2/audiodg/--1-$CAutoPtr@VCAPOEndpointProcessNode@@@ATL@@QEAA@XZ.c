/*
 * XREFs of ??1?$CAutoPtr@VCAPOEndpointProcessNode@@@ATL@@QEAA@XZ @ 0x14004643C
 * Callers:
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$8 @ 0x14002C350 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$8.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$10 @ 0x14002C390 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$10.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x14002CB40 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$3 @ 0x14002CB80 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$3.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$8 @ 0x14002CCA0 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$2 @ 0x14002CE90 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$3 @ 0x14002CEB0 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$4 @ 0x14002CED0 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$5 @ 0x14002CEF0 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$5.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$10 @ 0x14002CF70 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$12 @ 0x14002CF90 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$12.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$3 @ 0x14002D180 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$7 @ 0x14002D200 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$8 @ 0x14002D220 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$1 @ 0x140046C10 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$2 @ 0x140046C1C (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x1400471B8 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x1400471D0 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x1400471DC (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 *     _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$0 @ 0x1400481B5 (_CAPOEndpointProcessNode--CreateAPOEndpointProcessNode_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
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
