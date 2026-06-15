/*
 * XREFs of ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18004FA60
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002E410 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18007419B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B5D14 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800C6594 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800CA450 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     WPP_SF_dq @ 0x1800CB28C (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800CB490 (WPP_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18013CA58 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::RemoveStream(CAudioSession *this, struct CAudioStream *a2, char a3)
{
  unsigned int v6; // ebp
  size_t v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  struct CAudioStream *v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  size_t *v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // r9
  int v20; // eax
  void *v21; // rcx
  const char *v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  size_t v30; // r8
  size_t v31; // rdx
  void *v32; // rax
  size_t v33; // rax
  const void *v34; // rdx
  size_t v35; // rax
  void *v36; // rax
  __int64 v37; // rcx
  void *v38; // rdx
  __int64 v39; // r9
  unsigned __int64 v40; // rsi
  struct CAudioStream *v41; // r8
  __int64 v42; // [rsp+20h] [rbp-68h]
  void (__fastcall **v43[11])(_QWORD, __int64 *); // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  size_t v45; // [rsp+90h] [rbp+8h] BYREF
  size_t v46; // [rsp+98h] [rbp+10h]

  v6 = 0;
  v7 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, this, a2);
  }
  (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)a2 + 160LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v9 = 0LL;
  if ( !*((_QWORD *)this + 13) )
    goto LABEL_15;
  v10 = 0LL;
  v8 = *((_QWORD *)this + 13);
  if ( !v8 )
    goto LABEL_67;
  while ( 1 )
  {
    v11 = *((_QWORD *)this + 12);
    v12 = *(struct CAudioStream **)(v11 + 8 * v10);
    if ( v12 == a2 )
      break;
    v9 = (unsigned int)(v9 + 1);
    v10 = (unsigned int)v9;
    if ( (unsigned int)v9 >= v8 )
      goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v42 = *(_QWORD *)(v11 + 8 * v10);
    WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 57LL, v12, v9);
  }
  v13 = *((_QWORD *)this + 13);
  if ( v10 >= v13 )
    goto LABEL_67;
  v14 = *((_QWORD *)this + 12);
  v15 = (size_t *)(v14 + 8 * v10);
  v7 = *v15;
  v16 = v10 + 1;
  if ( v10 + 1 < v10 || v16 > v13 )
    goto LABEL_67;
  v17 = v13 - v16;
  if ( v17 )
  {
    v34 = (const void *)(v14 + 8 * v16);
    if ( 8 * v17 )
    {
      if ( !v15 || !v34 )
        goto LABEL_96;
      memmove_0(v15, v34, 8 * v17);
    }
  }
  --*((_QWORD *)this + 13);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v18 = *((_QWORD *)this + 31);
  v8 = *((_QWORD *)this + 32);
  if ( v18 >= v8 )
  {
    v30 = v18 + 1;
    if ( v18 + 1 > v8 )
    {
      v31 = *((int *)this + 66);
      if ( *((_QWORD *)this + 30) )
      {
        if ( !*((_DWORD *)this + 66) )
        {
          v31 = v8 >> 1;
          if ( v30 - v8 > v8 >> 1 )
            v31 = v30 - v8;
        }
        v35 = v31 + v8;
        if ( v30 >= v31 + v8 )
          v35 = v18 + 1;
        v46 = v35;
        v36 = calloc(v35, 8uLL);
        v45 = (size_t)v36;
        if ( v36 )
        {
          v37 = *((_QWORD *)this + 31);
          v38 = (void *)*((_QWORD *)this + 30);
          if ( 8 * v37 )
          {
            if ( !v38 )
            {
              *(_DWORD *)_o__errno(v37) = 22;
              invalid_parameter_noinfo();
              goto LABEL_67;
            }
            memmove_0(v36, v38, 8 * v37);
            v38 = (void *)*((_QWORD *)this + 30);
          }
          free(v38);
          *((_QWORD *)this + 30) = v45;
          v33 = v46;
          goto LABEL_47;
        }
      }
      else
      {
        if ( v31 > v30 )
          v30 = *((int *)this + 66);
        v45 = v30;
        v32 = calloc(v30, 8uLL);
        *((_QWORD *)this + 30) = v32;
        if ( v32 )
        {
          v33 = v45;
LABEL_47:
          *((_QWORD *)this + 32) = v33;
          goto LABEL_13;
        }
      }
      ATL::AtlThrowImpl(-2147024882);
    }
  }
LABEL_13:
  *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v18) = v7;
  ++*((_QWORD *)this + 31);
  if ( this != (CAudioSession *)-200LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 5);
LABEL_15:
  if ( this != (CAudioSession *)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v7 )
    goto LABEL_99;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v39 = 0LL;
  if ( *((_QWORD *)this + 22) )
  {
    v40 = 0LL;
    v8 = *((_QWORD *)this + 22);
    if ( !v8 )
      goto LABEL_67;
    while ( 1 )
    {
      v41 = *(struct CAudioStream **)(*((_QWORD *)this + 21) + 8 * v40);
      if ( v41 == a2 )
        break;
      v39 = (unsigned int)(v39 + 1);
      v40 = (unsigned int)v39;
      if ( (unsigned int)v39 >= v8 )
        goto LABEL_83;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v42) = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v40);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, v41, v39);
    }
    if ( v40 >= *((_QWORD *)this + 22) )
      goto LABEL_67;
    v7 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v40);
    v45 = v7;
    ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt((char *)this + 168, v40);
    EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
    ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((char *)this + 240, &v45);
    if ( this != (CAudioSession *)-200LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 5);
  }
LABEL_83:
  if ( this != (CAudioSession *)-128LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  if ( v7 )
  {
LABEL_99:
    if ( *(_BYTE *)(v7 + 224) )
      MicrosoftTelemetryAssertTriggeredArgs(v8, 0LL, 0LL);
    v19 = (unsigned int)(*((_DWORD *)this + 22) - 1);
    *((_DWORD *)this + 22) = v19;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, v19);
    }
    if ( a3 )
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v43[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioStreamDestroy::`vftable';
      v43[1] = (void (__fastcall **)(_QWORD, __int64 *))this;
      v43[2] = (void (__fastcall **)(_QWORD, __int64 *))v7;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496), v43);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    }
    if ( *(_DWORD *)(v7 + 132) == 2 )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(v7 + 176);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(v7 + 184);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(v7 + 192);
    }
    v20 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, size_t))(*(_QWORD *)g_AudioResourceManager
                                                                                    + 32LL))(
            g_AudioResourceManager,
            *(_QWORD *)(v7 + 64),
            v7 + 8);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x145,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v20,
        v42);
    v21 = *(void **)(v7 + 312);
    if ( v21 && !SetEvent(v21) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x91C,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v22);
      __debugbreak();
    }
    *(_QWORD *)(v7 + 72) = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
    if ( !*((_QWORD *)this + 31) )
      goto LABEL_37;
    v23 = 0LL;
    v24 = *((_QWORD *)this + 31);
    if ( v24 )
    {
      while ( 1 )
      {
        v25 = *((_QWORD *)this + 30);
        v26 = (_QWORD *)(v25 + 8 * v23);
        if ( *v26 == v7 )
          break;
        v23 = ++v6;
        if ( v6 >= v24 )
          goto LABEL_37;
      }
      v27 = v23 + 1;
      if ( v23 + 1 >= v23 && v27 <= v24 )
      {
        v28 = v24 - v27;
        if ( !v28 )
          goto LABEL_36;
        v16 = v25 + 8 * v27;
        if ( !(8 * v28) )
          goto LABEL_36;
        if ( v26 && v16 )
        {
          memmove_0(v26, (const void *)v16, 8 * v28);
LABEL_36:
          --*((_QWORD *)this + 31);
LABEL_37:
          (*(void (__fastcall **)(size_t))(*(_QWORD *)v7 + 64LL))(v7);
          if ( this != (CAudioSession *)-200LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)this + 5);
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
          (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
            ThreadPool,
            *((_QWORD *)this + 76));
          return 0LL;
        }
LABEL_96:
        *(_DWORD *)_o__errno(v16) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
    }
LABEL_67:
    ATL::AtlThrowImpl(-2147024809);
  }
  return 0LL;
}
