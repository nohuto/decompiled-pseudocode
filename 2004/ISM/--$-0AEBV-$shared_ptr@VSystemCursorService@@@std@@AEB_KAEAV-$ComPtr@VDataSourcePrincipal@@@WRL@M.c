/*
 * XREFs of ??$?0AEBV?$shared_ptr@VSystemCursorService@@@std@@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@?$_Ref_count_obj@VSystemCursorShape@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService@@@1@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18013D584
 * Callers:
 *     ??$make_shared@VSystemCursorShape@@AEBV?$shared_ptr@VSystemCursorService@@@std@@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VSystemCursorShape@@@0@AEBV?$shared_ptr@VSystemCursorService@@@0@AEB_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18013DFC8 (--$make_shared@VSystemCursorShape@@AEBV-$shared_ptr@VSystemCursorService@@@std@@AEB_KAEAV-$ComPt.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<SystemCursorShape>::_Ref_count_obj<SystemCursorShape>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        void (__fastcall ****a4)(_QWORD))
{
  void (__fastcall ***v6)(_QWORD); // rbp
  void (__fastcall ***v8)(_QWORD); // rbx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rax
  void (__fastcall ***v13)(_QWORD); // [rsp+40h] [rbp+8h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<SystemCursorShape>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  v6 = *a4;
  v8 = *a4;
  v13 = *a4;
  if ( *a4 )
    (**v6)(v6);
  v9 = *a3;
  v10 = (volatile signed __int32 *)a2[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 2);
    v10 = (volatile signed __int32 *)a2[1];
    v8 = v13;
  }
  v11 = *a2;
  *(_QWORD *)(a1 + 16) = v9;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v8 = v13;
  }
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 40) = v10;
  *(_QWORD *)(a1 + 48) = v8;
  if ( v6 )
    (**v8)(v8);
  if ( v10 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
  if ( v6 )
    (*v8)[1](v8);
  return a1;
}
