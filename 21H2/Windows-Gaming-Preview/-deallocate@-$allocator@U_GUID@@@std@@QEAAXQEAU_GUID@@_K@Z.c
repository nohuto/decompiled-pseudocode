/*
 * XREFs of ?deallocate@?$allocator@U_GUID@@@std@@QEAAXQEAU_GUID@@_K@Z @ 0x1800189A0
 * Callers:
 *     _std::vector__GUID_std::allocator__GUID___::_Reallocate_exactly_::_1_::catch$0 @ 0x180046893 (_std--vector__GUID_std--allocator__GUID___--_Reallocate_exactly_--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<_GUID>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  const struct std::nothrow_t *v3; // r8
  void *v4; // rax
  __int64 v5; // rcx

  v3 = (const struct std::nothrow_t *)(16 * a3);
  v4 = a2;
  if ( (unsigned __int64)v3 >= 0x1000 )
  {
    v5 = *((_QWORD *)a2 - 1);
    v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, a2);
      __debugbreak();
      JUMPOUT(0x1800189E8LL);
    }
    v4 = (void *)*((_QWORD *)a2 - 1);
  }
  operator delete(v4, v3);
}
