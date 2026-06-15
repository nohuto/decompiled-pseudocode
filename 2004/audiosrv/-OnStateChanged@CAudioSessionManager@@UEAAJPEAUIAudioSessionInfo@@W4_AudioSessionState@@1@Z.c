/*
 * XREFs of ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180004F70
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800CF388 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180005780 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 *     ??8CAudioSessionInstanceId@@QEBA_NAEBV0@@Z @ 0x18000581C (--8CAudioSessionInstanceId@@QEBA_NAEBV0@@Z.c)
 *     ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x1800058AC (-Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z.c)
 *     ?RemoveNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x1800059D4 (-RemoveNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18002BA80 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     memcpy_s @ 0x180034A94 (memcpy_s.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ACC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800BB66C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800BC0A0 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800BF584 (WPP_SF_Sd.c)
 *     WPP_SF_qq @ 0x1800CC120 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x1800CDD9C (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionManager::OnStateChanged(
        struct _RTL_CRITICAL_SECTION *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        unsigned int a4)
{
  __int64 v6; // r12
  _QWORD *v7; // rdi
  char *v8; // r14
  char *v9; // rbx
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, __int64); // rax
  char *v11; // r14
  char *v12; // rbx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, __int64); // rax
  char *v14; // r14
  char *v15; // rbx
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, __int64); // rax
  char *v17; // r14
  char *v18; // rbx
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, __int64); // rax
  char *v20; // rdi
  char *v21; // rbx
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, __int64); // rax
  LPCRITICAL_SECTION v23; // r13
  unsigned int v24; // r15d
  _QWORD *OwningThread; // rbx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r10
  _WORD *v29; // rcx
  __int64 v30; // rax
  int v31; // edx
  _QWORD *v32; // r15
  unsigned int v33; // ebx
  unsigned int v34; // esi
  unsigned int v35; // edi
  unsigned int *v36; // rax
  unsigned int *v37; // r14
  unsigned int v38; // r11d
  _WORD *v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  __int64 v42; // r9
  __int16 v43; // ax
  _WORD *v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r10
  signed __int64 v47; // r8
  __int16 v48; // ax
  HANDLE ProcessHeap; // rax
  char *v50; // rdx
  char *v51; // rdx
  char *v52; // rdx
  char *v53; // rdx
  char *v54; // rdx
  __int64 v55; // rcx
  _DWORD *v57; // r12
  __int64 v58; // rax
  _DWORD *v59; // r12
  __int64 v60; // rax
  _DWORD *v61; // r12
  __int64 v62; // rax
  _DWORD *v63; // r12
  __int64 v64; // rax
  _DWORD *v65; // r14
  __int64 v66; // rax
  struct _RTL_CRITICAL_SECTION *p_OwningThread; // rbx
  _QWORD *v68; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v69; // [rsp+38h] [rbp-140h]
  unsigned int v70; // [rsp+40h] [rbp-138h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-130h]
  struct _RTL_CRITICAL_SECTION *v72; // [rsp+50h] [rbp-128h]
  _QWORD v73[2]; // [rsp+58h] [rbp-120h] BYREF
  _DWORD v74[2]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v75; // [rsp+70h] [rbp-108h]
  void **v76; // [rsp+78h] [rbp-100h]
  unsigned int *v77; // [rsp+80h] [rbp-F8h]
  _QWORD *v78; // [rsp+88h] [rbp-F0h]
  struct _RTL_CRITICAL_SECTION *v79; // [rsp+90h] [rbp-E8h]
  HANDLE *v80; // [rsp+A0h] [rbp-D8h]
  char *v81; // [rsp+B0h] [rbp-C8h] BYREF
  char *v82; // [rsp+B8h] [rbp-C0h] BYREF
  char *v83; // [rsp+C0h] [rbp-B8h]
  __int128 v84; // [rsp+C8h] [rbp-B0h]
  char *v85; // [rsp+D8h] [rbp-A0h]
  int v86; // [rsp+E0h] [rbp-98h]
  __int64 v87; // [rsp+E8h] [rbp-90h]
  int v88; // [rsp+F0h] [rbp-88h]
  char *v89; // [rsp+F8h] [rbp-80h]
  unsigned __int16 *v90; // [rsp+100h] [rbp-78h]
  int v91; // [rsp+108h] [rbp-70h]
  int v92; // [rsp+10Ch] [rbp-6Ch]
  void *v93; // [rsp+110h] [rbp-68h]
  int v94; // [rsp+118h] [rbp-60h]
  int v95; // [rsp+11Ch] [rbp-5Ch]
  _WORD *v96; // [rsp+120h] [rbp-58h]
  int v97; // [rsp+128h] [rbp-50h]
  int v98; // [rsp+12Ch] [rbp-4Ch]

  lpCriticalSection = this;
  v73[1] = this;
  v69 = a4;
  v6 = 0LL;
  v73[0] = 0LL;
  v68 = 0LL;
  if ( (**(int (__fastcall ***)(struct IAudioSessionInfo *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
         v73) < 0
    || (*(int (__fastcall **)(_QWORD, _QWORD **))(*(_QWORD *)v73[0] + 24LL))(v73[0], &v68) < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids);
    }
    v55 = v73[0];
    if ( v73[0] )
LABEL_76:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26,
        (unsigned int)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
        0,
        a4);
    }
    v7 = v68;
    v8 = (char *)v68[82];
    v9 = v8 - 24;
    v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 - 3)
                                                                                               + 32LL))(*((_QWORD *)v8 - 3));
    if ( *((int *)v8 - 2) >= 0 && v10 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v9 + 4);
    }
    else
    {
      v57 = v9 + 8;
      v58 = (**v10)(v10, *((unsigned int *)v9 + 2), 2LL);
      v9 = (char *)v58;
      if ( !v58 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v58 + 8) = *v57;
      memcpy_s((void *const)(v58 + 24), 2LL * (*v57 + 1), v8, 2LL * (*v57 + 1));
      v6 = 0LL;
    }
    v81 = v9 + 24;
    v72 = (struct _RTL_CRITICAL_SECTION *)&v82;
    v11 = (char *)v7[83];
    v12 = v11 - 24;
    v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v11 - 3)
                                                                                               + 32LL))(*((_QWORD *)v11 - 3));
    if ( *((int *)v11 - 2) >= 0 && v13 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
    }
    else
    {
      v59 = v12 + 8;
      v60 = (**v13)(v13, *((unsigned int *)v12 + 2), 2LL);
      v12 = (char *)v60;
      if ( !v60 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v60 + 8) = *v59;
      memcpy_s((void *const)(v60 + 24), 2LL * (*v59 + 1), v11, 2LL * (*v59 + 1));
      v6 = 0LL;
    }
    v82 = v12 + 24;
    v14 = (char *)v7[84];
    v15 = v14 - 24;
    v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v14 - 3)
                                                                                               + 32LL))(*((_QWORD *)v14 - 3));
    if ( *((int *)v14 - 2) >= 0 && v16 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 4);
    }
    else
    {
      v61 = v15 + 8;
      v62 = (**v16)(v16, *((unsigned int *)v15 + 2), 2LL);
      v15 = (char *)v62;
      if ( !v62 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v62 + 8) = *v61;
      memcpy_s((void *const)(v62 + 24), 2LL * (*v61 + 1), v14, 2LL * (*v61 + 1));
      v6 = 0LL;
    }
    v83 = v15 + 24;
    v84 = *(_OWORD *)(v7 + 85);
    v17 = (char *)v7[87];
    v18 = v17 - 24;
    v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v17 - 3)
                                                                                               + 32LL))(*((_QWORD *)v17 - 3));
    if ( *((int *)v17 - 2) >= 0 && v19 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v18 + 4);
    }
    else
    {
      v63 = v18 + 8;
      v64 = (**v19)(v19, *((unsigned int *)v18 + 2), 2LL);
      v18 = (char *)v64;
      if ( !v64 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v64 + 8) = *v63;
      memcpy_s((void *const)(v64 + 24), 2LL * (*v63 + 1), v17, 2LL * (*v63 + 1));
      v6 = 0LL;
    }
    v85 = v18 + 24;
    v86 = *((_DWORD *)v7 + 176);
    v87 = v7[89];
    v88 = *((_DWORD *)v7 + 180);
    v20 = (char *)v7[91];
    v21 = v20 - 24;
    v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v20 - 3)
                                                                                               + 32LL))(*((_QWORD *)v20 - 3));
    if ( *((int *)v20 - 2) >= 0 && v22 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v21 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v21 + 4);
    }
    else
    {
      v65 = v21 + 8;
      v66 = (**v22)(v22, *((unsigned int *)v21 + 2), 2LL);
      v21 = (char *)v66;
      if ( !v66 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v66 + 8) = *v65;
      memcpy_s((void *const)(v66 + 24), 2LL * (*v65 + 1), v20, 2LL * (*v65 + 1));
    }
    v89 = v21 + 24;
    if ( a3 == AudioSessionStateExpired )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, a4);
      }
      v23 = lpCriticalSection;
      p_OwningThread = (struct _RTL_CRITICAL_SECTION *)&lpCriticalSection->OwningThread;
      v72 = p_OwningThread;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)lpCriticalSection + 16);
      EnterCriticalSection(p_OwningThread);
      v79 = p_OwningThread;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          28,
          (unsigned int)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
          0,
          (__int64)v89);
      }
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
        &v23[1].OwningThread,
        &v81,
        &v68);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, v23, v68);
      }
      (*(void (__fastcall **)(_QWORD *))(*v68 + 8LL))(v68);
      if ( v72 )
        LeaveCriticalSection(p_OwningThread);
    }
    else
    {
      v23 = lpCriticalSection;
    }
    if ( a4 == 1 )
    {
      v32 = v68;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, 0LL);
      }
      v33 = 2 * *(_DWORD *)(v32[91] - 16LL) + 2;
      v34 = 2 * *((_DWORD *)v23[7].OwningThread - 4) + 2;
      v35 = v34 + 2 * *(_DWORD *)(v32[91] - 16LL) + 74;
      v36 = (unsigned int *)operator new[](v35, (const struct std::nothrow_t *)&std::nothrow);
      v37 = v36;
      if ( v36 )
      {
        *v36 = v35;
        v36[1] = 64;
        v36[6] = v33;
        v36[12] = v34;
        v38 = v33 + 72;
        v36[13] = v33 + 72;
        v39 = v36 + 18;
        v40 = (unsigned __int64)v33 >> 1;
        if ( v40 )
        {
          v41 = 2147483646 - v40;
          v42 = v32[91] - (_QWORD)v39;
          while ( v41 + v40 )
          {
            v43 = *(_WORD *)((char *)v39 + v42);
            if ( !v43 )
              break;
            *v39++ = v43;
            if ( !--v40 )
            {
              --v39;
              break;
            }
          }
          *v39 = 0;
          v38 = v37[13];
        }
        v44 = (_WORD *)((char *)v37 + v38);
        v45 = (unsigned __int64)v34 >> 1;
        if ( v45 )
        {
          v46 = 2147483646 - v45;
          v47 = (char *)v23[7].OwningThread - (char *)v44;
          while ( v46 + v45 )
          {
            v48 = *(_WORD *)((char *)v44 + v47);
            if ( !v48 )
              break;
            *v44++ = v48;
            if ( !--v45 )
            {
              --v44;
              break;
            }
          }
          *v44 = 0;
        }
        v76 = &CAudioSessionManagerNotification::`vftable';
        v77 = v37;
        v78 = v32;
        CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v23 + 192));
      }
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v37);
    }
    else if ( a4 == 2 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, 0LL);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&v23->OwningThread);
      v80 = &v23->OwningThread;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          34,
          (unsigned int)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
          0,
          (__int64)v89);
      }
      v24 = CAudioSessionInstanceIdTraits::Hash((const struct CAudioSessionInstanceId *)&v81);
      OwningThread = v23[1].OwningThread;
      if ( OwningThread && (v26 = OwningThread[v24 % LODWORD(v23[1].SpinCount)]) != 0 )
      {
        while ( *(_DWORD *)(v26 + 96) != v24 || !(unsigned __int8)CAudioSessionInstanceId::operator==(v26, &v81) )
        {
          v6 = v26;
          v26 = *(_QWORD *)(v26 + 88);
          if ( !v26 )
            goto LABEL_117;
        }
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveNode(
          &v23[1].OwningThread,
          v26,
          v6);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD *, LPCRITICAL_SECTION))(*v68 + 232LL))(v68, v23);
        (*(void (__fastcall **)(_QWORD *, struct ISessionInternalEvents *))(*v68 + 232LL))(v68, g_PolicyEventsHandler);
        v28 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                            v27,
                            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *(_DWORD *)v28 > 4u )
        {
          v29 = (_WORD *)v68[91];
          if ( v29 )
          {
            v30 = -1LL;
            do
              ++v30;
            while ( v29[v30] );
            v31 = 2 * v30 + 2;
          }
          else
          {
            v29 = &unk_18015D734;
            v31 = 2;
          }
          v96 = v29;
          v97 = v31;
          v98 = 0;
          v74[0] = 184549376;
          v74[1] = 4;
          v75 = 0LL;
          v90 = *(unsigned __int16 **)(v28 + 8);
          v91 = *v90;
          v92 = 2;
          v93 = &unk_180167DC3;
          v94 = 37;
          v95 = 1;
          v70 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EtwEventWriteTransfer(*(_QWORD *)(v28 + 32), v74, 0LL);
        }
        (*(void (__fastcall **)(_QWORD *))(*v68 + 16LL))(v68);
      }
      else
      {
LABEL_117:
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, v89);
        }
      }
      if ( v23 != (LPCRITICAL_SECTION)-16LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)&v23->OwningThread);
    }
    if ( v68 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v68 + 16LL))(v68);
      v68 = 0LL;
    }
    v50 = v89 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v89 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v50 + 8LL))(*(_QWORD *)v50);
    v51 = v85 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v85 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v51 + 8LL))(*(_QWORD *)v51);
    v52 = v83 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v83 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v52 + 8LL))(*(_QWORD *)v52);
    v53 = v82 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v82 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v53 + 8LL))(*(_QWORD *)v53);
    v54 = v81 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v81 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v54 + 8LL))(*(_QWORD *)v54);
    v55 = v73[0];
    if ( v73[0] )
      goto LABEL_76;
  }
  return 0LL;
}
