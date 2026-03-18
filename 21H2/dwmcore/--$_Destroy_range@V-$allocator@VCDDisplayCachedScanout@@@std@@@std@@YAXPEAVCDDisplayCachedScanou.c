/*
 * XREFs of ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1802799C8
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180279C0C (--$_Resize@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCache.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180279CB0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDD.c)
 *     ?_Change_array@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAXQEAVCDDisplayCachedScanout@@_K1@Z @ 0x18027C634 (-_Change_array@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@st.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180282544 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x180279934 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    do
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v3 + 2);
      v4 = *(v3 - 1);
      if ( v4 )
      {
        std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(v4, *v3);
        std::_Deallocate<16,0>((void *)*(v3 - 1), 16 * ((v3[1] - *(v3 - 1)) >> 4));
        *(v3 - 1) = 0LL;
        *v3 = 0LL;
        v3[1] = 0LL;
      }
      v3 += 4;
      result = v3 - 1;
    }
    while ( v3 - 1 != a2 );
  }
  return result;
}
