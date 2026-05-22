/*
 * XREFs of ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x18008AA40
 * Callers:
 *     ?InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z @ 0x18008A710 (-InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18004A68B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x18008A4BC (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::OnInputReceived(MPCRawInputProvider *this)
{
  void **v2; // rcx
  char *v3; // rbx
  char *v4; // r14
  char *i; // rsi
  int v6; // eax
  int v8[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D0h]
  _BYTE v10[2032]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+858h] [rbp+758h]

  *(_OWORD *)v8 = 0LL;
  v9 = 0LL;
  if ( *((_BYTE *)this + 80) )
  {
    MPCRawInputProvider::FlushQueuedDeviceChanges(this);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    v2 = (void **)((char *)this + 184);
    if ( v8 == (int *)((char *)this + 184) )
    {
      v4 = *(char **)&v8[2];
      v3 = *(char **)v8;
    }
    else
    {
      v3 = (char *)*v2;
      *(_QWORD *)v8 = *v2;
      *v2 = 0LL;
      v4 = (char *)*((_QWORD *)this + 24);
      *(_QWORD *)&v8[2] = v4;
      *((_QWORD *)this + 24) = 0LL;
      v9 = *((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = 0LL;
    }
    if ( this != (MPCRawInputProvider *)-96LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    for ( i = v3; i != v4; i += 2032 )
    {
      memcpy_0(v10, i, sizeof(v10));
      v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v10);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          191LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
    }
  }
  else
  {
    v3 = *(char **)v8;
  }
  if ( v3 )
    std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(2032 * ((v9 - (__int64)v3) / 2032)));
  return 0LL;
}
