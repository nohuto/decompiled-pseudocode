/*
 * XREFs of _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::catch$4 @ 0x180106A99
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 184);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 248) = *v3;
  return 0LL;
}
