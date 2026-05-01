/*
 * XREFs of ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x18015F148
 * Callers:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18003C720 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x180157584 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?GetTaskWindow@CImmersiveApp@@UEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180159500 (-GetTaskWindow@CImmersiveApp@@UEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x18015F0C4 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        const struct CTaskWindowFinder *a2,
        struct ITaskWindow **a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct ITaskWindow **); // rcx

  *a3 = 0LL;
  result = CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(this, a2, a4);
  if ( (int)result >= 0 )
  {
    v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ITaskWindow **))(*((_QWORD *)this + 21) + 8 * *a4);
    return (**v8)(v8, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, a3);
  }
  return result;
}
