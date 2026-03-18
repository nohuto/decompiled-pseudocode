/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x1801D0744
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180024324 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x1801D08B8 (--$_Uninitialized_move@PEAV-$ComPtr@VCPathData@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$ComPtr@V.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@_K1@Z @ 0x1801D135C (-_Change_array@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathData@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
