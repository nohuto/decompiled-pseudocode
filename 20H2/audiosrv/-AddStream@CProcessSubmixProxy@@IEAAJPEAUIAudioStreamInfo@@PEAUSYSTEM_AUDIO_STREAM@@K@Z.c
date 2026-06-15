/*
 * XREFs of ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800337E0
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180033570 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAAPEAPEAUIAudioStreamInfo@@QEAPEAU2@AEBQEAU2@@Z @ 0x180033900 (--$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixProxy::AddStream(
        CProcessSubmixProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM *a3,
        unsigned int a4)
{
  struct IAudioStreamInfo *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  struct IAudioStreamInfo **v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  struct IAudioStreamInfo *v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = a2;
  v6 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v9 = (struct IAudioStreamInfo **)*((_QWORD *)this + 23);
  if ( *((struct IAudioStreamInfo ***)this + 24) == v9 )
  {
    std::vector<IAudioStreamInfo *>::_Emplace_reallocate<IAudioStreamInfo * const &>((char *)this + 176, v9, &v16);
    v6 = v16;
  }
  else
  {
    *v9 = v6;
    *((_QWORD *)this + 23) += 8LL;
  }
  (*(void (__fastcall **)(struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM *, _QWORD))(*(_QWORD *)v6 + 112LL))(
    v6,
    a3,
    a4);
  if ( v8 )
    LeaveCriticalSection(v8);
  v15 = 0LL;
  (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8, &v15);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v15 + 200LL))(
          v15,
          0LL,
          a4,
          0xFFFFFFFFLL);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10,
      v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
    return v11;
  }
  else
  {
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return 0LL;
  }
}
