/*
 * XREFs of ?ForEachOwningProcess@CAudioSession@@UEAAJP6AXPEAUIAudioProcess@@@Z@Z @ 0x1800029B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180002A70 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BB090 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::ForEachOwningProcess(CAudioSession *this, void (*a2)(struct IAudioProcess *))
{
  int OwningProcesses; // eax
  unsigned int v4; // esi
  void *v5; // rbx
  __int128 j; // rdi
  struct std::nothrow_t *v7; // rdx
  void *v9; // rbx
  __int64 i; // rdi
  struct std::nothrow_t *v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct std::nothrow_t *v15; // [rsp+70h] [rbp+18h] BYREF
  void *v16; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  OwningProcesses = CAudioSession::GetOwningProcesses(this, &v12);
  v4 = OwningProcesses;
  if ( OwningProcesses < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)OwningProcesses,
      v12);
    v9 = (void *)v12;
    if ( (_QWORD)v12 )
    {
      for ( i = v12; i != *((_QWORD *)&v12 + 1); i += 8LL )
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(i);
      v11 = (struct std::nothrow_t *)((v13 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
      v15 = v11;
      v16 = v9;
      if ( (unsigned __int64)v11 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v16, (unsigned __int64 *)&v15);
        v11 = v15;
        v9 = v16;
      }
      operator delete(v9, v11);
    }
    return v4;
  }
  else
  {
    v5 = (void *)v12;
    for ( j = v12; (_QWORD)j != *((_QWORD *)&j + 1); *(_QWORD *)&j = j + 8 )
      ((void (__fastcall *)(_QWORD))a2)(*(_QWORD *)j);
    if ( v5 )
    {
      *(_QWORD *)&j = v5;
      if ( v5 != *((void **)&j + 1) )
      {
        do
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(j);
          *(_QWORD *)&j = j + 8;
        }
        while ( (_QWORD)j != *((_QWORD *)&j + 1) );
      }
      v7 = (struct std::nothrow_t *)((v13 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
      v15 = v7;
      v16 = v5;
      if ( (unsigned __int64)v7 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v16, (unsigned __int64 *)&v15);
        v7 = v15;
        v5 = v16;
      }
      operator delete(v5, v7);
    }
    return 0LL;
  }
}
