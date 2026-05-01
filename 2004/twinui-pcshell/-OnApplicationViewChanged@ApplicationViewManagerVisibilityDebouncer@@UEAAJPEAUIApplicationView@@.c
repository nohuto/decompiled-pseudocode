/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180029D20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002A440 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136EC0 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x1801553B0 (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180184DA0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_180184DA0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180185110 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x180190CFC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x180190EC0 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x18019146C (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18019182C (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x180191C98 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        ULONG (__stdcall *a4)(IObjectArray *This))
{
  int v5; // r15d
  struct IObjectArray *v6; // rbx
  __int64 v7; // rdi
  struct IObjectArray *v8; // r13
  void *v9; // rsi
  struct IObjectArrayVtbl *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  bool v15; // si
  char v16; // bl
  struct IObjectArray *v17; // rbx
  struct IUnknown *v18; // rdi
  ULONGLONG TickCount64; // r14
  struct IObjectArray *v20; // rsi
  int v21; // ebx
  struct IObjectArrayVtbl *lpVtbl; // rdx
  char *v23; // rax
  struct IObjectArray *v24; // r15
  struct IObjectArray *v25; // rdi
  ULONGLONG v26; // rsi
  struct IObjectArrayVtbl *v27; // rbx
  struct IApplicationView *QueryInterface; // r14
  unsigned int AddRef; // r13d
  ULONG (__stdcall *Release)(IObjectArray *); // r12
  ULONGLONG GetCount; // rbx
  int v32; // eax
  __int64 v33; // rdx
  __int64 *v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  struct IObjectArrayVtbl *v46; // rbx
  ULONG (__stdcall *v47)(IObjectArray *); // rcx
  HRESULT (__stdcall *v48)(IObjectArray *, const IID *const, void **); // rcx
  struct IObjectArrayVtbl *v49; // rax
  int v50; // ebx
  __int64 v51; // rcx
  int v53; // [rsp+20h] [rbp-89h]
  int v54; // [rsp+20h] [rbp-89h]
  unsigned int v55; // [rsp+30h] [rbp-79h] BYREF
  __int64 v56; // [rsp+38h] [rbp-71h] BYREF
  __int64 *v57; // [rsp+40h] [rbp-69h]
  __int64 v58; // [rsp+50h] [rbp-59h] BYREF
  int v59; // [rsp+58h] [rbp-51h] BYREF
  struct IObjectArray *v60; // [rsp+60h] [rbp-49h] BYREF
  __int128 v61; // [rsp+68h] [rbp-41h] BYREF
  ULONG (__stdcall *v62)(IObjectArray *); // [rsp+78h] [rbp-31h] BYREF
  ULONGLONG v63; // [rsp+80h] [rbp-29h]
  __int64 v64; // [rsp+88h] [rbp-21h] BYREF
  struct IObjectArray *v65; // [rsp+90h] [rbp-19h] BYREF
  int v66; // [rsp+98h] [rbp-11h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-9h]
  __int64 *v68; // [rsp+A8h] [rbp-1h]
  PSRWLOCK SRWLock; // [rsp+B8h] [rbp+Fh]
  __int64 v70; // [rsp+C0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  struct IObjectArray *v72; // [rsp+110h] [rbp+67h] BYREF
  struct IUnknown *v73; // [rsp+118h] [rbp+6Fh]
  int v74; // [rsp+120h] [rbp+77h]

  v74 = a3;
  v73 = a2;
  v72 = (struct IObjectArray *)a1;
  v5 = a3;
  v6 = (struct IObjectArray *)a1;
  v7 = a1 + 104;
  SRWLock = (PSRWLOCK)(a1 + 104);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 104));
  v70 = v7;
  if ( !v5 )
  {
    v63 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    v8 = v6 + 8;
    v9 = 0LL;
    v60 = 0LL;
    v10 = 0LL;
    if ( v6[9].lpVtbl )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v66,
                (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v61);
        v58 = v12;
        v13 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v55,
                (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)((char *)v8->lpVtbl + v11));
        v14 = v13;
        v64 = v13;
        v15 = *(_DWORD *)(v13 + 8) == 1 && (unsigned int)SHIsSameObject(*(struct IUnknown **)v13, v73);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14 + 16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12 + 16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
        if ( v15 )
          break;
        v10 = (struct IObjectArrayVtbl *)((char *)v10 + 1);
        v11 += 32LL;
        if ( v10 >= v8[1].lpVtbl )
        {
          v9 = v60;
          goto LABEL_11;
        }
      }
      v9 = v10;
      v16 = 1;
    }
    else
    {
LABEL_11:
      v16 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v62);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
    if ( v16 )
    {
      CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        v8,
        v9);
      v17 = v72;
      if ( !v9 )
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v72[21]);
      goto LABEL_36;
    }
    v6 = v72;
    v5 = v74;
  }
  v18 = v73;
  *(_QWORD *)&v61 = v73;
  if ( v73 )
    ((void (__fastcall *)(struct IUnknown *))v73->lpVtbl->AddRef)(v73);
  DWORD2(v61) = v5;
  v62 = a4;
  if ( a4 )
    (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)a4 + 8LL))(a4);
  TickCount64 = GetTickCount64();
  v63 = TickCount64;
  v20 = v6 + 8;
  v21 = 0;
  lpVtbl = v20[1].lpVtbl;
  if ( lpVtbl != v20[3].lpVtbl
    || (v21 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                v20,
                (char *)&lpVtbl->QueryInterface + 1),
        v21 >= 0) )
  {
    v23 = (char *)v20->lpVtbl + 32 * (__int64)v20[1].lpVtbl++;
    if ( v23 )
    {
      *(_QWORD *)v23 = 0LL;
      if ( v23 != (char *)&v61 )
      {
        *(_QWORD *)v23 = v18;
        v18 = 0LL;
      }
      *((_DWORD *)v23 + 2) = v5;
      *((_QWORD *)v23 + 2) = 0LL;
      if ( v23 + 16 != (char *)&v62 )
      {
        *((_QWORD *)v23 + 2) = a4;
        a4 = 0LL;
      }
      *((_QWORD *)v23 + 3) = TickCount64;
    }
  }
  if ( a4 )
    (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)a4 + 16LL))(a4);
  if ( v18 )
    ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v21,
      v53);
    goto LABEL_97;
  }
  v17 = v72;
