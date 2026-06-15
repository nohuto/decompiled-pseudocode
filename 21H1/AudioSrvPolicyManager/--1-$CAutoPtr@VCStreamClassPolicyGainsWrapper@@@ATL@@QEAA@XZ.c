/*
 * XREFs of ??1?$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ @ 0x180030954
 * Callers:
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$2 @ 0x180041EAE (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$2.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003F160 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CAutoPtr<CStreamClassPolicyGainsWrapper>::~CAutoPtr<CStreamClassPolicyGainsWrapper>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    `eh vector destructor iterator'(
      &v2[5].LockCount,
      8uLL,
      0x15uLL,
      std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
    `eh vector destructor iterator'(
      &v2[1],
      8uLL,
      0x15uLL,
      std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
    DeleteCriticalSection(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x180);
  }
  *a1 = 0LL;
}
