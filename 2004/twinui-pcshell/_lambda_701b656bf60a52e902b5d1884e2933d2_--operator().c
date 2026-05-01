/*
 * XREFs of _lambda_701b656bf60a52e902b5d1884e2933d2_::operator() @ 0x18040D0F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_701b656bf60a52e902b5d1884e2933d2__&_::Run @ 0x18040FC70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_701b656bf60a52e902b5d1884e2933d2__-_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Register@UIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@ZP81@EAAJK@ZW42@W43@PEAVWindowArrangementView@@@SmartCookie@@QEAAJPEAUIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@ZP81@EAAJK@Z12PEAVWindowArrangementView@@@Z @ 0x18040CB20 (--$Register@UIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_701b656bf60a52e902b5d1884e2933d2_::operator()(__int64 a1)
{
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *ppvOut; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    return 2147947423LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v3 = IUnknown_QueryService(
         *(IUnknown **)(*(_QWORD *)a1 + 16LL),
         (const GUID *const)&SID_ShellTargetingTracker,
         &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
         &ppvOut);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v3 = SmartCookie::Register<IShellTargetingContractManager,long (IShellTargetingContractManager::*)(enum SHELL_TARGET_IDENTIFIER,enum SHELL_TARGET_CONTRACT_FLAGS,IShellTargetingContractNotification *,unsigned long *),long (IShellTargetingContractManager::*)(unsigned long),enum SHELL_TARGET_IDENTIFIER,enum SHELL_TARGET_CONTRACT_FLAGS,WindowArrangementView *>(
           *(_QWORD *)a1 + 160LL,
           (__int64)ppvOut,
           v4);
    v5 = v3;
    if ( v3 >= 0 )
    {
      v5 = 0;
      goto LABEL_9;
    }
    v6 = 282LL;
  }
  else
  {
    v6 = 275LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
