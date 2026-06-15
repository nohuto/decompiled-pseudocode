/*
 * XREFs of ?dtor$0@?0??name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ@4HA_0 @ 0x1800C9EDE
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B7A3C @ 0x1800B7A3C (sub_1800B7A3C.c)
 */

__int64 __fastcall `std::locale::name'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_1800B7A3C((_QWORD *)(a2 + 80));
  }
  return result;
}
