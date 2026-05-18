/*
 * XREFs of ?deallocate@?$allocator@_W@std@@QEAAXQEA_W_K@Z @ 0x1800FC0E0
 * Callers:
 *     sub_18012F48A @ 0x18012F48A (sub_18012F48A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::allocator<wchar_t>::deallocate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(2 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 2 * a3 + 39);
      JUMPOUT(0x1800FC11ELL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
