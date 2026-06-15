/*
 * XREFs of ?_Destroy@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800C4294
 * Callers:
 *     _std::vector_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy__const_&__::_1_::catch$63 @ 0x18007C9DA (_std--vector_wil--com_ptr_t_IVolumeStrip_wil--err_returncode_policy__std--allocator_wil--com_ptr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v4++);
    while ( v4 != a3 );
  }
  return result;
}
