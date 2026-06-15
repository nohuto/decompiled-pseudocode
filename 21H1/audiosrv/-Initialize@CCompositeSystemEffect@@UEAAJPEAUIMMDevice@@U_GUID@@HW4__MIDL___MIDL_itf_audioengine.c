/*
 * XREFs of ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180010B80
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180010500 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D58 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18004C254 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800BD18C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x180130B34 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180132ADC (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 */

__int64 __fastcall CCompositeSystemEffect::Initialize(
        CCompositeSystemEffect *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  LPVOID *v9; // rdx
  bool v10; // r15
  struct IMMDevice *v11; // rcx
  int v12; // edi
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // r14d
  void *v17; // rcx
  __int64 v18; // r9
  int v19; // eax
  int v20; // ecx
  int v21; // r14d
  __int64 v22; // rax
  void *v23; // rcx
  int v24; // eax
  unsigned int v25; // r14d
  struct IAudioSystemEffects2 **v26; // r12
  __int64 v27; // r15
  LPVOID *v28; // rdx
  __int64 (__fastcall *v29)(__int64, struct IMMDevice *, __int64, struct _GUID *); // rax
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // edi
  __int64 v35; // rax
  LPVOID v36; // rcx
  __int64 v37; // rcx
  struct IAudioProcessingObject **v38; // rdi
  struct IAudioProcessingObject **v39; // rsi
  struct IAudioProcessingObject *v40; // rcx
  __int64 v42; // rax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdi
  struct IAudioProcessingObject *v48; // rdx
  struct IAudioSystemEffects2 **p_pv; // rax
  unsigned int v50; // ebx
  char *v51; // r15
  int v52; // r13d
  int v53; // r12d
  __int64 v54; // rax
  char *v55; // rcx
  int v56; // ebx
  int v57; // edi
  int v58; // esi
  int v59; // r14d
  _DWORD *v60; // rax
  LPVOID v61; // rcx
  struct IAudioSystemEffects2 **v62; // rbx
  int v63; // eax
  unsigned int v64; // edi
  int v65; // eax
  unsigned int v66; // ebx
  int pdwType; // [rsp+20h] [rbp-A1h]
  const char *pvData; // [rsp+28h] [rbp-99h]
  LPDWORD pcbData; // [rsp+30h] [rbp-91h]
  int v70; // [rsp+50h] [rbp-71h]
  unsigned __int8 v71; // [rsp+80h] [rbp-41h]
  LPVOID pv; // [rsp+88h] [rbp-39h] BYREF
  __int64 v73; // [rsp+90h] [rbp-31h] BYREF
  unsigned int v74; // [rsp+98h] [rbp-29h]
  char *v75; // [rsp+A0h] [rbp-21h] BYREF
  DWORD v76; // [rsp+A8h] [rbp-19h] BYREF
  int v77; // [rsp+ACh] [rbp-15h] BYREF
  struct _GUID v78; // [rsp+B0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+47h]
  __int64 (__fastcall ***v80)(_QWORD, GUID *, void **); // [rsp+110h] [rbp+4Fh] BYREF
  void *v81; // [rsp+118h] [rbp+57h] BYREF
  struct _GUID *v82; // [rsp+120h] [rbp+5Fh]
  int v83; // [rsp+128h] [rbp+67h]

  v83 = a4;
  v82 = a3;
  v76 = 4;
  v10 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"LoadSystemEffectInAudioSrv",
          0x18u,
          0LL,
          &v77,
          &v76)
     || !v77;
  v11 = (struct IMMDevice *)*((_QWORD *)this + 13);
  if ( v11 != a2 )
  {
    if ( a2 )
    {
      ((void (__fastcall *)(struct IMMDevice *))a2->lpVtbl->AddRef)(a2);
      v11 = (struct IMMDevice *)*((_QWORD *)this + 13);
    }
    *((_QWORD *)this + 13) = a2;
    if ( v11 )
      ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->Release)(v11);
  }
  v12 = 0;
  if ( *((int *)this + 16) > 0 )
  {
    while ( 1 )
    {
      v81 = 0LL;
      if ( v10 )
      {
        lpVtbl = a2->lpVtbl;
        pv = 0LL;
        v14 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))lpVtbl->GetId)(a2, &pv);
        v16 = v14;
        if ( v14 < 0 )
        {
          v46 = 772LL;
LABEL_77:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v46,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v14,
            pdwType);
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_79;
        }
        v17 = v81;
        if ( v81 )
        {
          v81 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
        }
        if ( v12 < 0 || v12 >= *((_DWORD *)this + 16) )
        {
          ATL::_AtlRaiseException(0xC000008C, v15);
          __debugbreak();
        }
        LODWORD(v80) = *((_DWORD *)this + 10);
        v18 = *((_QWORD *)this + 7) + 16LL * v12;
        v75 = (char *)pv;
        v14 = Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
                &v81,
                (__int64 *)&v75,
                (unsigned int *)&v80,
                v18);
        v16 = v14;
        if ( v14 < 0 )
        {
          v46 = 774LL;
          goto LABEL_77;
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      else
      {
        v80 = 0LL;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
        v42 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                (char *)this + 56,
                (unsigned int)v12);
        pvData = (const char *)&v80;
        v43 = CSystemEffectWrapper::Create(v42, a2, 0LL, *((unsigned int *)this + 10));
        v16 = v43;
        if ( v43 < 0 )
        {
          v45 = 760LL;
          goto LABEL_72;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v81);
        v43 = (**v80)(v80, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v81);
        v16 = v43;
        if ( v43 < 0 )
        {
          v45 = 762LL;
LABEL_72:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v45,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v43,
            pdwType);
          goto LABEL_73;
        }
        v73 = 0LL;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
        v44 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v81)(
                v81,
                &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
                &v73);
        v16 = v44;
        if ( v44 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2FD,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v44,
            pdwType);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
