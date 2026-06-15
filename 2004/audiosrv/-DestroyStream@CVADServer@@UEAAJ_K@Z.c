/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180050EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800DCAD8 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x1800F6FF8 (-OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z.c)
 */

__int64 __fastcall CVADServer::DestroyStream(CVADServer *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v10; // ebx
  double TimeSec; // xmm0_8
  AudioJournal *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CEndpointCharacteristics *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 58);
  v7 = 0;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( !*((_DWORD *)this + 46) )
  {
    v10 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x874,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
LABEL_20:
    v7 = v10;
    goto LABEL_11;
  }
  v8 = *((_QWORD *)this + 24);
  if ( !v8 )
  {
    v10 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x875,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    goto LABEL_20;
  }
  if ( *(_BYTE *)(v8 + 432) )
  {
    v10 = -2005139336;
    goto LABEL_20;
  }
  if ( a2 != *(_QWORD *)(v8 + 56) )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12FF,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x876,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    goto LABEL_20;
  }
  if ( *((_BYTE *)this + 188) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 304LL))(*((_QWORD *)this + 21));
    *((_BYTE *)this + 188) = 0;
    QueryPerformanceCounter((LARGE_INTEGER *)this + 64);
    v14 = 0LL;
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                              + 24LL))(
      g_pEndpointCharacteristicsCache,
      *((_QWORD *)this + 27),
      0LL,
      0LL,
      &v14);
    TimeSec = CQPCStopWatch::GetTimeSec((CVADServer *)((char *)this + 504));
    AudioJournal::OnStopStream(v12, 0, v14, TimeSec);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
    v8 = *((_QWORD *)this + 24);
  }
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 21) + 312LL))(*((_QWORD *)this + 21), v8, v5);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 64LL))(*((_QWORD *)this + 24));
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 46) = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, a2);
  }
LABEL_11:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
