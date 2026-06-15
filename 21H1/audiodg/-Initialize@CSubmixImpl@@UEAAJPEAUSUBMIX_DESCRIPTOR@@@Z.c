/*
 * XREFs of ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005940
 * Callers:
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x140002710 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140002870 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002134 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140004160 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400058C0 (-ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400067D0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140007540 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140008AA0 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B890 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000E8C0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x14001BDFC (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     atexit @ 0x14001D2FC (atexit.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     memcpy_0 @ 0x14001F43F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400326EC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003424C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSubmixImpl::Initialize(CSubmixImpl *this, struct SUBMIX_DESCRIPTOR *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rdi
  char *v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  _WORD *v10; // rax
  _WORD *v11; // r10
  int v12; // r12d
  unsigned __int64 v13; // rcx
  _WORD *v14; // rdx
  int v15; // r8d
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  signed __int64 v18; // rdi
  __int16 v19; // ax
  unsigned __int64 v20; // r15
  void *v21; // rax
  void *v22; // rcx
  unsigned int v23; // eax
  void **v24; // rbx
  void *v25; // rax
  void *v26; // rcx
  HRESULT SubmixPipeInstance; // ebx
  struct _RTL_CRITICAL_SECTION *v28; // rbx
  __int64 v29; // rcx
  LPVOID v30; // rdi
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // edi
  CPipeInstance *v34; // rdi
  __int64 v35; // rdi
  __int64 *i; // rcx
  struct ATL::CAtlPlex *v37; // r8
  __int64 *v38; // r8
  int v39; // edx
  __int64 v40; // rax
  DWORD LastError; // ebx
  __int64 v43; // rdx
  int v44; // ebx
  PVOID Ptr; // rcx
  __int64 v46; // rdx
  int ppv; // [rsp+20h] [rbp-98h]
  int ppva; // [rsp+20h] [rbp-98h]
  LPVOID v49; // [rsp+30h] [rbp-88h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v51; // [rsp+40h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-70h] BYREF
  union _RTL_RUN_ONCE *v53; // [rsp+50h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *v54; // [rsp+58h] [rbp-60h] BYREF
  char v55; // [rsp+60h] [rbp-58h]
  __int64 v56; // [rsp+70h] [rbp-48h] BYREF
  float v57; // [rsp+78h] [rbp-40h]
  int v58; // [rsp+7Ch] [rbp-3Ch]
  int v59; // [rsp+80h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = ValidateSubmixDescriptor(a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A2,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v4,
      ppv);
    return v5;
  }
  *((_QWORD *)this + 29) = *((_QWORD *)a2 + 7);
  *((_OWORD *)this + 15) = *(_OWORD *)((char *)a2 + 68);
  *((_DWORD *)this + 64) = *(_DWORD *)a2;
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 12);
  *((_BYTE *)this + 313) = *((_BYTE *)a2 + 13);
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v6);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 1) = 0LL;
  v7 = (char *)*((_QWORD *)a2 + 4);
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)&v7[2 * v8] );
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v12 = -2147024362;
    goto LABEL_83;
  }
  if ( !is_mul_ok(v9, 2uLL) )
  {
    v12 = -2147024362;
    goto LABEL_21;
  }
  v10 = CoTaskMemAlloc(2 * v9);
  v11 = v10;
  *((_QWORD *)this + 1) = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    goto LABEL_83;
  }
  v12 = 0;
  if ( v9 > 0x7FFFFFFF )
  {
LABEL_61:
    *v10 = 0;
    goto LABEL_21;
  }
  if ( v8 >= 0x7FFFFFFF )
  {
    if ( v8 == -1LL )
      goto LABEL_21;
    goto LABEL_61;
  }
  if ( !v7 )
  {
    v7 = (char *)&unk_140070AE8;
    v8 = 0LL;
  }
  if ( v9 )
  {
    v13 = v9;
    v14 = v10;
    v15 = 0;
    v16 = 0LL;
    v17 = v8 - v9;
    v18 = v7 - (char *)v10;
    while ( v13 + v17 )
    {
      v19 = *(_WORD *)((char *)v14 + v18);
      if ( !v19 )
        break;
      *v14++ = v19;
      ++v16;
      if ( !--v13 )
      {
        --v14;
        --v16;
        v15 = -2147024774;
        break;
      }
    }
    *v14 = 0;
    v20 = v9 - v16;
    if ( v15 >= 0 && v20 > 1 && 2 * v20 > 2 )
      memset_0(&v11[v16 + 1], 0, 2 * v20 - 2);
  }
LABEL_21:
  if ( v12 < 0 )
  {
LABEL_83:
    v43 = 426LL;
    goto LABEL_84;
  }
  v21 = CoTaskMemAlloc(*((unsigned int *)a2 + 10));
  v22 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = v21;
  if ( v22 )
  {
    CoTaskMemFree(v22);
    v21 = (void *)*((_QWORD *)this + 27);
  }
  if ( !v21 )
  {
    v12 = -2147024882;
    v43 = 429LL;
    goto LABEL_84;
  }
  memcpy_0(v21, *((const void **)a2 + 6), *((unsigned int *)a2 + 10));
  v23 = *((_DWORD *)a2 + 4);
  v24 = (void **)((char *)this + 224);
  if ( v23 )
  {
    v25 = CoTaskMemAlloc(v23);
    v26 = *v24;
    *v24 = v25;
    if ( v26 )
    {
      CoTaskMemFree(v26);
      v25 = (void *)*((_QWORD *)this + 28);
    }
    if ( v25 )
    {
      memcpy_0(v25, *((const void **)a2 + 3), *((unsigned int *)a2 + 4));
      goto LABEL_30;
    }
    v12 = -2147024882;
    v43 = 435LL;
LABEL_84:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v12,
      ppv);
    return (unsigned int)v12;
  }
  v53 = (union _RTL_RUN_ONCE *)((char *)this + 224);
  v54 = 0LL;
  v55 = 1;
  v44 = CloneWaveFormat(*((const struct tWAVEFORMATEX **)this + 27), &v54);
  if ( v55 )
  {
    Ptr = v53->Ptr;
    v53->Ptr = v54;
    if ( Ptr )
      CoTaskMemFree(Ptr);
  }
  if ( v44 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v44,
      ppv);
    return (unsigned int)v44;
  }
LABEL_30:
  if ( !*((_BYTE *)this + 313) )
  {
    v49 = 0LL;
    SubmixPipeInstance = CoCreateInstance(
                           &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
                           0LL,
                           0x17u,
                           &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
                           &v49);
    if ( SubmixPipeInstance < 0 )
    {
      v46 = 448LL;
    }
    else
    {
      v51 = 0LL;
      (**(void (__fastcall ***)(LPVOID, GUID *, struct _RTL_CRITICAL_SECTION **))v49)(
        v49,
        &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
        &v51);
      v28 = v51;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v53 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_1400852F8;
        qword_1400852F8 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_140085310 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        LODWORD(v54) = 0;
        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v53);
      }
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, _QWORD))v28->DebugInfo->ProcessLocksList.Blink)(
        v28,
        *((_QWORD *)Context + 1));
      if ( v51 )
        ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v51->DebugInfo->ProcessLocksList.Flink)(v51);
      v56 = *((_QWORD *)a2 + 7);
      v29 = *((_QWORD *)this + 27);
      v57 = (float)*(int *)(v29 + 4);
      v58 = *(unsigned __int16 *)(v29 + 2);
      v59 = *((unsigned __int8 *)a2 + 12);
      v30 = v49;
      v31 = *((_QWORD *)this + 33);
      *((_QWORD *)this + 33) = 0LL;
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      v32 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *, char *))(*(_QWORD *)v30 + 24LL))(
              v30,
              *((_QWORD *)a2 + 4),
              &v56,
              (char *)this + 264);
      v33 = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CE,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v32,
          ppva);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v49);
        return v33;
      }
      if ( !*((_BYTE *)a2 + 84) )
        goto LABEL_46;
      SubmixPipeInstance = CPipeInstance::CreateSubmixPipeInstance(
                             *((struct IDeviceGraphObjectCache **)this + 33),
                             a2,
                             (struct CPipeInstance **)this + 3);
      if ( SubmixPipeInstance < 0 )
      {
        v46 = 468LL;
      }
      else
      {
        SubmixPipeInstance = CPipeInstance::Initialize(*((CPipeInstance **)this + 3));
        if ( SubmixPipeInstance < 0 )
        {
          v46 = 469LL;
        }
        else
        {
          v34 = (CPipeInstance *)*((_QWORD *)this + 3);
          SubmixPipeInstance = CPipeInstance::CreateAPOConnectionList(v34);
          if ( SubmixPipeInstance >= 0 )
          {
            SubmixPipeInstance = CPipeInstance::InitializeAPOInterfaces(v34);
            if ( SubmixPipeInstance >= 0 )
            {
              SubmixPipeInstance = CPipeInstance::CreateAPOConnections(v34);
              if ( SubmixPipeInstance >= 0 )
              {
LABEL_46:
                if ( v49 )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v49 + 16LL))(v49);
                goto LABEL_48;
              }
            }
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              38LL,
              &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
              (unsigned int)SubmixPipeInstance);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::ConnectAPOs", 0xBACu, SubmixPipeInstance);
          v46 = 470LL;
        }
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v46,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)SubmixPipeInstance,
      ppva);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v49);
    return (unsigned int)SubmixPipeInstance;
  }
LABEL_48:
  EnterCriticalSection(&g_CritSecSubmixList);
  v51 = &g_CritSecSubmixList;
  v35 = SubmixList;
  i = (__int64 *)qword_140084730;
  if ( !qword_140084730 )
  {
    v37 = ATL::CAtlPlex::Create(&qword_140084728, (unsigned int)dword_140084738, 0x18uLL);
    if ( !v37 )
      ATL::AtlThrowImpl(-2147024882);
    v38 = (__int64 *)((char *)v37 + 24 * (unsigned int)(dword_140084738 - 1) + 8);
    v39 = dword_140084738 - 1;
    for ( i = (__int64 *)qword_140084730; v39 >= 0; --v39 )
    {
      *v38 = (__int64)i;
      i = v38;
      qword_140084730 = (__int64)v38;
      v38 -= 3;
    }
  }
  v40 = *i;
  i[2] = (__int64)this;
  qword_140084730 = v40;
  i[1] = 0LL;
  *i = v35;
  ++qword_140084720;
  if ( SubmixList )
    *(_QWORD *)(SubmixList + 8) = i;
  else
    qword_140084718 = (__int64)i;
  SubmixList = (__int64)i;
  LeaveCriticalSection(&g_CritSecSubmixList);
  return 0LL;
}
