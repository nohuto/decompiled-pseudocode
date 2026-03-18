/*
 * XREFs of ?clear_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EB2D8
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1800EAF3C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 *     ??_GCCheckMPOCache@@QEAAPEAXI@Z @ 0x1800EB0EC (--_GCCheckMPOCache@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@0V12@@Z @ 0x1800EB038 (--$uninitialized_copy@V-$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@.c)
 */

void __fastcall detail::vector_facade<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v6 = a3;
  v7 = (v3 - v5) / 144;
  if ( a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v8 = 144 * v6;
  if ( v6 != v7 )
  {
    v10 = 0LL;
    *(_QWORD *)&v9 = v5;
    *((_QWORD *)&v9 + 1) = v7;
    v12 = 0LL;
    v11 = v9;
    std::uninitialized_copy<std::move_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>,stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>>(
      (__int64)&v9,
      (const void *)(v8 + v5),
      v5 + 144 * v7,
      &v11);
    v3 = a1[1];
  }
  a1[1] = v3 - v8;
}
