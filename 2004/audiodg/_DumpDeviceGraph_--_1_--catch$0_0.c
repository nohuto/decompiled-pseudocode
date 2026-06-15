/*
 * XREFs of _DumpDeviceGraph_::_1_::catch$0_0 @ 0x1400413F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DumpDeviceGraph_::_1_::catch_0_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return 0LL;
}
