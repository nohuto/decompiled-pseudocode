/*
 * XREFs of PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x1800D9AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x180045D00 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     _lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator() @ 0x1800D5CE0 (_lambda_4a543277d9c921e33bd9dfb8d5328f97_--operator().c)
 */

__int64 PolicyConfigGetDeviceFormatAndSpatialSettings(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  struct _TP_TIMER **v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // ebx
  void **v9; // rax
  char v10; // di
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rdx
  void *v15; // rcx
  void *v16; // rcx
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int64 v19; // rax
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  __int64 v24; // [rsp+48h] [rbp-91h] BYREF
  void *Src; // [rsp+50h] [rbp-89h] BYREF
  LPVOID v26; // [rsp+58h] [rbp-81h] BYREF
  void *pv; // [rsp+60h] [rbp-79h] BYREF
  LPVOID *v28; // [rsp+68h] [rbp-71h]
  int v29[2]; // [rsp+70h] [rbp-69h] BYREF
  char v30; // [rsp+78h] [rbp-61h]
  void **p_Src; // [rsp+80h] [rbp-59h]
  void *v32; // [rsp+88h] [rbp-51h] BYREF
  char v33; // [rsp+90h] [rbp-49h]
  void **v34; // [rsp+98h] [rbp-41h]
  void *v35; // [rsp+A0h] [rbp-39h] BYREF
  char v36; // [rsp+A8h] [rbp-31h]
  _QWORD v37[3]; // [rsp+B0h] [rbp-29h] BYREF
  char v38; // [rsp+C8h] [rbp-11h]
  struct _TP_TIMER *v39[7]; // [rsp+D0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+47h]
  void **v41; // [rsp+140h] [rbp+67h] BYREF
  va_list va; // [rsp+140h] [rbp+67h]
  void **v43; // [rsp+148h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+148h] [rbp+6Fh]
  _DWORD *v45; // [rsp+150h] [rbp+77h]
  void **v46; // [rsp+158h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+158h] [rbp+7Fh]
  va_list va3; // [rsp+160h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v41 = va_arg(va1, void **);
  va_copy(va2, va1);
  v43 = va_arg(va2, void **);
  v45 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v46 = va_arg(va3, void **);
  v5 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v39,
    v5[1],
    v6,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatAndSpatialSettings");
  if ( !v41 )
  {
    v7 = 4406LL;
LABEL_5:
    v8 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
    goto LABEL_49;
  }
  *v41 = 0LL;
  if ( !v43 )
  {
    v7 = 4409LL;
    goto LABEL_5;
  }
  *v43 = 0LL;
  v9 = v46;
  if ( v46 )
  {
    *v46 = 0LL;
    v9 = v46;
  }
  Src = 0LL;
  va_copy((va_list)v37, va);
  va_copy((va_list)&v37[1], va1);
  va_copy((va_list)&v37[2], va2);
  v10 = 1;
  v26 = 0LL;
  pv = 0LL;
  LODWORD(v24) = 0;
  v32 = 0LL;
  v33 = 1;
  *(_QWORD *)v29 = 0LL;
  v30 = 1;
  if ( !v9 )
  {
    v28 = &v26;
    p_Src = &Src;
    v8 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, void **, int *, __int64 *, _QWORD))(*(_QWORD *)g_PolicyConfig + 272LL))(
           g_PolicyConfig,
           a2,
           a3,
           &v32,
           v29,
           &v24,
           0LL);
    if ( v33 )
    {
      v15 = *p_Src;
      *p_Src = v32;
      if ( v15 )
        CoTaskMemFree(v15);
    }
    if ( v30 )
    {
      v16 = *v28;
      *v28 = *(LPVOID *)v29;
      if ( v16 )
        CoTaskMemFree(v16);
    }
    if ( v8 < 0 )
    {
      v14 = 4453LL;
      goto LABEL_38;
    }
LABEL_28:
    *v41 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    if ( *v41 )
    {
      memcpy_0(*v41, Src, *((unsigned __int16 *)Src + 8) + 18LL);
      *v43 = MIDL_user_allocate(0x48uLL);
      v17 = *v43;
      if ( *v43 )
      {
        v18 = v26;
        *v17 = *(_OWORD *)v26;
        v17[1] = v18[1];
        v17[2] = v18[2];
        v17[3] = v18[3];
        *((_QWORD *)v17 + 8) = *((_QWORD *)v18 + 8);
        v19 = (unsigned int)v24;
        if ( v45 )
          *v45 = v24;
        if ( v46 )
        {
          *v46 = MIDL_user_allocate(834 * v19);
          if ( !*v46 )
          {
            v14 = 4474LL;
            goto LABEL_37;
          }
          memcpy_0(*v46, pv, 834LL * (unsigned int)v24);
        }
        v10 = 0;
        v8 = 0;
        goto LABEL_41;
      }
      v14 = 4463LL;
    }
    else
    {
      v14 = 4459LL;
    }
LABEL_37:
    v8 = -2147024882;
    goto LABEL_38;
  }
  v35 = 0LL;
  p_Src = &pv;
  v28 = &v26;
  v34 = &Src;
  v36 = 1;
  v8 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, void **, int *, __int64 *, void **))(*(_QWORD *)g_PolicyConfig + 272LL))(
         g_PolicyConfig,
         a2,
         a3,
         &v35,
         v29,
         &v24,
         &v32);
  if ( v36 )
  {
    v11 = *v34;
    *v34 = v35;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( v30 )
  {
    v12 = *v28;
    *v28 = *(LPVOID *)v29;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( v33 )
  {
    v13 = *p_Src;
    *p_Src = v32;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( v8 >= 0 )
    goto LABEL_28;
  v14 = 4445LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v8);
LABEL_41:
  v20 = pv;
  pv = 0LL;
  if ( v20 )
    CoTaskMemFree(v20);
  v21 = v26;
  v26 = 0LL;
  if ( v21 )
    CoTaskMemFree(v21);
  v22 = Src;
  Src = 0LL;
  if ( v22 )
    CoTaskMemFree(v22);
  if ( v10 )
  {
    v38 = 0;
    lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator()((__int64)v37);
  }
LABEL_49:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v39);
  return (unsigned int)v8;
}
