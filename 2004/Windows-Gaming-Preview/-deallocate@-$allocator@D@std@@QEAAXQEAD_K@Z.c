/*
 * XREFs of ?deallocate@?$allocator@D@std@@QEAAXQEAD_K@Z @ 0x1800185C4
 * Callers:
 *     sub_1800465F7 @ 0x1800465F7 (sub_1800465F7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::allocator<char>::deallocate(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( a3 >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    a3 += 39LL;
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      __debugbreak();
      JUMPOUT(0x180018608LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3, a3);
}
