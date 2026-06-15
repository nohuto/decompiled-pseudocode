/*
 * XREFs of _CMonitor::ProcessRenderBufferReadyEvent_::_1_::catch$2 @ 0x1801040C9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::ProcessRenderBufferReadyEvent_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 120);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 256) = *v3;
  return 0LL;
}
