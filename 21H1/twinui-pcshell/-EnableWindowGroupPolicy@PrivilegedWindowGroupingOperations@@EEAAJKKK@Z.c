/*
 * XREFs of ?EnableWindowGroupPolicy@PrivilegedWindowGroupingOperations@@EEAAJKKK@Z @ 0x180206F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800814FC (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801292F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 */

__int64 __fastcall PrivilegedWindowGroupingOperations::EnableWindowGroupPolicy(
        PrivilegedWindowGroupingOperations *this,
        volatile int *a2,
        unsigned int a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int LastError; // edi
  unsigned int v8; // r14d
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v12 = v4;
  v8 = (unsigned int)a2;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
      (__int64)v4,
      a2);
  AcquireSRWLockExclusive(v4 + 6);
  EnableIAMAccess(v4[5].Ptr, 1LL);
  if ( !(unsigned int)EnableWindowGroupPolicy(v8, a3, a4) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x245,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v9);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v12);
  return LastError;
}
