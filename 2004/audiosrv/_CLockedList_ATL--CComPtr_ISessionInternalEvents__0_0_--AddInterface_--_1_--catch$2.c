/*
 * XREFs of _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::AddInterface_::_1_::catch$2 @ 0x18007BF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::AddInterface_::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 32);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return 0LL;
}
