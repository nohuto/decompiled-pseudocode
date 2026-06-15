/*
 * XREFs of ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180068300
 * Callers:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800347B0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x180055A24 (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18006742C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 *     ??$copy_to@UIVolumeStrip@@@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIVolumeStrip@@@Z @ 0x1800683DC (--$copy_to@UIVolumeStrip@@@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeProvider::CreateDeviceVolumeStrip(
        CVolumeProvider *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 *v8; // rdx
  CVolumeStrip *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CVolumeStrip *v12; // [rsp+48h] [rbp+10h] BYREF
  const unsigned __int16 *v13; // [rsp+58h] [rbp+20h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_51079a55607f31c93829f02be353d159_Traceguids, a2);
  }
  v12 = 0LL;
  v13 = a2;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CVolumeStrip,IVolumeStrip,unsigned short const * &>(&v12, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
    return v7;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v13 = (const unsigned __int16 *)((char *)this + 16);
    v8 = (__int64 *)*((_QWORD *)this + 8);
    if ( *((__int64 **)this + 9) == v8 )
    {
      std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> const &>(
        (__int64 **)this + 7,
        v8,
        (__int64 *)&v12);
    }
    else
    {
      v10 = v12;
      *v8 = (__int64)v12;
      if ( v10 )
        (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v10 + 8LL))(v10);
      *((_QWORD *)this + 8) += 8LL;
    }
    if ( this != (CVolumeProvider *)-16LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::copy_to<IVolumeStrip>(&v12, a3);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
    return 0LL;
  }
}
