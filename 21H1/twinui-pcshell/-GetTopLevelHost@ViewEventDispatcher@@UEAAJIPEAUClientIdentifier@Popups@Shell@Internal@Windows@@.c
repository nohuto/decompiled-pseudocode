/*
 * XREFs of ?GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@@Z @ 0x180281F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     std::_Func_impl_no_alloc__lambda_e00053c439215dfaf200e67d8fa41959__void_unsigned_short___::_Delete_this @ 0x180289680 (std--_Func_impl_no_alloc__lambda_e00053c439215dfaf200e67d8fa41959__void_unsigned_short___--_Dele.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x18028C0B8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::GetTopLevelHost(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct Windows::Internal::Shell::Popups::ClientIdentifier *a3)
{
  RTL_SRWLOCK *v6; // rdi
  unsigned int v7; // eax
  DWORD v8; // ecx
  DWORD WindowThreadProcessId; // eax
  DWORD dwProcessId[4]; // [rsp+20h] [rbp-A8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp-98h]
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-90h]
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp-88h]
  unsigned int v15[6]; // [rsp+48h] [rbp-80h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+60h] [rbp-68h] BYREF
  __int128 v17; // [rsp+68h] [rbp-60h]
  __int64 (__fastcall ***v18)(); // [rsp+98h] [rbp-30h]

  v6 = this + 10;
  v12 = this + 10;
  SRWLock = this + 10;
  AcquireSRWLockShared(this + 10);
  v14 = v6;
  *(_QWORD *)&v15[1] = 0LL;
  v15[0] = a2;
  *(_QWORD *)dwProcessId = v15;
  *(_QWORD *)&dwProcessId[2] = this - 25;
  v16 = off_18048BBB0;
  v17 = *(_OWORD *)dwProcessId;
  v18 = &v16;
  std::_Func_impl_no_alloc__lambda_e00053c439215dfaf200e67d8fa41959__void_unsigned_short___::_Delete_this(&v16, 0LL);
  if ( v15[0] )
  {
    v7 = v15[1];
    if ( !v15[1] )
    {
      *(_QWORD *)dwProcessId = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)dwProcessId);
      if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(
                  (ViewEventDispatcher *)&this[-25],
                  v15[0],
                  (struct IViewWrapperInternal **)dwProcessId) >= 0 )
        v15[1] = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)dwProcessId + 768LL))(*(_QWORD *)dwProcessId);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)dwProcessId);
      v7 = v15[1];
    }
    v8 = v15[2];
    if ( !v15[2] )
    {
      WindowThreadProcessId = GetWindowThreadProcessId((HWND)(int)v7, dwProcessId);
      v8 = v15[2];
      if ( WindowThreadProcessId )
        v8 = dwProcessId[0];
      v15[2] = v8;
    }
  }
  else
  {
    v8 = v15[2];
  }
  *(_QWORD *)a3 = *(_QWORD *)v15;
  *((_DWORD *)a3 + 2) = v8;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