LABEL_36:
  v24 = v17 - 1;
  v72 = 0LL;
  AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)&v17[14], &v72);
  v25 = v72;
  while ( v24[10].lpVtbl )
  {
    v26 = GetTickCount64();
    v27 = v24[9].lpVtbl;
    QueryInterface = (struct IApplicationView *)v27->QueryInterface;
    *(_QWORD *)&v61 = QueryInterface;
    if ( QueryInterface )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)QueryInterface + 8LL))(QueryInterface);
    AddRef = (unsigned int)v27->AddRef;
    DWORD2(v61) = AddRef;
    Release = v27->Release;
    v62 = Release;
    if ( Release )
      (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)Release + 8LL))(Release);
    GetCount = (ULONGLONG)v27->GetCount;
    v63 = GetCount;
    if ( AddRef == 1 )
    {
      if ( v26 < GetCount + 50 )
      {
        if ( !v24[22].lpVtbl )
        {
          v50 = GetCount - v26;
          v60 = v24;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(v24);
          v64 = (__int64)v24;
          v65 = v24;
          if ( v24 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef(v24);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24[22]);
          v21 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
                  v51,
                  (unsigned int)(v50 + 50),
                  &v24[22],
                  &v64);
          Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v65);
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x128,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
              (const char *)(unsigned int)v21,
              v53);
            Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v60);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v62);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
            Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v72);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF1,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
              (const char *)(unsigned int)v21,
              v54);
            goto LABEL_97;
          }
          Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v60);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v62);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
        break;
      }
      ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(
        (ApplicationViewManagerVisibilityDebouncer *)v24,
        QueryInterface);
    }
    v58 = (__int64)v25;
    if ( v25 )
      ((void (__fastcall *)(struct IObjectArray *))v25->lpVtbl->AddRef)(v25);
    v59 = 0;
    v32 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v25->lpVtbl->GetCount)(v25, &v59);
    if ( v32 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v32,
        v53);
    v33 = 0LL;
    v55 = 0;
    v56 = 0LL;
    v34 = &v58;
    v57 = &v58;
    if ( v59 )
    {
      while ( 1 )
      {
        v35 = *v34;
        v36 = v56;
        if ( v56 )
        {
          v56 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          v33 = v55;
        }
        v37 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v35 + 32LL))(
                v35,
                v33,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v56);
        if ( v37 >= 0 )
          break;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v37,
          v53);
        v33 = v55 + 1;
        v55 = v33;
        v34 = v57;
        if ( (unsigned int)v33 >= *((_DWORD *)v57 + 2) )
          goto LABEL_56;
      }
      v34 = v57;
      LODWORD(v33) = v55;
    }
LABEL_56:
    v66 = v59;
    v67 = 0LL;
    v68 = &v58;
LABEL_57:
    while ( (_DWORD)v33 != v66 || v34 != v68 )
    {
      v38 = v56;
      v64 = v56;
      if ( v56 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
      (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD, ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)v38 + 24LL))(
        v38,
        QueryInterface,
        AddRef,
        Release);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      v33 = ++v55;
      v39 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        v33 = v55;
      }
      while ( 1 )
      {
        v34 = v57;
        if ( (unsigned int)v33 >= *((_DWORD *)v57 + 2) )
          break;
        v40 = *v57;
        v41 = v56;
        if ( v56 )
        {
          v56 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          v33 = v55;
        }
        v42 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v40 + 32LL))(
                v40,
                v33,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v56);
        if ( v42 >= 0 )
        {
          v34 = v57;
          LODWORD(v33) = v55;
          goto LABEL_57;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v42,
          v53);
        v33 = ++v55;
      }
    }
    v43 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    if ( v24[10].lpVtbl )
    {
      v46 = v24[9].lpVtbl;
      v47 = v46->Release;
      if ( v47 )
      {
        v46->Release = 0LL;
        (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)v47 + 16LL))(v47);
      }
      v48 = v46->QueryInterface;
      if ( v46->QueryInterface )
      {
        v46->QueryInterface = 0LL;
        (*(void (__fastcall **)(HRESULT (__stdcall *)(IObjectArray *, const IID *const, void **)))(*(_QWORD *)v48 + 16LL))(v48);
      }
      v49 = v24[10].lpVtbl;
      if ( v49 != (struct IObjectArrayVtbl *)1 )
      {
        memmove_0(v24[9].lpVtbl, &v24[9].lpVtbl->GetAt, 32LL * ((_QWORD)v49 - 1));
        v49 = v24[10].lpVtbl;
      }
      v24[10].lpVtbl = (struct IObjectArrayVtbl *)((char *)v49 - 1);
    }
    if ( Release )
      (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)Release + 16LL))(Release);
    if ( QueryInterface )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)QueryInterface + 16LL))(QueryInterface);
  }
  if ( v25 )
    ((void (__fastcall *)(struct IObjectArray *))v25->lpVtbl->Release)(v25);
  v21 = 0;
LABEL_97:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v21;
}
