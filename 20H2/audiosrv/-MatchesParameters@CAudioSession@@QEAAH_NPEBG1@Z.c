/*
 * XREFs of ?MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z @ 0x1800C8E6C
 * Callers:
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CFE8C (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800C6394 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::MatchesParameters(
        CAudioSession *this,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  __int64 *v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // rbx
  const WCHAR *v12; // rax
  const WCHAR *v13; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v8 = (__int64 *)*((_QWORD *)this + 97);
  if ( *((_QWORD *)this + 98) - (_QWORD)v8 < 8uLL || (v9 = *v8) == 0 )
  {
    if ( v7 )
      LeaveCriticalSection(v7);
    goto LABEL_13;
  }
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(&v15, v9);
  if ( v7 )
    LeaveCriticalSection(v7);
  v10 = 1;
  v11 = v15;
  if ( a3
    && ((v12 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15)) == 0LL
     || CompareStringOrdinal(a3, -1, v12, -1, 1) != 2)
    || a4
    && (v13 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11),
        CompareStringOrdinal(a4, -1, v13, -1, 1) != 2) )
  {
LABEL_13:
    v10 = 0;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  return v10;
}
