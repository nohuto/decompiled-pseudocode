/*
 * XREFs of _CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::AddInterface_::_1_::catch$3 @ 0x1800C3AFD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::AddInterface_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 144) = *v3;
  return 0LL;
}
