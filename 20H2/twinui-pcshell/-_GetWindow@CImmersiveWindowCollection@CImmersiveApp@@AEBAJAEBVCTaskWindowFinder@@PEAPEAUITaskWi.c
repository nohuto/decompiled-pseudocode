/*
 * XREFs of ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x180182E48
 * Callers:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180033FE0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18017B5B4 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?GetTaskWindow@CImmersiveApp@@UEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18017D4C0 (-GetTaskWindow@CImmersiveApp@@UEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x180182DC4 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
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
