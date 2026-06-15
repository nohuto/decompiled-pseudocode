/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180030A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180023320 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004EE7C (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int v8; // r14d
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v28; // eax
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  unsigned int v35; // ebx
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // eax
  int v39; // eax
  __int64 v41; // [rsp+20h] [rbp-30h] BYREF
  __int64 v42; // [rsp+28h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v44[8]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  if ( !*((_BYTE *)this + 53) )
    *((_DWORD *)this + 33) = 1;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  v42 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v43 = v7;
  v8 = 0;
  if ( !a3 )
  {
LABEL_64:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v43);
    if ( !*((_BYTE *)this + 53) )
    {
      v36 = *((_QWORD *)this + 22);
      if ( !v36 )
      {
        v35 = -2147467262;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B4,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)0x80004002LL,
          v41);
        goto LABEL_77;
      }
      if ( !*((_QWORD *)this + 23) )
      {
        v35 = -2147467262;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B5,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)0x80004002LL,
          v41);
        goto LABEL_77;
      }
      v38 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 40LL))(v36, &v41);
      v35 = v38;
      if ( v38 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B8,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v38,
          v41);
        goto LABEL_77;
      }
      v39 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)this + 144LL))(this, (unsigned int)v41);
      v35 = v39;
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B9,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v39,
          v41);
        goto LABEL_77;
      }
    }
    v35 = 0;
    goto LABEL_77;
  }
  while ( 1 )
  {
    v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
    v41 = 0LL;
    v10 = (**v9)(v9, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v41);
    v11 = v41;
    if ( v10 >= 0 )
    {
      v12 = *((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = v41;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v11 = v41;
      }
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v11 = v41;
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
    v41 = 0LL;
    v14 = (**v13)(v13, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd, &v41);
    v15 = v41;
    if ( v14 >= 0 )
    {
      v16 = *((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = v41;
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        v15 = v41;
      }
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v15 = v41;
      }
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
    v41 = 0LL;
    v18 = (**v17)(v17, &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9, &v41);
    v19 = v41;
    if ( v18 >= 0 )
    {
      v20 = *((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = v41;
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        v19 = v41;
      }
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v19 = v41;
      }
    }
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v21 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
    v41 = 0LL;
    if ( (int)(**v21)(v21, &GUID_2b6a07f7_ea05_428b_a730_afb23c032f5c, &v41) >= 0 )
    {
      v22 = v41;
      v23 = *((_QWORD *)this + 24);
      *((_QWORD *)this + 24) = v41;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v24 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 24) + 32LL))(
              *((_QWORD *)this + 24),
              (char *)this + 96);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x280,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v24,
          v41);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 392LL))(g_PolicyManager) )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 24) + 40LL))(*((_QWORD *)this + 24), 1LL);
    }
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    v25 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
    v41 = 0LL;
    if ( (int)(**v25)(v25, &GUID_a026a0bf_1e7e_430b_b0d5_d4f3689d02ae, &v41) >= 0 )
    {
      v26 = v41;
      v27 = *((_QWORD *)this + 26);
      *((_QWORD *)this + 26) = v41;
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 26) + 32LL))(
              *((_QWORD *)this + 26),
              *((unsigned int *)this + 22));
      if ( v28 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x28E,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v28,
          v41);
    }
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    v29 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
    v41 = 0LL;
    v30 = (**v29)(v29, &GUID_8ab91395_f920_4132_873f_7a40607f7901, &v41);
    v31 = v41;
    if ( v30 >= 0 )
    {
      v32 = *((_QWORD *)this + 27);
      *((_QWORD *)this + 27) = v41;
      if ( v31 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
        v31 = v41;
      }
      if ( v32 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v31 = v41;
      }
    }
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    v33 = v42;
    v42 = 0LL;
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    if ( ((__int64 (__fastcall *)(_QWORD, GUID *, __int64 *))(*a4)->lpVtbl->QueryInterface)(
           *a4,
           &GUID_0e0823fe_8765_49d4_9cca_c008a449bef1,
           &v42) < 0 )
      goto LABEL_57;
    v34 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 10) + 528LL))(*((_QWORD *)this + 10), v44);
    v35 = v34;
    if ( v34 < 0 )
      break;
    v34 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v42 + 24LL))(v42, v44);
    v35 = v34;
    if ( v34 < 0 )
    {
      v37 = 675LL;
      goto LABEL_69;
    }
LABEL_57:
    if ( !*((_QWORD *)this + 22)
      || !*((_QWORD *)this + 23)
      || !*((_QWORD *)this + 25)
      || !*((_QWORD *)this + 24)
      || !*((_QWORD *)this + 26)
      || !v42 )
    {
      ++v8;
      ++a4;
      if ( v8 < a3 )
        continue;
    }
    goto LABEL_64;
  }
  v37 = 674LL;
LABEL_69:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v37,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v34,
    v41);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v43);
LABEL_77:
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v42);
  return v35;
}
