/*
 * XREFs of ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180002474
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18002CA10 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180037C18 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z @ 0x180002544 (-GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::UpdateStreamPriority(CAudioStream *this)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v2; // ebx
  int v3; // eax
  unsigned int AudioResourcePriority; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 64LL))((char *)this + 8) != 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 120LL))(*((_QWORD *)this + 10));
  AudioResourcePriority = GetAudioResourcePriority(v2, *((_DWORD *)this + 84), *((unsigned __int8 *)this + 224), v3);
  v5 = AudioResourcePriority;
  v6 = *((_DWORD *)this + 57);
  if ( AudioResourcePriority == v6 )
    return 0LL;
  *((_DWORD *)this + 57) = AudioResourcePriority;
  v7 = *((_QWORD *)this + 8);
  v13 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 80LL))(v7, &v13);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 200LL))(v13, 1LL, v5, v6);
  v9 = v8;
  if ( v8 >= 0 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2EA,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v8,
    v11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  return v9;
}
