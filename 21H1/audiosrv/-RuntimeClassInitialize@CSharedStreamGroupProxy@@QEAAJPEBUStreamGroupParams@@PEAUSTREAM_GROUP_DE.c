/*
 * XREFs of ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180030B50
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180030350 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@K.c)
 * Callees:
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180027AF0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180052CBC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800E2F60 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ??$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsoft@@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAVWeakRef@12@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E32CC (--$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsof.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSharedStreamGroupProxy::RuntimeClassInitialize(
        CSharedStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        struct STREAM_GROUP_DESCRIPTOR *a3,
        int a4)
{
  HRESULT Instance; // eax
  int v9; // esi
  HRESULT v10; // eax
  int v11; // eax
  IUnknown *v12; // rcx
  IUnknown *v13; // rbx
  char *v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  _WORD *v17; // rax
  _WORD *v18; // r9
  unsigned __int64 v19; // rax
  _WORD *v20; // rdx
  int v21; // r10d
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  char *v24; // rdi
  __int16 v25; // cx
  unsigned __int64 v26; // r15
  __int64 v27; // rbx
  LPVOID v28; // rdi
  size_t v29; // rsi
  __int64 v30; // rcx
  struct _RTL_CRITICAL_SECTION *v31; // rax
  struct _RTL_CRITICAL_SECTION *v32; // rbx
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v34; // rax
  __int64 v35; // rbx
  int v37; // eax
  unsigned __int64 v38; // r9
  __int64 v39; // rdx
  __int64 *v40; // rax
  int v41; // eax
  struct _RTL_CRITICAL_SECTION *v42; // rcx
  struct _RTL_CRITICAL_SECTION *v43; // rcx
  int ppv; // [rsp+20h] [rbp-40h]
  int ppva; // [rsp+20h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION **v46; // [rsp+40h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+48h] [rbp-18h] BYREF
  IUnknown *pProxy; // [rsp+50h] [rbp-10h] BYREF
  LPMALLOC ppMalloc; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
               0LL,
               0x17u,
               &GUID_816e5b3e_5523_4efc_9223_98ec4214c3a0,
               (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    goto LABEL_36;
  }
  v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x360,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10,
      ppva);
    goto LABEL_36;
  }
  v11 = ((__int64 (__fastcall *)(IUnknown *, struct STREAM_GROUP_DESCRIPTOR *))pProxy->lpVtbl[3].QueryInterface)(
          pProxy,
          a3);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x362,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11,
      ppva);
    goto LABEL_36;
  }
  v12 = (IUnknown *)*((_QWORD *)this + 11);
  v13 = pProxy;
  if ( v12 != pProxy )
  {
    if ( pProxy )
    {
      ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->AddRef)(pProxy);
      v12 = (IUnknown *)*((_QWORD *)this + 11);
    }
    *((_QWORD *)this + 11) = v13;
    if ( v12 )
      ((void (__fastcall *)(IUnknown *))v12->lpVtbl->Release)(v12);
  }
  v14 = *(char **)a2;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)&v14[2 * v15] );
  *((_QWORD *)this + 7) = 0LL;
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v9 = -2147024362;
    goto LABEL_54;
  }
  if ( !is_mul_ok(v16, 2uLL) )
  {
    v9 = -2147024362;
    goto LABEL_26;
  }
  v17 = CoTaskMemAlloc(2 * v16);
  v18 = v17;
  *((_QWORD *)this + 7) = v17;
  if ( !v17 )
  {
    v9 = -2147024882;
    goto LABEL_54;
  }
  v9 = 0;
  if ( v16 > 0x7FFFFFFF )
  {
LABEL_47:
    *v17 = 0;
    goto LABEL_26;
  }
  if ( v15 >= 0x7FFFFFFF )
  {
    if ( v15 == -1LL )
      goto LABEL_26;
    goto LABEL_47;
  }
  if ( !v14 )
  {
    v14 = (char *)&unk_18015D744;
    v15 = 0LL;
  }
  if ( v16 )
  {
    v19 = v16;
    v20 = v18;
    v21 = 0;
    v22 = 0LL;
    v23 = v15 - v16;
    v24 = (char *)(v14 - (char *)v18);
    while ( v23 + v19 )
    {
      v25 = *(_WORD *)((char *)v20 + (_QWORD)v24);
      if ( !v25 )
        break;
      *v20++ = v25;
      ++v22;
      if ( !--v19 )
      {
        --v20;
        --v22;
        v21 = -2147024774;
        break;
      }
    }
    *v20 = 0;
    v26 = v16 - v22;
    if ( v21 >= 0 && v26 > 1 && 2 * v26 > 2 )
      memset_0(&v18[v22 + 1], 0, 2 * v26 - 2);
  }
LABEL_26:
  if ( v9 >= 0 )
  {
    v27 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
    v28 = CoTaskMemAlloc(v27 + 18);
    *((_QWORD *)this + 6) = v28;
    if ( v28 )
    {
      v29 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v29 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v28);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset_0(*((void **)this + 6), 0, v29);
      memcpy_0(*((void **)this + 6), *((const void **)a2 + 2), v27 + 18);
      v30 = *((_QWORD *)a2 + 7);
      if ( v30 )
      {
        v37 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 8LL))(v30, (char *)this + 72);
        v9 = v37;
        if ( v37 < 0 )
        {
          v38 = (unsigned int)v37;
          v39 = 221LL;
          goto LABEL_55;
        }
      }
      *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
      *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
      *((_DWORD *)this + 17) = *((_DWORD *)a2 + 2);
      *((_QWORD *)this + 18) = 0LL;
      *((_DWORD *)this + 38) = 0;
      *((_BYTE *)this + 64) = *((_BYTE *)a2 + 49);
      *((_BYTE *)this + 65) = *((_BYTE *)a2 + 50);
      v31 = (struct _RTL_CRITICAL_SECTION *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v32 = v31;
      v47 = v31;
      if ( v31 )
      {
        InitializeCriticalSectionEx(v31, 0, 0);
        v32[1].DebugInfo = 0LL;
        *(_QWORD *)&v32[1].LockCount = 0LL;
        ProcessHeap = GetProcessHeap();
        v34 = (struct _RTL_CRITICAL_SECTION_DEBUG *)HeapAlloc(ProcessHeap, 0, 0x28uLL);
        *(_QWORD *)&v34->Type = v34;
        v34->CriticalSection = (struct _RTL_CRITICAL_SECTION *)v34;
        v34->ProcessLocksList.Flink = (struct _LIST_ENTRY *)v34;
        LOWORD(v34->ProcessLocksList.Blink) = 257;
        v32[1].DebugInfo = v34;
        LODWORD(v32[1].OwningThread) = a4;
      }
      else
      {
        v32 = 0LL;
      }
      *((_QWORD *)this + 10) = v32;
      if ( v32 )
        goto LABEL_34;
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE9,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x8007000ELL,
        ppva);
    }
    else
    {
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD8,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x8007000ELL,
        ppva);
    }
LABEL_56:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9,
      ppva);
    goto LABEL_36;
  }
LABEL_54:
  v38 = (unsigned int)v9;
  v39 = 213LL;
LABEL_55:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v39,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)v38,
    ppva);
  if ( v9 < 0 )
    goto LABEL_56;
LABEL_34:
  v35 = *((_QWORD *)this + 9);
  if ( !v35 || *(_DWORD *)(v35 + 8) || *(_QWORD *)(v35 + 16) )
  {
LABEL_35:
    v9 = 0;
    goto LABEL_36;
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>(&ppMalloc, this);
  v47 = 0LL;
  v46 = &v47;
  v40 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v46);
  if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(ppMalloc, v40) < 0
    || (LODWORD(v46) = 0,
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 1608),
        (int)Microsoft::WRL::Details::MakeAndInitialize<CMMNotificationDelegator,IMMNotificationClient,Microsoft::WRL::WeakRef &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001>(
               (char *)this + 1608,
               &v47,
               v35 + 24,
               &v46) < 0)
    || (v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
                *(_QWORD *)&g_DeviceEnumerator,
                *((_QWORD *)this + 201)),
        v9 = v41,
        v41 >= 0) )
  {
    v43 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v43->DebugInfo->ProcessLocksList.Flink)(v43);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppMalloc);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x378,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v41,
    ppva);
  v42 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v42->DebugInfo->ProcessLocksList.Flink)(v42);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppMalloc);
LABEL_36:
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)v9;
}
