/*
 * XREFs of ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800575CC
 * Callers:
 *     ?erase@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x180054B48 (-erase@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceD.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18005A57C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180266310 (--$uninitialized_copy@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 result; // rax
  bool v13; // sf
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v4 = a2;
  v5 = *a1;
  v6 = v3 - *a1;
  v9 = a2 + a3;
  v10 = v6 / 12;
  if ( v9 > v6 / 12 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_5:
    *(_QWORD *)&v14 = v5;
    *((_QWORD *)&v14 + 1) = v10;
    v13 = v4 < 0;
    if ( v4 )
    {
      if ( !v5 )
      {
LABEL_12:
        _o__invalid_parameter_noinfo_noreturn(v9, v10);
        __debugbreak();
LABEL_13:
        v15 = v4;
        v16 = v14;
        v17 = v4;
        ((void (__fastcall *)(__int128 *, unsigned __int64, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
          &v14,
          v5 + 12 * v9,
          v11,
          &v16);
        v3 = a1[1];
        goto LABEL_3;
      }
      v13 = v4 < 0;
    }
    if ( (!v13 || !v4) && (v4 <= 0 || v10 >= v4) )
      goto LABEL_13;
    goto LABEL_12;
  }
  v11 = v5 + 12 * v10;
  if ( v9 != v6 / 12 )
    goto LABEL_5;
LABEL_3:
  result = 12 * a3;
  a1[1] = v3 - 12 * a3;
  return result;
}