LABEL_73:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
          goto LABEL_79;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
      }
      v19 = *((_DWORD *)this + 20);
      v20 = *((_DWORD *)this + 21);
      if ( v19 == v20 )
      {
        if ( v20 )
        {
          v21 = 2 * v19;
          if ( (v19 & 0x40000000) != 0 )
            goto LABEL_68;
        }
        else
        {
          v21 = 1;
        }
        if ( (unsigned __int64)v21 > 0xFFFFFFF || (v22 = _o__recalloc(*((_QWORD *)this + 9), v21, 8LL)) == 0 )
        {
LABEL_68:
          v16 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x309,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            pdwType);
LABEL_79:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v81);
          return v16;
        }
        *((_QWORD *)this + 9) = v22;
        v19 = *((_DWORD *)this + 20);
        *((_DWORD *)this + 21) = v21;
      }
      v9 = (LPVOID *)(*((_QWORD *)this + 9) + 8LL * v19);
      if ( !v9 )
        goto LABEL_27;
      *v9 = v81;
      v23 = v81;
      if ( v81 )
        break;
LABEL_28:
      ++*((_DWORD *)this + 20);
      if ( v23 )
      {
        v81 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      if ( ++v12 >= *((_DWORD *)this + 16) )
        goto LABEL_31;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)v81 + 8LL))(v81);
LABEL_27:
    v23 = v81;
    goto LABEL_28;
  }
