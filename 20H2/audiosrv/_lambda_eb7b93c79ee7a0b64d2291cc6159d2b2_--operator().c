/*
 * XREFs of _lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_::operator() @ 0x18006D7EC
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180046710 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180023320 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180023340 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002E410 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x180046190 (-GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z.c)
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x1800465F8 (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     _freea @ 0x1800470A0 (_freea.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800740F0 (_alloca_probe.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     WPP_SF_S_guid_ @ 0x1800CB060 (WPP_SF_S_guid_.c)
 *     WPP_SF_Sg @ 0x1800CB180 (WPP_SF_Sg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_::operator()(CAudioSession **a1, __int64 a2, int a3)
{
  GUID **v4; // rax
  GUID *v5; // rdx
  unsigned int v6; // r14d
  size_t v7; // rsi
  size_t v8; // rcx
  __int64 v9; // rax
  void *v10; // rsp
  void **p_Memory; // rdx
  _DWORD *v12; // rax
  void *v13; // rbx
  unsigned int v14; // edi
  CAudioSession *v15; // rcx
  __int64 v16; // rax
  CAudioSession *v17; // rdx
  __int64 v18; // r8
  int v19; // r8d
  int v20; // xmm6_4
  int v21; // esi
  int v22; // ecx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v27; // [rsp+0h] [rbp-40h] BYREF
  int v28[2]; // [rsp+20h] [rbp-20h]
  void *v29; // [rsp+28h] [rbp-18h]
  __int64 v30; // [rsp+30h] [rbp-10h]
  int v31; // [rsp+40h] [rbp+0h] BYREF
  float v32; // [rsp+44h] [rbp+4h] BYREF
  __int64 v33; // [rsp+48h] [rbp+8h] BYREF
  void *Memory; // [rsp+50h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+58h] [rbp+18h] BYREF
  void **v36; // [rsp+60h] [rbp+20h] BYREF
  CAudioSession *v37; // [rsp+68h] [rbp+28h]
  void *v38; // [rsp+70h] [rbp+30h]
  unsigned __int64 v39; // [rsp+78h] [rbp+38h]
  __int64 v40; // [rsp+80h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+68h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v4 = (GUID **)a1[1];
    v5 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( *v4 )
      v5 = *v4;
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)v5, a3, *((_QWORD *)*a1 + 91), (__int64)v5);
  }
  LOBYTE(v31) = 0;
  v32 = FLOAT_1_0;
  v33 = 0LL;
  CAudioSession::GetCurrentSessionGain(*a1, (bool *)&v31, &v32, &v33);
  Memory = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 808), &v35);
  v6 = *((_DWORD *)*a1 + 240);
  v7 = 4LL * v6;
  v8 = (v7 + 16) & -(__int64)(v7 < v7 + 16);
  if ( v8 )
  {
    if ( v8 > 0x400 )
    {
      v12 = malloc(v8);
      if ( v12 )
      {
        *v12 = 56797;
        v12 += 4;
      }
      p_Memory = (void **)v12;
    }
    else
    {
      v9 = v8 + 15;
      if ( v8 + 15 < v8 )
        v9 = 0xFFFFFFFFFFFFFF0LL;
      v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
      p_Memory = (void **)&v31;
      if ( &v27 != (__int64 *)-64LL )
      {
        v31 = 52428;
        p_Memory = &Memory;
      }
    }
  }
  else
  {
    p_Memory = 0LL;
  }
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(&Memory, p_Memory);
  v13 = Memory;
  if ( !Memory )
  {
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v35);
    goto LABEL_35;
  }
  memcpy_0(Memory, *((const void **)*a1 + 121), v7);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v35);
  if ( !*(_BYTE *)a1[2] )
  {
    v15 = *a1;
    v16 = *(_QWORD *)*a1;
    v17 = a1[3];
    v18 = v33;
    v30 = v33;
    v29 = v13;
    v28[0] = v6;
    LOBYTE(v18) = v31;
    (*(void (__fastcall **)(CAudioSession *, _QWORD, __int64))(v16 + 496))(v15, *(unsigned int *)v17, v18);
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*a1 + 8LL))(*a1);
  Microsoft::WRL::Wrappers::CriticalSection::Lock(
    (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 808),
    (struct _RTL_CRITICAL_SECTION **)&v33);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      75,
      v19,
      *((_QWORD *)*a1 + 91),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)*a1 + 212)));
  }
  v20 = *((_DWORD *)*a1 + 212);
  v21 = *((_DWORD *)*a1 + 213);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v33);
  v22 = *(_DWORD *)a1[3];
  if ( v22 )
  {
    if ( v22 != 1 )
      goto LABEL_30;
    v24 = *(_QWORD *)a1[1];
    v25 = *(_DWORD *)a1[4];
    v36 = &CAudioChannelVolumeChanged::`vftable';
    v38 = v13;
    v39 = __PAIR64__(v25, v6);
    v40 = v24;
  }
  else
  {
    v23 = *(_QWORD *)a1[1];
    v36 = &CAudioSessionVolumeChanged::`vftable';
    LODWORD(v38) = v20;
    BYTE4(v38) = v21 != 0;
    v39 = v23;
  }
  v37 = *a1;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
    (LPCRITICAL_SECTION)((char *)v37 + 496),
    (void (__fastcall ***)(_QWORD, __int64 *))&v36);
LABEL_30:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      76LL,
      &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
      *((_QWORD *)*a1 + 91));
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*a1 + 16LL))(*a1);
  v14 = 0;
LABEL_35:
  if ( v13 )
    freea(v13);
  return v14;
}
