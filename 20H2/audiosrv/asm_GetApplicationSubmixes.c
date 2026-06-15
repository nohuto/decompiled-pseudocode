/*
 * XREFs of asm_GetApplicationSubmixes @ 0x1800F1F30
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x180045540 (MIDL_user_allocate.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_K$$QEA_K@Z @ 0x1800F00C4 (--$_Emplace_reallocate@_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAPEA_KQEA_K$$QEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall asm_GetApplicationSubmixes(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  struct _TP_TIMER **v6; // rax
  __int64 v7; // r8
  __int128 v8; // rdi
  _QWORD **v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r14
  _BYTE *v14; // r8
  const char *v15; // r9
  __int64 result; // rax
  _QWORD *i; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-78h] BYREF
  __int64 v19; // [rsp+38h] [rbp-70h] BYREF
  __int128 v20; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+50h] [rbp-58h]
  struct _TP_TIMER *pv[7]; // [rsp+58h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  _QWORD **v24; // [rsp+C8h] [rbp+20h] BYREF

  v6 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v6[1], v7, (struct _TP_TIMER *)L"asm_GetApplicationSubmixes");
  (*(void (__fastcall **)(struct IProcessSubmixManager *, LPCRITICAL_SECTION *, __int64, _QWORD ***))(*(_QWORD *)g_ProcessSubmixManager + 48LL))(
    g_ProcessSubmixManager,
    &lpCriticalSection,
    a1,
    &v24);
  v20 = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  v9 = v24;
  v10 = *v24;
  try
  {
    while ( v10 != v9[1] )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 184LL))(*v10);
      v19 = v11;
      if ( (_QWORD)v8 == *((_QWORD *)&v8 + 1) )
      {
        std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64>(
          (const void **)&v20,
          *((_BYTE **)&v8 + 1),
          &v19);
        *(_QWORD *)&v8 = v21;
        *((_QWORD *)&v8 + 1) = *((_QWORD *)&v20 + 1);
      }
      else
      {
        **((_QWORD **)&v8 + 1) = v11;
        *((_QWORD *)&v8 + 1) += 8LL;
        *((_QWORD *)&v20 + 1) = *((_QWORD *)&v8 + 1);
      }
      ++v10;
      v9 = v24;
    }
    v12 = (_QWORD *)v20;
    v13 = (__int64)(*((_QWORD *)&v8 + 1) - v20) >> 3;
    v14 = MIDL_user_allocate(8 * v13);
    if ( v14 )
    {
      for ( i = v12; i != *((_QWORD **)&v8 + 1); ++i )
        *(_QWORD *)((char *)i + v14 - (_BYTE *)v12) = *i;
      *a2 = v13;
      *a3 = v14;
      if ( v12 )
        std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(8 * ((__int64)(v8 - (_QWORD)v12) >> 3)));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)0x8007000ELL);
      if ( v12 )
        std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(8 * ((__int64)(v8 - (_QWORD)v12) >> 3)));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v24) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xF7,
                     (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                     v15);
    return (unsigned int)v24;
  }
  return result;
}
