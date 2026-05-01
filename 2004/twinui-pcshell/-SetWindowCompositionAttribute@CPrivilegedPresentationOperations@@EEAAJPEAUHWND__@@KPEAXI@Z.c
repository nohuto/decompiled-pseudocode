/*
 * XREFs of ?SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z @ 0x18022C360
 * Callers:
 *     ?SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z @ 0x18022C270 (-SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180081C9C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18014D9E0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18014D9E0.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowCompositionAttribute(
        CPrivilegedPresentationOperations *this,
        volatile int *a2,
        int a3,
        void *a4,
        unsigned int a5)
{
  RTL_SRWLOCK *v5; // rbx
  const char *v9; // r9
  unsigned int LastError; // ebx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  void *v13; // [rsp+28h] [rbp-20h]
  unsigned int v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  v16 = v5;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
      (__int64)v5,
      a2);
  AcquireSRWLockExclusive(v5 + 6);
  EnableIAMAccess(v5[5].Ptr, 1LL);
  v14 = a5;
  v12 = a3;
  v13 = a4;
  if ( (unsigned int)SetWindowCompositionAttribute(a2, &v12) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xFE,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v9);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v16);
  return LastError;
}
