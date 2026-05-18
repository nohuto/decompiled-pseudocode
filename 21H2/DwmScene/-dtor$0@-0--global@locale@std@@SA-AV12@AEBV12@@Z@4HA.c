/*
 * XREFs of ?dtor$0@?0??global@locale@std@@SA?AV12@AEBV12@@Z@4HA @ 0x18012CA9F
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011454 @ 0x180011454 (sub_180011454.c)
 */

__int64 __fastcall `std::locale::global'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180011454();
  }
  return result;
}
