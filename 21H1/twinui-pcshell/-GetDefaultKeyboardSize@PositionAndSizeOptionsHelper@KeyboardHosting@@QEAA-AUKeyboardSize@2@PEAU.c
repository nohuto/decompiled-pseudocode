/*
 * XREFs of ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800359F0
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800363A0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800A559C (-GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundat.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180089670 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800899E0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     sqrt @ 0x18008D61C (sqrt.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800919B4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923@@@details@wil@@QEAA_NXZ @ 0x1800A481C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923@@.c)
 *     ceilf_0 @ 0x1800CA467 (ceilf_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180115128 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18027F56C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x18034CB70 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
        __int64 **a1,
        _DWORD *a2,
        HMONITOR a3,
        __int64 a4,
        int a5,
        char a6,
        double a7,
        double *a8)
{
  __int64 v11; // rax
  double v12; // xmm9_8
  int v13; // r15d
  int v14; // edi
  int v15; // ebx
  double v16; // xmm6_8
  double v17; // xmm7_8
  bool v18; // cc
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 *v21; // rax
  double v22; // xmm1_8
  double v23; // xmm2_8
  char v24; // al
  float v25; // xmm6_4
  float v26; // xmm4_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  int v29; // eax
  int v30; // ebx
  double v31; // xmm4_8
  int v32; // eax
  float v33; // xmm1_4
  int v34; // eax
  float v35; // xmm3_4
  int v36; // ecx
  unsigned int v37; // eax
  double v38; // xmm1_8
  HMONITOR hMonitor; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v41; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v42[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+70h] [rbp-90h] BYREF
  __int128 v45; // [rsp+80h] [rbp-80h]
  __int128 v46; // [rsp+90h] [rbp-70h]
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int128 v48; // [rsp+B0h] [rbp-50h]
  __int128 v49; // [rsp+C0h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  hMonitor = a3;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v42);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::GetImpl'::`2'::impl) )
  {
    v11 = wil::srwlock::lock_exclusive(a1 + 2, &v41);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::operator=(
      v42,
      v11);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v41);
  }
  v12 = 0.0;
  v13 = 96;
  mi.cbSize = 40;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  if ( GetMonitorInfoW(hMonitor, &mi) )
  {
    if ( (unsigned int)GetCurrentDpiInfo(hMonitor, &v44) )
    {
      v14 = abs32(mi.rcMonitor.right - mi.rcMonitor.left);
      v15 = abs32(mi.rcMonitor.bottom - mi.rcMonitor.top);
      if ( v14 > 0 && v15 > 0 && SDWORD2(v45) > 0 && SHIDWORD(v45) > 0 )
      {
        v16 = (double)(100 * DWORD2(v45)) / 2540.0;
        v17 = (double)(100 * HIDWORD(v45)) / 2540.0;
        v18 = v14 < v15;
        if ( v14 > v15 )
        {
          if ( v17 > v16 )
          {
LABEL_14:
            v16 = (double)(100 * HIDWORD(v45)) / 2540.0;
            v17 = (double)(100 * DWORD2(v45)) / 2540.0;
LABEL_15:
            v12 = sqrt(v17 * v17 + v16 * v16);
            v13 = (int)((double)v15 / v17);
            std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(
              a1,
              &v41,
              &hMonitor);
            v19 = v41;
            *(double *)(v41 + 40) = v12;
            *(_DWORD *)(v19 + 48) = (int)((double)v14 / v16);
            *(_DWORD *)(v19 + 52) = v13;
            goto LABEL_24;
          }
          v18 = v14 < v15;
        }
        if ( !v18 || v16 <= v17 )
          goto LABEL_15;
        goto LABEL_14;
      }
    }
  }
  v20 = *a1;
  v21 = (__int64 *)(*a1)[1];
  if ( !*((_BYTE *)v21 + 25) )
  {
    do
    {
      if ( v21[4] >= (unsigned __int64)hMonitor )
      {
        v20 = v21;
        v21 = (__int64 *)*v21;
      }
      else
      {
        v21 = (__int64 *)v21[2];
      }
    }
    while ( !*((_BYTE *)v21 + 25) );
    if ( v20 != *a1 && (unsigned __int64)hMonitor >= v20[4] )
    {
      std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1, &v41, &hMonitor);
      v41 = *(_OWORD *)(v41 + 40);
      v13 = HIDWORD(v41);
      v12 = *(double *)&v41;
    }
  }
LABEL_24:
  if ( a6 )
  {
    v22 = a7;
    v23 = v12 / a7;
    if ( v12 / a7 <= 0.0 )
    {
      v24 = 1;
      goto LABEL_29;
    }
  }
  else
  {
    v22 = v12;
    v23 = DOUBLE_1_0;
  }
  v24 = 0;
LABEL_29:
  if ( v24 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
    __debugbreak();
  }
  *a8 = v23;
  v25 = *(float *)(a4 + 8);
  if ( a6 )
    v26 = v25 * v23;
  else
    v26 = *(float *)(a4 + 8);
  if ( v26 <= 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x39,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
    __debugbreak();
  }
  v27 = *(float *)(a4 + 12);
  if ( a6 )
    v28 = v27 * v23;
  else
    v28 = *(float *)(a4 + 12);
  if ( v28 <= 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3B,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
    JUMPOUT(0x180035F66LL);
  }
  if ( a6 )
    v29 = (int)((double)v13 * v23);
  else
    v29 = v13;
  if ( !v29 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3D,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
    __debugbreak();
  }
  if ( v22 != 0.0 && v22 >= 8.0 )
    v26 = v26 * 0.89999998;
  v30 = (int)v26;
  *a2 = (int)v26;
  if ( v22 == 0.0 || v22 < 8.0 )
  {
    v35 = v28 * 0.5;
  }
  else
  {
    v31 = (double)v29;
    if ( v22 >= 23.5 )
    {
      if ( v22 >= 55.0 )
        v34 = (int)(v31 * 6.299212598425197);
      else
        v34 = (int)((v22 * 260.0 + 1700.0) / 2540.0 * v31);
      v33 = (float)v34;
    }
    else
    {
      v32 = 1900;
      if ( v22 < 19.5 )
        v32 = 1600;
      v33 = (double)v32 / 2540.0 * 4.0 * v31 + v31 * 0.07874015748031496 + v31 * ((double)v32 / 2540.0);
    }
    if ( a5 )
      v33 = (float)(v33 * 100.0) / (float)a5;
    v35 = ceilf_0(v33);
  }
  v36 = (int)v35;
  a2[1] = (int)v35;
  if ( (float)v30 > v25 )
    *a2 = (int)v25;
  v37 = (int)(float)(v27 * 0.5);
  if ( v36 > v37 )
  {
    a2[1] = v37;
    v36 = (int)(float)(v27 * 0.5);
  }
  if ( v12 > 8.0 && v12 < 23.5 )
  {
    v38 = v27 * 0.43;
    if ( (double)v36 > v38 )
      a2[1] = (int)v38;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v42);
  return a2;
}
