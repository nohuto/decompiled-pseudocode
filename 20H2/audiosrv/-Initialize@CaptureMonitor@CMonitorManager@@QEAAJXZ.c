/*
 * XREFs of ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FC790
 * Callers:
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800FA460 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FBDFC (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180057328 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800CB490 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1800CB4E0 (WPP_SF_qqq.c)
 *     ??0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@@Z @ 0x1800F95D4 (--0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@@Z.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x1800FA424 (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     WPP_SF_dD @ 0x1800FFF18 (WPP_SF_dD.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x1801009CC (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::CaptureMonitor::Initialize(char *pv)
{
  char *v1; // rsi
  __int64 v2; // rax
  __int64 v4; // rcx
  int v5; // eax
  _QWORD *v6; // rdx
  int v7; // ebx
  struct IMMDevice *v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rdx
  struct IMMDevice *v14; // rbx
  LPVOID v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  CAudioSessionManager *v18; // rcx
  struct _SECURITY_ATTRIBUTES *v19; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  ATL::CAtlException *v23; // rbx
  struct IMMDevice *v24; // [rsp+30h] [rbp-68h] BYREF
  LPVOID pva; // [rsp+38h] [rbp-60h] BYREF
  LPVOID Src; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h] BYREF
  ATL::CAtlException *v28; // [rsp+50h] [rbp-48h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v30; // [rsp+68h] [rbp-30h]
  bool v32; // [rsp+A8h] [rbp+10h] BYREF
  LPVOID v33; // [rsp+B0h] [rbp+18h]
  struct IMMDevice *v34; // [rsp+B8h] [rbp+20h] BYREF

  v1 = pv;
  v24 = 0LL;
  v34 = 0LL;
  Src = 0LL;
  pva = 0LL;
  v27 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v30 = 0LL;
  v2 = *((_QWORD *)pv + 25);
  if ( v2 && *(_DWORD *)(v2 + 56) != 6 )
  {
    PropVariantClear(pvar);
    if ( v34 )
      ((void (__fastcall *)(struct IMMDevice *))v34->lpVtbl->Release)(v34);
    return 2147943647LL;
  }
  v4 = *(_QWORD *)(*((_QWORD *)pv + 24) + 64LL);
  if ( *((_QWORD *)v1 + 9) )
  {
    v6 = v1 + 56;
    if ( *((_QWORD *)v1 + 10) >= 8uLL )
      v6 = (_QWORD *)*v6;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, struct IMMDevice **))(*(_QWORD *)v4 + 40LL))(v4, v6, &v24);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v4 + 32LL))(
           v4,
           1LL,
           0LL,
           &v24);
  }
  v7 = v5;
  if ( v5 < 0 )
    goto LABEL_67;
  v8 = v24;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &Src,
    0LL);
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v8->lpVtbl->GetId)(v8, &Src);
  if ( v7 < 0 )
    goto LABEL_67;
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( *((_WORD *)Src + v10) );
  std::wstring::assign((void **)v1 + 16, Src, v10);
  v11 = *(_QWORD *)(*((_QWORD *)v1 + 24) + 64LL);
  if ( *((_QWORD *)v1 + 13) )
  {
    v13 = v1 + 88;
    if ( *((_QWORD *)v1 + 14) >= 8uLL )
      v13 = (_QWORD *)*v13;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *, struct IMMDevice **))(*(_QWORD *)v11 + 40LL))(v11, v13, &v34);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct IMMDevice **))(*(_QWORD *)v11 + 32LL))(
            v11,
            0LL,
            0LL,
            &v34);
  }
  v7 = v12;
  if ( v12 < 0 )
    goto LABEL_67;
  v14 = v34;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pva,
    0LL);
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v14->lpVtbl->GetId)(v14, &pva);
  if ( v7 < 0 )
    goto LABEL_67;
  do
    ++v9;
  while ( *((_WORD *)pva + v9) );
  std::wstring::assign((void **)v1 + 20, pva, v9);
  if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))v24->lpVtbl->OpenPropertyStore)(v24, 0LL, &v27) < 0 )
    goto LABEL_64;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v27 + 40LL))(
         v27,
         &PKEY_MonitorStreamCategory,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    if ( LODWORD(pvar[1]) >= 0x15 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x56u,
          (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
          (int)pvar[1]);
      }
    }
    else
    {
      *((_DWORD *)v1 + 30) = pvar[1];
    }
  }
  v15 = operator new(0x200uLL, (const struct std::nothrow_t *)&std::nothrow);
  v33 = v15;
  if ( v15 )
    v16 = CMonitor::CMonitor((__int64)v15, *((_DWORD *)v1 + 30));
  else
    v16 = 0LL;
  v17 = *((_QWORD *)v1 + 25);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  *((_QWORD *)v1 + 25) = v16;
  if ( !v16 )
  {
    v7 = -2147024882;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control )
    {
LABEL_72:
      if ( v1[48] )
      {
        (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 5) + 32LL))(*((_QWORD *)v1 + 5), v1);
        v1[48] = 0;
      }
      goto LABEL_74;
    }
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
LABEL_68:
      if ( v18 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v18 + 7) & 0x800000) != 0
        && *((_BYTE *)v18 + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)v18 + 2), 0x5Bu, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, v7);
      }
      goto LABEL_72;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x57u, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids);
LABEL_67:
    v18 = WPP_GLOBAL_Control;
    goto LABEL_68;
  }
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v34->lpVtbl->Activate)(
         v34,
         &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
         1LL);
  if ( v7 < 0 )
    goto LABEL_67;
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 5) + 24LL))(*((_QWORD *)v1 + 5), v1);
  if ( v7 < 0 )
    goto LABEL_67;
  v1[48] = 1;
  try
  {
    ATL::CEvent::Create((ATL::CEvent *)(v1 + 32), v19);
  }
  catch ( ATL::CAtlException *v28 )
  {
    v23 = v28;
    if ( *(_DWORD *)v28 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v33) = *(_DWORD *)v23;
    v7 = (int)v33;
    v1 = pv;
    if ( (int)v33 < 0 )
      goto LABEL_67;
  }
  ThreadpoolWait = CreateThreadpoolWait(CMonitorManager::OnCaptureMonitorTerminated, v1, 0LL);
  *((_QWORD *)v1 + 2) = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    v7 = -2147024882;
    goto LABEL_67;
  }
  SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)v1 + 4), 0LL);
  *(_QWORD *)(*((_QWORD *)v1 + 25) + 272LL) = *((_QWORD *)v1 + 4);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x58u,
      (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
      v1,
      *((_QWORD *)v1 + 25));
  }
  v7 = CMonitor::Initialize(*((CMonitor **)v1 + 25), v24, v34, 0x3Cu, &v32);
  if ( v7 >= 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x5Au,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        v1,
        v1,
        *((_QWORD *)v1 + 25));
    }
    *(_QWORD *)(*((_QWORD *)v1 + 24) + 304LL) = 0LL;
    *((_DWORD *)v1 + 6) = 0;
LABEL_64:
    v18 = WPP_GLOBAL_Control;
    goto LABEL_65;
  }
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), v21, v22, (unsigned int)v7, v32);
    v18 = WPP_GLOBAL_Control;
  }
  if ( !v32 )
  {
    v7 = 1;
    goto LABEL_74;
  }
LABEL_65:
  if ( v7 < 0 )
    goto LABEL_68;
LABEL_74:
  PropVariantClear(pvar);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( pva )
    CoTaskMemFree(pva);
  if ( Src )
    CoTaskMemFree(Src);
  if ( v34 )
    ((void (__fastcall *)(struct IMMDevice *))v34->lpVtbl->Release)(v34);
  if ( v24 )
    ((void (__fastcall *)(struct IMMDevice *))v24->lpVtbl->Release)(v24);
  return (unsigned int)v7;
}
