/*
 * XREFs of ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180054C60
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x180054F30 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18005A25C (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x180066930 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180072E2C (--$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA-AV-$unique_ptr@$$BY0A@U_GUID@@U-$functi.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800BD18C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CB120 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x18013347C (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetFxClsids(
        struct IMMDevice *a1,
        struct _tagpropertykey *a2,
        struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  struct _GUID *v13; // rbx
  int v14; // eax
  int v15; // eax
  struct _GUID **unique_cotaskmem; // rax
  void *v18; // rcx
  HRESULT v19; // eax
  GUID *v20; // r15
  unsigned int v21; // r13d
  int v22; // eax
  __int64 v23; // rax
  struct _GUID **v24; // rax
  void *v25; // rcx
  unsigned int v26; // r15d
  __int64 v27; // r13
  HRESULT v28; // eax
  CONFIGRET v29; // eax
  DWORD v30; // eax
  CONFIGRET v31; // eax
  DWORD v32; // eax
  struct _GUID *v33; // r12
  struct _GUID *v34; // r12
  unsigned int phkDevice; // [rsp+20h] [rbp-E0h]
  const char *ulFlags; // [rsp+28h] [rbp-D8h]
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h] BYREF
  DEVNODE pdnDevInst; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  PROPVARIANT pvar[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h]
  struct _GUID *v43; // [rsp+B8h] [rbp-48h]
  PROPVARIANT v44[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-30h]
  GUID rguid; // [rsp+E0h] [rbp-20h] BYREF
  GUID v47; // [rsp+F0h] [rbp-10h] BYREF
  int v48; // [rsp+100h] [rbp+0h]
  OLECHAR sz[40]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v8 = 0;
  *a4 = 0;
  *a5 = 0LL;
  v40 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e,
         &v40);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E1,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)v9);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)v10);
    goto LABEL_14;
  }
  v38 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v40 + 40LL))(v40, 0LL, &v38);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)(unsigned int)v11);
    v12 = v38;
    goto LABEL_12;
  }
  v12 = v38;
  if ( !v38 )
  {
LABEL_11:
    v10 = 0;
    goto LABEL_12;
  }
  *(_OWORD *)pvar = 0LL;
  v42 = 0LL;
  v13 = 0LL;
  v43 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v38 + 40LL))(
          v38,
          a2,
          pvar);
  v10 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_68;
  }
  if ( LOWORD(pvar[0]) )
  {
    if ( LOWORD(pvar[0]) != 31 )
    {
      LODWORD(ulFlags) = LOWORD(pvar[0]);
      v10 = -2147023092;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x89,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x8007070CLL,
        (int)"0x%08X",
        ulFlags);
      goto LABEL_68;
    }
    v8 = 1;
    unique_cotaskmem = (struct _GUID **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv);
    v13 = *unique_cotaskmem;
    *unique_cotaskmem = 0LL;
    v43 = v13;
    v18 = pv;
    pv = 0LL;
    if ( v18 )
      CoTaskMemFree(v18);
    if ( !v13 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_68;
    }
    v19 = CLSIDFromString((LPCOLESTR)pvar[1], v13);
    v10 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_68;
    }
  }
  else
  {
    if ( a3->pid )
      goto LABEL_8;
    v23 = *(_QWORD *)&a3->fmtid.Data1;
    if ( !*(_QWORD *)&a3->fmtid.Data1 )
      v23 = *(_QWORD *)a3->fmtid.Data4;
    if ( v23 )
    {
LABEL_8:
      v15 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v38 + 40LL))(
              v38,
              a3,
              pvar);
      v10 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x92,
          (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)(unsigned int)v15);
        goto LABEL_68;
      }
      if ( LOWORD(pvar[0]) )
      {
        if ( LOWORD(pvar[0]) != 4127 )
        {
          LODWORD(ulFlags) = LOWORD(pvar[0]);
          v10 = -2147023092;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0x95,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)0x8007070CLL,
            (int)"0x%08X",
            ulFlags);
          goto LABEL_68;
        }
        v8 = (unsigned int)pvar[1];
        if ( !LODWORD(pvar[1]) )
        {
          v10 = -2147024883;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x96,
            (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)0x8007000DLL);
          goto LABEL_68;
        }
        v24 = (struct _GUID **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv);
        v13 = *v24;
        *v24 = 0LL;
        v43 = v13;
        v25 = pv;
        pv = 0LL;
        if ( v25 )
          CoTaskMemFree(v25);
        if ( !v13 )
        {
          v10 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9A,
            (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_68;
        }
        v26 = 0;
        if ( !v8 )
          goto LABEL_10;
        v27 = 0LL;
        do
        {
          v28 = CLSIDFromString(*(LPCOLESTR *)(v42 + v27), &v13[v26]);
          v10 = v28;
          if ( v28 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x9D,
              (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
              (const char *)(unsigned int)v28);
            goto LABEL_68;
          }
          ++v26;
          v27 += 8LL;
        }
        while ( v26 < v8 );
      }
    }
    if ( !v8 )
    {
LABEL_10:
      *a5 = v13;
      *a4 = v8;
      PropVariantClear(pvar);
      v12 = v38;
      goto LABEL_11;
    }
  }
  v20 = v13;
  v21 = 0;
  while ( 1 )
  {
    v47 = *v20;
    v48 = 100;
    *(_OWORD *)v44 = 0LL;
    v45 = 0LL;
    if ( v38 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v38 + 40LL))(v38, &v47, v44);
      v10 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAE,
          (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)(unsigned int)v22);
        goto LABEL_67;
      }
    }
    if ( LOWORD(v44[0]) != 31 )
    {
      rguid = *v20;
      if ( StringFromGUID2(&rguid, sz, 39) <= 0 || !IsAPOClsidRegistered(HKEY_CLASSES_ROOT, sz) )
      {
        v34 = &v13[v21];
        LODWORD(ulFlags) = v34->Data1;
        v10 = -2005139398;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0xC7,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)0x887C003ALL,
          (int)"Missing APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
          ulFlags,
          v34->Data2,
          v34->Data3,
          v34->Data4[0],
          v34->Data4[1],
          v34->Data4[2],
          v34->Data4[3],
          v34->Data4[4],
          v34->Data4[5],
          v34->Data4[6],
          v34->Data4[7],
          pv);
        goto LABEL_67;
      }
      goto LABEL_28;
    }
    v29 = CM_Locate_DevNodeW(&pdnDevInst, (DEVINSTID_W)v44[1], 0);
    v30 = CM_MapCrToWin32Err(v29, 0x507u);
    if ( v30 )
    {
      v10 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0xB5,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
              (const char *)v30,
              phkDevice);
      goto LABEL_67;
    }
    pv = 0LL;
    v31 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, (PHKEY)&pv, 1u);
    v32 = CM_MapCrToWin32Err(v31, 0x507u);
    if ( v32 )
      break;
    rguid = *v20;
    if ( !IsAPOClsidRegistered((HKEY)pv, &rguid) )
    {
      v33 = &v13[v21];
      LODWORD(ulFlags) = v33->Data1;
      v10 = -2005139398;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0xBF,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x887C003ALL,
        (int)"Missing device relative APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
        ulFlags,
        v33->Data2,
        v33->Data3,
        v33->Data4[0],
        v33->Data4[1],
        v33->Data4[2],
        v33->Data4[3],
        v33->Data4[4],
        v33->Data4[5],
        v33->Data4[6],
        v33->Data4[7]);
      goto LABEL_63;
    }
    if ( pv )
      RegCloseKey((HKEY)pv);
LABEL_28:
    PropVariantClear(v44);
    ++v21;
    ++v20;
    if ( v21 >= v8 )
      goto LABEL_10;
  }
  v10 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0xB9,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)v32,
          phkDevice);
LABEL_63:
  if ( pv )
    RegCloseKey((HKEY)pv);
LABEL_67:
  PropVariantClear(v44);
LABEL_68:
  if ( v13 )
    CoTaskMemFree(v13);
  PropVariantClear(pvar);
  v12 = v38;
LABEL_12:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_14:
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  return v10;
}
