/*
 * XREFs of ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180032F00
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180032C20 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_ff74a95be8b6fdbf63efc5a91aa54bff_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x18006D660 (_lambda_ff74a95be8b6fdbf63efc5a91aa54bff_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BB090 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C635C (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::PruneTerminatedOwningProcesses(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const char *v3; // r9
  __int64 *v4; // r14
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *i; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  void *v13; // rdi
  _QWORD *v14; // rsi
  _QWORD *v15; // rbx
  struct std::nothrow_t *v16; // rdx
  void *v17[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct std::nothrow_t *v20; // [rsp+80h] [rbp+8h] BYREF
  void *v21; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+90h] [rbp+18h]

  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v22 = v2;
  v4 = (__int64 *)*((_QWORD *)this + 98);
  v21 = v17;
  v20 = (struct std::nothrow_t *)v17;
  v5 = (__int64 *)*((_QWORD *)this + 97);
  try
  {
    while ( v5 != v4
         && !(unsigned __int8)lambda_ff74a95be8b6fdbf63efc5a91aa54bff_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
                                &v20,
                                v5) )
      ++v5;
    v6 = v5;
    if ( v5 != v4 )
    {
      while ( ++v5 != v4 )
      {
        if ( !(unsigned __int8)lambda_ff74a95be8b6fdbf63efc5a91aa54bff_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
                                 &v21,
                                 v5) )
          wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v6++, v5);
      }
    }
    v7 = (__int64 *)*((_QWORD *)this + 98);
    if ( v4 != v7 )
    {
      do
      {
        v8 = *v4;
        *v4 = 0LL;
        v9 = *v6;
        *v6 = v8;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        ++v6;
        ++v4;
      }
      while ( v4 != v7 );
      v7 = (__int64 *)*((_QWORD *)this + 98);
    }
    for ( i = v6; i != v7; ++i )
    {
      if ( *i )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*i + 16LL))(*i);
    }
    *((_QWORD *)this + 98) = v6;
    if ( v2 )
      LeaveCriticalSection(v2);
    v11 = v17[0];
    v12 = v17[1];
    while ( v11 != v12 )
    {
      (*(void (__fastcall **)(_QWORD, CAudioSession *))(*(_QWORD *)*v11 + 32LL))(*v11, this);
      ++v11;
    }
    v13 = v17[0];
    if ( v17[0] )
    {
      v14 = v17[1];
      if ( v17[0] != v17[1] )
      {
        v15 = v17[0];
        do
        {
          if ( *v15 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 16LL))(*v15);
          ++v15;
        }
        while ( v15 != v14 );
      }
      v16 = (struct std::nothrow_t *)(8 * ((v18 - (__int64)v13) >> 3));
      v20 = v16;
      v21 = v13;
      if ( (unsigned __int64)v16 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v21, (unsigned __int64 *)&v20);
        v16 = v20;
        v13 = v21;
      }
      operator delete(v13, v16);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7DC,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      v3);
  }
}
