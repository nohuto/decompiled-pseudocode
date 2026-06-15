/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@PEBU_GUID@@5@Z @ 0x18002FDD0
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x18002F6E0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023B90 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E479C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     WPP_SF_Sddd @ 0x1800E7B70 (WPP_SF_Sddd.c)
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800EDB4C (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSaDeviceProxy::RuntimeClassInitialize(
        CSaDeviceProxy *this,
        IMalloc *a2,
        struct CEndpointCharacteristics *a3,
        struct IDeviceGraphObjectsStore *a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned int a6,
        struct SaDeviceResourceParams *a7,
        struct _GUID *a8,
        const struct _GUID *a9)
{
  LPMALLOC v11; // rbp
  struct IDeviceGraphObjectsStore *v13; // rcx
  int v14; // r13d
  unsigned __int128 v15; // rax
  __int64 v16; // r14
  SaDeviceParams *v17; // rbx
  struct IMallocVtbl *v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r12
  __int64 v21; // r9
  int v22; // r10d
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  char *v25; // rsi
  __int16 v26; // cx
  unsigned __int64 v27; // r12
  struct IMallocVtbl *v28; // rax
  __int64 Release_low; // rdi
  LPVOID v30; // rsi
  size_t v31; // rbp
  struct IMallocVtbl *v32; // rax
  __int64 v33; // rdi
  LPVOID v34; // rsi
  size_t v35; // rbx
  __int64 v36; // r8
  enum _AUDCLNT_SHAREMODE v37; // ebp
  int v38; // eax
  struct IAudioDeviceGraph *v39; // rcx
  struct IAudioDeviceGraph *v40; // rbx
  IMalloc *v41; // rax
  IMalloc *v42; // rdi
  struct SaDeviceResourceParams *v43; // rsi
  int v44; // ebx
  HANDLE ProcessHeap; // rax
  _QWORD *v46; // rax
  unsigned __int64 *v47; // rdi
  unsigned __int64 v48; // rbp
  unsigned __int64 v49; // r14
  struct IAudioDeviceGraph *v50; // rcx
  struct IMallocVtbl *lpVtbl; // r8
  DWORD LastError; // ebx
  int v54; // [rsp+20h] [rbp-C8h]
  int v55; // [rsp+20h] [rbp-C8h]
  LPMALLOC ppMalloc[2]; // [rsp+70h] [rbp-78h] BYREF
  struct _GUID v57; // [rsp+80h] [rbp-68h] BYREF
  struct _GUID v58; // [rsp+90h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  struct IAudioDeviceGraph *v60; // [rsp+F0h] [rbp+8h] BYREF
  LPMALLOC v61; // [rsp+F8h] [rbp+10h] BYREF
  struct CEndpointCharacteristics *v62; // [rsp+100h] [rbp+18h]
  LPVOID pv; // [rsp+108h] [rbp+20h] BYREF

  v62 = a3;
  v61 = a2;
  v11 = a2;
  v13 = (struct IDeviceGraphObjectsStore *)*((_QWORD *)this + 14);
  if ( v13 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)a4 + 8LL))(a4);
      v13 = (struct IDeviceGraphObjectsStore *)*((_QWORD *)this + 14);
    }
    *((_QWORD *)this + 14) = a4;
    if ( v13 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = 0;
  pv = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a3 + 2) + 40LL))(*((_QWORD *)a3 + 2), &pv);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    lpVtbl = v11[2].lpVtbl;
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      WORD1(lpVtbl->QueryInterface),
      (_DWORD)lpVtbl,
      (_DWORD)pv,
      HIDWORD(lpVtbl->QueryInterface),
      WORD1(lpVtbl->QueryInterface),
      HIWORD(lpVtbl->AddRef));
  }
  *(_QWORD *)&v15 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( (_QWORD)v15 )
  {
    *(_OWORD *)v15 = 0LL;
    *(_OWORD *)(v15 + 16) = 0LL;
    *(_OWORD *)(v15 + 32) = 0LL;
    *(_OWORD *)(v15 + 48) = 0LL;
    *(_OWORD *)(v15 + 64) = 0LL;
    *(_OWORD *)(v15 + 80) = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = (SaDeviceParams *)v16;
  *(_QWORD *)&v57.Data1 = v16;
  v18 = v11->lpVtbl;
  v19 = -1LL;
  do
    ++v19;
  while ( *((_WORD *)&v18->QueryInterface + v19) );
  *(_QWORD *)v16 = 0LL;
  v20 = v19 + 1;
  if ( v19 + 1 < v19 )
  {
    v14 = -2147024362;
  }
  else
  {
    v15 = v20 * (unsigned __int128)2uLL;
    if ( !is_mul_ok(v20, 2uLL) )
    {
      v14 = -2147024362;
      goto LABEL_27;
    }
    *(_QWORD *)&v15 = CoTaskMemAlloc(2 * v20);
    v21 = v15;
    *(_QWORD *)v16 = v15;
    if ( (_QWORD)v15 )
    {
      if ( v20 <= 0x7FFFFFFF )
      {
        if ( v19 < 0x7FFFFFFF )
        {
          if ( !v18 )
          {
            v18 = (struct IMallocVtbl *)&unk_18015D744;
            v19 = 0LL;
          }
          if ( v20 )
          {
            *(_QWORD *)&v15 = v20;
            *((_QWORD *)&v15 + 1) = v21;
            v22 = 0;
            v23 = 0LL;
            v24 = v19 - v20;
            v25 = (char *)v18 - v21;
            while ( v24 + (_QWORD)v15 )
            {
              v26 = *(_WORD *)&v25[*((_QWORD *)&v15 + 1)];
              if ( !v26 )
                break;
              **((_WORD **)&v15 + 1) = v26;
              *((_QWORD *)&v15 + 1) += 2LL;
              ++v23;
              *(_QWORD *)&v15 = v15 - 1;
              if ( !(_QWORD)v15 )
              {
                *((_QWORD *)&v15 + 1) -= 2LL;
                --v23;
                v22 = -2147024774;
                break;
              }
            }
            **((_WORD **)&v15 + 1) = 0;
            v27 = v20 - v23;
            if ( v22 >= 0 && v27 > 1 && 2 * v27 > 2 )
              memset_0((void *)(v21 + 2 * (v23 + 1)), 0, 2 * v27 - 2);
          }
LABEL_27:
          if ( v14 < 0 )
            goto LABEL_39;
          v28 = v11[2].lpVtbl;
          if ( v28 )
          {
            Release_low = LOWORD(v28->Release);
            v30 = CoTaskMemAlloc(Release_low + 18);
            *(_QWORD *)(v16 + 16) = v30;
            if ( !v30 )
            {
LABEL_69:
              v14 = -2147024882;
              goto LABEL_39;
            }
            v31 = 0LL;
            if ( CoGetMalloc(1u, ppMalloc) >= 0 )
            {
              v31 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc[0]->lpVtbl->GetSize)(ppMalloc[0], v30);
              ((void (__fastcall *)(LPMALLOC))ppMalloc[0]->lpVtbl->Release)(ppMalloc[0]);
            }
            memset_0(*(void **)(v16 + 16), 0, v31);
            v14 = 0;
            v11 = v61;
            memcpy_0(*(void **)(v16 + 16), v61[2].lpVtbl, Release_low + 18);
          }
          v32 = v11[3].lpVtbl;
          if ( !v32 )
          {
LABEL_38:
            *(_OWORD *)(v16 + 64) = *(_OWORD *)&v11[8].lpVtbl;
            *(_OWORD *)(v16 + 48) = *(_OWORD *)&v11[6].lpVtbl;
            *(_DWORD *)(v16 + 8) = v11[1].lpVtbl;
            *(IMalloc *)(v16 + 32) = v11[4];
            *(IMalloc *)(v16 + 40) = v11[5];
            *(_OWORD *)(v16 + 80) = *(_OWORD *)&v11[10].lpVtbl;
            v17 = 0LL;
            *((_QWORD *)this + 6) = v16;
            goto LABEL_39;
          }
          v33 = LOWORD(v32->Release);
          v34 = CoTaskMemAlloc(v33 + 18);
          *(_QWORD *)(v16 + 24) = v34;
          if ( v34 )
          {
            v35 = 0LL;
            if ( CoGetMalloc(1u, &v61) >= 0 )
            {
              v35 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))v61->lpVtbl->GetSize)(v61, v34);
              ((void (__fastcall *)(LPMALLOC))v61->lpVtbl->Release)(v61);
            }
            memset_0(*(void **)(v16 + 24), 0, v35);
            v14 = 0;
            memcpy_0(*(void **)(v16 + 24), v11[3].lpVtbl, v33 + 18);
            goto LABEL_38;
          }
          goto LABEL_69;
        }
        if ( v19 == -1LL )
          goto LABEL_27;
      }
      *(_WORD *)v15 = 0;
      goto LABEL_27;
    }
    v14 = -2147024882;
  }
