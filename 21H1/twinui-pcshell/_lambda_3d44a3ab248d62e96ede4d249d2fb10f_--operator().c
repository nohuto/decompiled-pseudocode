/*
 * XREFs of _lambda_3d44a3ab248d62e96ede4d249d2fb10f_::operator() @ 0x1803B2B0C
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_3d44a3ab248d62e96ede4d249d2fb10f___ @ 0x1803B1E4C (ShellPositionerManager--DoWorkForEachMonitor__lambda_3d44a3ab248d62e96ede4d249d2fb10f___.c)
 * Callees:
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180024108 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_3d44a3ab248d62e96ede4d249d2fb10f_::operator()(
        __int64 a1,
        IUnknown *a2,
        IUnknown *a3,
        __int64 a4)
{
  void *v8; // rbx
  void (__fastcall *v9)(void *, __int64, _QWORD, __int64 *); // rdi
  int PositionerForMonitor; // eax
  unsigned int v11; // ebx
  void *v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v16; // [rsp+60h] [rbp+20h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( (int)ShellPositionerManager::GetPositionerForMonitor(
              *(_DWORD *)(a1 + 8),
              a2,
              &GUID_ee010e17_919a_4068_868b_675acf787303,
              &v13) >= 0 )
  {
    v8 = v13;
    v9 = *(void (__fastcall **)(void *, __int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v9(v8, a4, *(unsigned int *)(a1 + 12), &v14);
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           *(_DWORD *)(a1 + 12),
                           a3,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           &v16);
  v11 = PositionerForMonitor;
  if ( PositionerForMonitor >= 0 )
  {
    (*(void (__fastcall **)(void *, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v16 + 96LL))(
      v16,
      a4,
      *(unsigned int *)(a1 + 8),
      v14,
      *(_QWORD *)(a1 + 16));
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37A,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerForMonitor);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v11;
}
