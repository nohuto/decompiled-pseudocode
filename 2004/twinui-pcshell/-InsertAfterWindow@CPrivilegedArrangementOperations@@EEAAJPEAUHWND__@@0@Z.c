/*
 * XREFs of ?InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z @ 0x18022AE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180081C9C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18014D9E0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18014D9E0.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::InsertAfterWindow(
        CPrivilegedArrangementOperations *this,
        HWND a2,
        HWND a3)
{
  RTL_SRWLOCK *v3; // rbx
  unsigned int LastError; // edi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v10 = v3;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
      (__int64)v3,
      (volatile int *)a2);
  AcquireSRWLockExclusive(v3 + 6);
  EnableIAMAccess(v3[5].Ptr, 1LL);
  if ( !SetWindowPos(a2, a3, 0, 0, 0, 0, 0x4013u) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x16A,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v7);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v10);
  return LastError;
}
