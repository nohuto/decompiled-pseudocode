/*
 * XREFs of ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x18007AB20
 * Callers:
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$4 @ 0x18007A9D5 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$4.c)
 *     _MPCHandProcessor::MPCHandProcessor_::_1_::dtor$3 @ 0x18007D4BF (_MPCHandProcessor--MPCHandProcessor_--_1_--dtor$3.c)
 * Callees:
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007ACD0 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

__int64 __fastcall std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()();
  return result;
}
