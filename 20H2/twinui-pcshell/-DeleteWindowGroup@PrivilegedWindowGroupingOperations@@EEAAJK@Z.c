/*
 * XREFs of ?DeleteWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJK@Z @ 0x180229660
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18007FBAC (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18014D830 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18014D830.c)
 */

__int64 __fastcall PrivilegedWindowGroupingOperations::DeleteWindowGroup(
        PrivilegedWindowGroupingOperations *this,
        volatile int *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int LastError; // edi
  unsigned int v4; // esi
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v8 = v2;
  v4 = (unsigned int)a2;
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
      (__int64)v2,
      a2);
  AcquireSRWLockExclusive(v2 + 6);
  EnableIAMAccess(v2[5].Ptr, 1LL);
  if ( !(unsigned int)DeleteWindowGroup(v4) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x227,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v5);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v8);
  return LastError;
}
