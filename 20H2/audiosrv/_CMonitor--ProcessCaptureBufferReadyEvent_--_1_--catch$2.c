/*
 * XREFs of _CMonitor::ProcessCaptureBufferReadyEvent_::_1_::catch$2 @ 0x180102EE7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::ProcessCaptureBufferReadyEvent_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 152);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return 0LL;
}
