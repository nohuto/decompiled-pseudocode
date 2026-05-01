/*
 * XREFs of ?AddDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@UtagRECT@@H@Z @ 0x1802E7540
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e5434191a426e1e6c5461e9f90ae0298___ @ 0x1802E5E54 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e5434191a426e1e6c5461e9f90ae0298.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowingEnvironmentConfig::AddDisplayRegion(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        struct tagRECT *a3,
        int a4)
{
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ecx
  int v8; // eax
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v11[5]; // [rsp+28h] [rbp-50h] BYREF
  float v12[4]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IImmersiveMonitor *v14; // [rsp+88h] [rbp+10h] BYREF
  int v15; // [rsp+98h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a2;
  v12[0] = (float)a3->left;
  v12[1] = (float)a3->top;
  v12[2] = (float)(a3->right - a3->left);
  v12[3] = (float)(a3->bottom - a3->top);
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 6) + 48LL))(*((_QWORD *)this + 6), &SRWLock);
  v11[0] = (char *)this - 32;
  v11[1] = &v14;
  v11[2] = a3;
  v11[3] = &v15;
  v11[4] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e5434191a426e1e6c5461e9f90ae0298___(
         v7,
         CurrentThreadId,
         (__int64)v11);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      214LL,
      (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v8);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
