/*
 * XREFs of ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180036F94
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180037534 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?erase@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x1802AC99C (-erase@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceD.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1802AAEC8 (--$move@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$checked_ar.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  bool v10; // zf
  __int64 v11; // r8
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v4 = *a1;
  v6 = (v3 - *a1) >> 2;
  v7 = a2 + a3;
  v8 = 0xAAAAAAAAAAAAAAABuLL * v6;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v11 = v4 + 12 * v8;
    if ( v10 )
      goto LABEL_3;
  }
  *(_QWORD *)&v13 = v4;
  *((_QWORD *)&v13 + 1) = v8;
  if ( a2 && (!v4 || a2 < 0 || v8 < a2) )
  {
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
    JUMPOUT(0x18012BA8ALL);
  }
  v14 = a2;
  v15 = v13;
  v16 = a2;
  ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
    &v13,
    v4 + 12 * v7,
    v11,
    &v15);
  v3 = a1[1];
LABEL_3:
  result = 12 * a3;
  a1[1] = v3 - 12 * a3;
  return result;
}
