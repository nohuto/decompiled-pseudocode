/*
 * XREFs of ?Thunk_ProcessResult_116@?$IDragNDropContextualProcessorPrincipal_Receive@VBamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800F64B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragNDropContextualProcessorPrincipal_Receive<BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl>::Thunk_ProcessResult_116(
        BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl::ProcessResult(
           a1,
           **(_DWORD **)a2,
           *(struct Windows::UI::Internal::Input::DragOperationResult **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