LABEL_39:
  if ( v17 )
    SaDeviceParams::`scalar deleting destructor'(v17, DWORD2(v15));
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7EF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v14,
      v54);
  }
  else
  {
    v60 = 0LL;
    v36 = *((_QWORD *)this + 6);
    v57 = *(struct _GUID *)(v36 + 80);
    *(_OWORD *)ppMalloc = *(_OWORD *)(v36 + 64);
    v58 = *(struct _GUID *)(v36 + 48);
    v37 = a5;
    v38 = CreateSaDevice(
            v62,
            a5,
            a6,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(v36 + 8),
            &v58,
            (struct _GUID *)ppMalloc,
            *(_QWORD *)(v36 + 32),
            *(_QWORD *)(v36 + 40),
            *(struct tWAVEFORMATEX **)(v36 + 16),
            *(const struct tWAVEFORMATEX **)(v36 + 24),
            &v57,
            a8,
            a9,
            &v60);
    v14 = v38;
    if ( v38 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7F4,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v38,
        v55);
    }
    else
    {
      v39 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 10);
      v40 = v60;
      if ( v39 != v60 )
      {
        if ( v60 )
        {
          (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v60 + 8LL))(v60);
          v39 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 10);
        }
        *((_QWORD *)this + 10) = v40;
        if ( v39 )
          (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v39 + 16LL))(v39);
      }
      v41 = (IMalloc *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v42 = v41;
      v61 = v41;
      v43 = a7;
      if ( v41 )
      {
        v44 = *((_DWORD *)a7 + 2);
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)v41, 0, 0);
        v42[5].lpVtbl = 0LL;
        v42[6].lpVtbl = 0LL;
        ProcessHeap = GetProcessHeap();
        v46 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
        *v46 = v46;
        v46[1] = v46;
        v46[2] = v46;
        *((_WORD *)v46 + 12) = 257;
        v42[5].lpVtbl = (struct IMallocVtbl *)v46;
        LODWORD(v42[7].lpVtbl) = v44;
      }
      else
      {
        v42 = 0LL;
      }
      *((_QWORD *)this + 7) = v42;
      if ( v42 )
      {
        *((_BYTE *)this + 72) = v37 == AUDCLNT_SHAREMODE_EXCLUSIVE;
        v47 = (unsigned __int64 *)((char *)this + 64);
        if ( (CSaDeviceProxy *)((char *)this + 64) != v43 )
        {
          v48 = *(_QWORD *)v43;
          v49 = *v47;
          if ( *v47 )
          {
            LastError = GetLastError();
            ReleaseAudioResourceHandle(v49);
            SetLastError(LastError);
          }
          *v47 = v48;
          *(_QWORD *)v43 = 0LL;
        }
        v14 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7F9,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)0x8007000ELL,
          v55);
        v14 = -2147024882;
      }
    }
    v50 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v50 + 16LL))(v50);
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)v14;
}