LABEL_31:
  v24 = *((_DWORD *)this + 20);
  v25 = 0;
  v74 = 0;
  v26 = a7;
  if ( v24 <= 0 )
  {
LABEL_53:
    if ( v24 == 1 )
    {
      v38 = a6;
      if ( a6 )
      {
        if ( *((int *)this + 20) <= 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v9);
          __debugbreak();
        }
        v39 = (struct IAudioProcessingObject **)*((_QWORD *)this + 9);
        v40 = *v39;
        if ( *v39 )
        {
          ((void (__fastcall *)(struct IAudioProcessingObject *))v40->lpVtbl->AddRef)(v40);
          v40 = *v39;
        }
        *v38 = v40;
      }
      if ( v26 )
      {
        if ( *((int *)this + 24) <= 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v9);
          __debugbreak();
        }
        v62 = (struct IAudioSystemEffects2 **)*((_QWORD *)this + 11);
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v62);
        *v26 = *v62;
      }
    }
    else
    {
      if ( a6 )
      {
        v63 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *))this)(
                this,
                &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10);
        v64 = v63;
        if ( v63 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x32F,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v63,
            pdwType);
          return v64;
        }
      }
      if ( v26 )
      {
        v65 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, struct IAudioSystemEffects2 **))this)(
                this,
                &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                v26);
        v66 = v65;
        if ( v65 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x332,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v65,
            pdwType);
          return v66;
        }
      }
    }
    return 0LL;
  }
  v27 = 0LL;
  while ( 1 )
  {
    v73 = 0LL;
    pv = 0LL;
    if ( (v25 & 0x80000000) != 0 || (signed int)v25 >= *((_DWORD *)this + 20) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v9);
      __debugbreak();
    }
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v27 + *((_QWORD *)this + 9)))(
           *(_QWORD *)(v27 + *((_QWORD *)this + 9)),
           &GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6,
           &v73) < 0 )
    {
      v47 = *((_QWORD *)this + 7);
      v78 = *v82;
      v48 = *(struct IAudioProcessingObject **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                 (char *)this + 72,
                                                 v25);
      p_pv = (struct IAudioSystemEffects2 **)&pv;
      if ( !v26 )
        p_pv = 0LL;
      v31 = InitializeSystemEffectsInterface(a2, v48, (struct _GUID *)(v47 + 16LL * (int)v25), &v78, v83, a5, p_pv);
    }
    else
    {
      if ( v26 )
        v28 = &pv;
      else
        HIDWORD(v28) = 0;
      HIDWORD(pcbData) = HIDWORD(v28);
      pdwType = v83;
      v29 = *(__int64 (__fastcall **)(__int64, struct IMMDevice *, __int64, struct _GUID *))(*(_QWORD *)v73 + 24LL);
      v30 = *((_QWORD *)this + 7) + 16LL * (int)v25;
      v78 = *v82;
      v31 = v29(v73, a2, v30, &v78);
    }
    LODWORD(v75) = v31;
    if ( v31 < 0 )
      break;
    v32 = *((_DWORD *)this + 24);
    v33 = *((_DWORD *)this + 25);
    if ( v32 == v33 )
    {
      if ( v33 )
      {
        v34 = 2 * v32;
        if ( (v32 & 0x40000000) != 0 )
          goto LABEL_85;
      }
      else
      {
        v34 = 1;
      }
      if ( (unsigned __int64)v34 > 0xFFFFFFF || (v35 = _o__recalloc(*((_QWORD *)this + 11), v34, 8LL)) == 0 )
      {
LABEL_85:
        v50 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31D,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          pdwType);
        goto LABEL_89;
      }
      *((_DWORD *)this + 25) = v34;
      *((_QWORD *)this + 11) = v35;
      v32 = *((_DWORD *)this + 24);
    }
    v9 = (LPVOID *)(*((_QWORD *)this + 11) + 8LL * v32);
    if ( !v9 )
      goto LABEL_87;
    *v9 = pv;
    v36 = pv;
    if ( pv )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 8LL))(pv);
LABEL_87:
      v36 = pv;
    }
    ++*((_DWORD *)this + 24);
    if ( v36 )
    {
      pv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v73;
    if ( v73 )
    {
      v73 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v24 = *((_DWORD *)this + 20);
    ++v25;
    v27 += 8LL;
    v74 = v25;
    if ( (int)v25 >= v24 )
      goto LABEL_53;
  }
  v51 = (char *)this + 56;
  *(_QWORD *)&v78.Data1 = (char *)this + 56;
  LOBYTE(v80) = *(_BYTE *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (char *)this + 56,
                             v25)
                         + 15);
  LOBYTE(v81) = *(_BYTE *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (char *)this + 56,
                             v25)
                         + 14);
  v71 = *(_BYTE *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)this + 56, v25) + 13);
  v52 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (char *)this + 56,
                               v25)
                           + 12);
  v53 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (char *)this + 56,
                               v25)
                           + 11);
  v54 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)this + 56, v25);
  v55 = (char *)this + 56;
  v56 = *(unsigned __int8 *)(v54 + 10);
  v57 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v55, v25) + 9);
  v58 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v51, v25) + 8);
  v59 = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v51, v25) + 6);
  LODWORD(v51) = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         v51,
                                         v74)
                                     + 4);
  v60 = (_DWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*(_QWORD *)&v78.Data1, v74);
  v70 = v56;
  v50 = (unsigned int)v75;
  LODWORD(pcbData) = (_DWORD)v51;
  LODWORD(pvData) = *v60;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x321,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v75,
    (int)"SysFxInitializationFailure{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    pvData,
    pcbData,
    v59,
    v58,
    v57,
    v70,
    v53,
    v52,
    v71,
    (unsigned __int8)v81,
    (unsigned __int8)v80);
LABEL_89:
  v61 = pv;
  if ( pv )
  {
    pv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v61 + 16LL))(v61);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
  return v50;
}
