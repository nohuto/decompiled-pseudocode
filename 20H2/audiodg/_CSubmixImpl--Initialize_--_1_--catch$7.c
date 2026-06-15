/*
 * XREFs of _CSubmixImpl::Initialize_::_1_::catch$7 @ 0x14002C220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::Initialize_::_1_::catch_7(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 104);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 56) = *v3;
  return 0LL;
}
