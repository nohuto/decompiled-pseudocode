/*
 * XREFs of sub_18012525E @ 0x18012525E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18012525E(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 72) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(*(_QWORD *)(a2 + 64) + 152LL);
  }
  return result;
}
