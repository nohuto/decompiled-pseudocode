/*
 * XREFs of sub_18002D3B0 @ 0x18002D3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002D3B0(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
