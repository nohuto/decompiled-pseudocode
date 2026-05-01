/*
 * XREFs of ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180053FF0
 * Callers:
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18005365C (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x180053710 (-SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180053CE0 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180163440 (-IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180054510 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowManager::_FindClassicWindow(
        CClassicWindowManager *this,
        HWND a2,
        struct IClassicWindow **a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct IClassicWindow **); // rcx
  HWND v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = *((_QWORD *)this + 25);
  v10 = a2;
  result = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
             (char *)this + 184,
             &v10,
             a3,
             &v11);
  if ( (int)result >= 0 )
  {
    v8 = v11;
    if ( a3 )
    {
      v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IClassicWindow **))(*((_QWORD *)this + 24) + 8 * v11);
      result = (**v9)(v9, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, a3);
    }
    if ( a4 )
      *a4 = v8;
  }
  return result;
}
