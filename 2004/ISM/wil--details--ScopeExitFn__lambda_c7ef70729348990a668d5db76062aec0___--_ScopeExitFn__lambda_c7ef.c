/*
 * XREFs of wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___ @ 0x18009D3BC
 * Callers:
 *     _GazeHidDevice::TrySetTrackingEnabled_::_1_::dtor$0 @ 0x18009D92F (_GazeHidDevice--TrySetTrackingEnabled_--_1_--dtor$0.c)
 *     _GazeHidDevice::TryUpdateCalibrationState_::_1_::dtor$0 @ 0x18009DA73 (_GazeHidDevice--TryUpdateCalibrationState_--_1_--dtor$0.c)
 *     _GazeHidDevice::TryUpdateDisplayMapping_::_1_::dtor$0 @ 0x18009DC88 (_GazeHidDevice--TryUpdateDisplayMapping_--_1_--dtor$0.c)
 *     _GazeHidParser::CreateReportForProperty_::_1_::dtor$0 @ 0x180129767 (_GazeHidParser--CreateReportForProperty_--_1_--dtor$0.c)
 *     _GazeHidParser::FindCollectionForProperty_::_1_::dtor$0 @ 0x1801298E2 (_GazeHidParser--FindCollectionForProperty_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v2 = **(void ***)a1;
    if ( v2 )
      operator delete(v2, a2);
  }
}
