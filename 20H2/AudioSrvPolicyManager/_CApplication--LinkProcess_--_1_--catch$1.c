/*
 * XREFs of _CApplication::LinkProcess_::_1_::catch$1 @ 0x18003B976
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::LinkProcess_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 32);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return 0LL;
}
