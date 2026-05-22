/*
 * XREFs of ?erase@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180004A64
 * Callers:
 *     ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x180004A20 (-OnDisconnected@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  char *v3; // rsi
  char *v4; // rdi
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *result; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(char **)(a1 + 8);
  v4 = (char *)(a3 + 8);
  v8 = v3;
  if ( (char *)(a3 + 8) != v3 )
  {
    do
    {
      v9 = 0LL;
      if ( &v13 != v4 )
      {
        v9 = *(_QWORD *)v4;
        *(_QWORD *)v4 = 0LL;
      }
      v10 = *((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 1) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v4 += 8;
    }
    while ( v4 != v3 );
    v3 = *(char **)(a1 + 8);
    v8 = v3;
  }
  v11 = *((_QWORD *)v3 - 1);
  if ( v11 )
  {
    *((_QWORD *)v3 - 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v8 = *(char **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 8;
  result = a2;
  *a2 = a3;
  return result;
}
