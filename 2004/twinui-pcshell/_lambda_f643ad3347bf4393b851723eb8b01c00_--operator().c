/*
 * XREFs of _lambda_f643ad3347bf4393b851723eb8b01c00_::operator() @ 0x180079688
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0ca5362a8e9f42bbaa8a80157a92d215___::Run @ 0x180079600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0ca5362a8e9f42bbaa8a80157a92d215___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f643ad3347bf4393b851723eb8b01c00_::operator()(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0LL;
  v8 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = 0LL;
    (*(void (__fastcall **)(_QWORD, SID *, GUID *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
      *(_QWORD *)(a1 + 8),
      &SID_ImmersiveApplicationManagerPriv,
      &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
      &v7);
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 184LL))(
           v7,
           *(_QWORD *)(*(_QWORD *)a1 + 600LL),
           &v8);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22C,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v4);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    v3 = v8;
  }
  LOBYTE(v2) = v3 == 1;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 120LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 120LL),
           *(_QWORD *)(*(_QWORD *)a1 + 600LL),
           v2);
}
