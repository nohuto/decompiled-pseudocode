/*
 * XREFs of sub_1800D51D8 @ 0x1800D51D8
 * Callers:
 *     sub_180107A1C @ 0x180107A1C (sub_180107A1C.c)
 *     sub_1801219A0 @ 0x1801219A0 (sub_1801219A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D51D8(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
