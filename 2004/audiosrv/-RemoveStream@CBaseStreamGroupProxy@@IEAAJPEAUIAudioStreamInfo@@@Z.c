/*
 * XREFs of ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800E6C7C
 * Callers:
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800E54F0 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800E55D0 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RemoveStream(CBaseStreamGroupProxy *this, struct IAudioStreamInfo *a2)
{
  unsigned int v4; // ebp
  struct IAudioStreamInfo **v5; // rdx
  unsigned __int64 v6; // rcx
  struct IAudioStreamInfo **v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v11[2]; // [rsp+30h] [rbp-528h] BYREF
  _BYTE v12[1264]; // [rsp+40h] [rbp-518h] BYREF

  v11[0] = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, v11);
  v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v11[1] = (__int64)this + 152;
  v5 = (struct IAudioStreamInfo **)*((_QWORD *)this + 24);
  v6 = *((_QWORD *)this + 25);
  while ( v5 != (struct IAudioStreamInfo **)v6 && *v5 != a2 )
    ++v5;
  if ( v5 != (struct IAudioStreamInfo **)v6 )
  {
    v7 = v5 + 1;
    v8 = 0LL;
    v9 = (v6 - (unsigned __int64)(v5 + 1) + 7) >> 3;
    if ( (unsigned __int64)(v5 + 1) > v6 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        if ( *v7 != a2 )
          *v5++ = *v7;
        ++v7;
        ++v8;
      }
      while ( v8 != v9 );
    }
  }
  *((_QWORD *)this + 25) = v5;
  memset_0(v12, 0, sizeof(v12));
  (*(void (__fastcall **)(struct IAudioStreamInfo *, _BYTE *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, v12, 0LL);
  if ( this != (CBaseStreamGroupProxy *)-152LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v11[0] + 200LL))(v11[0], 2LL, 0xFFFFFFFFLL, v4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
  return 0LL;
}
