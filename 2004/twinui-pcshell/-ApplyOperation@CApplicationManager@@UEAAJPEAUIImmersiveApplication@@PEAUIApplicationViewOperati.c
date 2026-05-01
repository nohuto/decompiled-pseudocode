/*
 * XREFs of ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180041550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002CB98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x180155B6C (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CApplicationManager::ApplyOperation(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        struct IApplicationViewOperation *a3)
{
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  RTL_SRWLOCK *v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // esi
  struct ISyncIAMEventHandler *v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 **); // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  __int64 *v26; // rsi
  unsigned int v27; // r14d
  _BYTE *v28; // r8
  int v29; // eax
  __int64 *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  char *v34; // r8
  int v35; // [rsp+20h] [rbp-E0h]
  int v36; // [rsp+20h] [rbp-E0h]
  int v37; // [rsp+20h] [rbp-E0h]
  bool v38; // [rsp+61h] [rbp-9Fh]
  struct ISyncIAMEventHandler *v39; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v40; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v41; // [rsp+78h] [rbp-88h] BYREF
  int v42; // [rsp+7Ch] [rbp-84h]
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h] BYREF
  int v47; // [rsp+A0h] [rbp-60h] BYREF
  int v48; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v49; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v55[6]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v56[48]; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 168LL))(a3, &v41) < 0 )
  {
    v41 = 0;
  }
  else if ( v41 > 0x11 || (v6 = 139538, !_bittest(&v6, v41)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86B,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x80070057LL,
      v35);
    return 2147942487LL;
  }
  v42 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)a3 + 104LL))(a3, &v47) >= 0 )
    v42 = 2 - (v47 != 0);
  v38 = (*(int (__fastcall **)(struct IApplicationViewOperation *, _BYTE *))(*(_QWORD *)a3 + 152LL))(a3, v56) >= 0;
  v46 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 88LL))(a3, &v46);
  v45 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 184LL))(a3, &v45);
  v44 = 0LL;
  (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, char *))(*(_QWORD *)a3 + 120LL))(
    a3,
    &v44,
    (char *)&v44 + 4);
  v7 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 136LL))(a3, &v49);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    v55[1] = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v40 = 0LL;
    v55[2] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
    v40 = 0LL;
    v55[3] = 0LL;
    v10 = 0LL;
    v50 = 0LL;
    v11 = 0LL;
    if ( *((_QWORD *)this + 53) )
    {
      v55[4] = 0LL;
      do
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 52) + 8 * v11);
        v55[5] = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v13 = -1;
        v39 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, struct ISyncIAMEventHandler **))v12)(
               v12,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v39) >= 0 )
        {
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IImmersiveApplication *, int *))(*(_QWORD *)v39 + 104LL))(
            v39,
            a2,
            &v48);
          v13 = (v48 != 0) - 1;
        }
        v14 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v14 + 16LL))(v14);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( !v13 )
        {
          v10 = v11;
          v8 = 0;
          goto LABEL_19;
        }
        ++v11;
      }
      while ( v11 < *((_QWORD *)this + 53) );
      v10 = v50;
    }
    v8 = -2147319765;
LABEL_19:
    if ( v8 >= 0 )
    {
      v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))(*((_QWORD *)this + 52) + 8 * v10);
      v8 = (**v15)(v15, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v40);
    }
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89C,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v8,
        v35);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 216LL))(
              a3,
              &v52,
              &v51);
      v8 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8A1,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v16,
          v35);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v40 + 560))(v40, v52, v51);
        v8 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8A2,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v17,
            v35);
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 232LL))(
                  a3,
                  &v54,
                  &v53);
          v8 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x8A6,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v18,
              v35);
          }
          else
          {
            v19 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v40 + 568))(v40, v54, v53);
            v8 = v19;
            if ( v19 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x8A7,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v19,
                v35);
            }
            else if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, _QWORD *))(*(_QWORD *)a3 + 248LL))(
                        a3,
                        v55) >= 0
                   && (v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v40 + 592))(v40, v55[0]), v8 = v20, v20 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x8AD,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v20,
                v35);
            }
            else
            {
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
                `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
                1u);
              v21 = *(_QWORD *)a3;
              v39 = 0LL;
              if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, struct ISyncIAMEventHandler **))(v21 + 264))(
                     a3,
                     &v39) >= 0 )
              {
                v22 = (*(__int64 (__fastcall **)(__int64 *, struct ISyncIAMEventHandler *))(*v40 + 632))(v40, v39);
                if ( v22 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x8B6,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v22,
                    v35);
              }
              if ( v39 )
                (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v39 + 16LL))(v39);
              v43 = 0LL;
              v23 = *v40;
              v43 = 0LL;
              v24 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v23 + 504))(v40, &v43);
              v8 = v24;
              if ( v24 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x8BC,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v24,
                  v35);
              }
              else
              {
                v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 144LL))(v43, v49);
                v8 = v25;
                if ( v25 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x8BD,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v25,
                    v35);
                }
                else
                {
                  v26 = v40;
                  v27 = v41;
                  if ( v38 )
                    v28 = v56;
                  else
                    v28 = 0LL;
                  v36 = v42;
                  v29 = (*(__int64 (__fastcall **)(__int64 *, __int64, _BYTE *, __int64))(*v40 + 256))(
                          v40,
                          v46,
                          v28,
                          v45);
                  v8 = v29;
                  if ( v29 >= 0 )
                  {
                    if ( v27 && ((*(__int64 (__fastcall **)(__int64 *))(*v26 + 280))(v26) & 2) != 0 )
                    {
                      v39 = 0LL;
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
                      if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(
                                  (CApplicationManager *)((char *)this - 216),
                                  &v39) >= 0 )
                      {
                        v34 = (char *)this + 32;
                        if ( this == (CApplicationManager *)216 )
                          v34 = 0LL;
                        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, char *, struct IImmersiveApplication *, unsigned int, int, __int64))(*(_QWORD *)v39 + 24LL))(
                          v39,
                          0LL,
                          v34,
                          a2,
                          v27,
                          5,
                          1LL);
                      }
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
                    }
                    if ( v43 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
                    v30 = v40;
                    if ( v40 )
                    {
                      v40 = 0LL;
                      (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
                    }
                    if ( v9 )
                      ReleaseSRWLockExclusive(v9);
                    v8 = 0;
                    goto LABEL_49;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x104C,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v29,
                    v36);
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x8CA,
                    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v8,
                    v37);
                }
              }
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
            }
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    goto LABEL_49;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x894,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v7,
    v35);
LABEL_49:
  v31 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return (unsigned int)v8;
}
