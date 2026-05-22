/*
 * XREFs of ?Thunk_StartDrag_107@?$IDragNDropContextualProcessorPrincipal_Receive@VBamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800F6120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragNDropContextualProcessorPrincipal_Receive<BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl>::Thunk_StartDrag_107(
        BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl::StartDrag(
           a1,
           **(_DWORD **)a2,
           **(_QWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
