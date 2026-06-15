/*
 * XREFs of ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000D610
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006070 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000B9BC (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD40 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA40 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000E170 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000E8E0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140046C94 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14000D9F0 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000DE00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x14003E6F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF__guid_ @ 0x140047C10 (WPP_SF__guid_.c)
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x140050650 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessNode::CreateAPOProcessNode(
        const struct _GUID *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        _OWORD *a6,
        HKEY *a7)
{
  __int64 v11; // rcx
  OLECHAR *v12; // rax
  HKEY v13; // rbx
  LSTATUS ValueW; // eax
  struct APO_REG_PROPERTIES *v15; // rcx
  APO_REG_PROPERTIES *v16; // rax
  __int64 v17; // rdx
  APO_FLAG Flags; // edi
  HKEY v19; // rax
  HKEY v20; // rbx
  HKEY v21; // rax
  int v23; // eax
  CONFIGRET v24; // eax
  DWORD v25; // eax
  CONFIGRET v26; // eax
  DWORD v27; // eax
  int APOPropertiesInternal; // eax
  int Common; // edi
  __int64 v30; // rdx
  OLECHAR *phkResult; // [rsp+20h] [rbp-E0h]
  HKEY hkey; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pdnDevInst; // [rsp+48h] [rbp-B8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h]
  struct APO_REG_PROPERTIES v36; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v37; // [rsp+4C0h] [rbp+3C0h] BYREF
  int v38; // [rsp+4D0h] [rbp+3D0h]
  APO_REG_PROPERTIES v39; // [rsp+4E0h] [rbp+3E0h] BYREF
  OLECHAR sz[40]; // [rsp+930h] [rbp+830h] BYREF
  WCHAR SubKey[80]; // [rsp+980h] [rbp+880h] BYREF
  OLECHAR pvData[512]; // [rsp+A20h] [rbp+920h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E68h] [rbp+D68h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_322a074b0bd933fdfde6fb1895abf2b7_Traceguids, a1);
  }
  v37 = *a1;
  v38 = 100;
  *(_OWORD *)pvar = 0LL;
  v35 = 0LL;
  if ( a2 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, &v37, pvar);
    Common = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)v23,
        (int)phkResult);
      goto LABEL_28;
    }
  }
  if ( LOWORD(pvar[0]) == 31 )
  {
    v24 = CM_Locate_DevNodeW(&pdnDevInst, (DEVINSTID_W)pvar[1], 0);
    v25 = CM_MapCrToWin32Err(v24, 0x507u);
    if ( v25 )
    {
      Common = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x225,
                 (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
                 (const char *)v25,
                 (unsigned int)phkResult);
      goto LABEL_28;
    }
    hkey = 0LL;
    v26 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, &hkey, 1u);
    v27 = CM_MapCrToWin32Err(v26, 0x507u);
    if ( v27 )
    {
      Common = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x229,
                 (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
                 (const char *)v27,
                 (unsigned int)phkResult);
    }
    else
    {
      APOPropertiesInternal = GetAPOPropertiesInternal(hkey, a1, &v36);
      Common = APOPropertiesInternal;
      if ( APOPropertiesInternal >= 0 )
      {
        if ( hkey )
          RegCloseKey(hkey);
        goto LABEL_21;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)APOPropertiesInternal,
        (int)phkResult);
    }
    if ( hkey )
      RegCloseKey(hkey);
    goto LABEL_28;
  }
  if ( StringFromGUID2(a1, sz, 39) <= 0 )
  {
    Common = -2147024809;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)Common,
      (int)phkResult);
    goto LABEL_28;
  }
  v11 = 39LL;
  v12 = sz;
  while ( *v12 )
  {
    ++v12;
    if ( !--v11 )
    {
      Common = -2147024809;
      goto LABEL_20;
    }
  }
  if ( v11 == 1 )
  {
    phkResult = sz;
    Common = StringCchPrintfW(SubKey, 0x4BuLL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects");
    if ( Common < 0 )
      goto LABEL_44;
    if ( RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hkey) )
    {
      Common = -2005139398;
      goto LABEL_44;
    }
    v13 = hkey;
    Common = InnerGetCommon(hkey, a1, &v39);
    if ( Common >= 0 )
    {
      v39.u32NumAPOInterfaces = 1;
      pdnDevInst = 1024;
      ValueW = RegGetValueW(v13, 0LL, L"APOInterface0", 2u, 0LL, pvData, &pdnDevInst);
      Common = ValueW;
      if ( ValueW )
      {
        if ( ValueW > 0 )
          Common = (unsigned __int16)ValueW | 0x80070000;
      }
      else
      {
        Common = CLSIDFromString(pvData, v39.iidAPOInterfaceList);
        if ( Common >= 0 )
        {
          v15 = &v36;
          v16 = &v39;
          v17 = 8LL;
          do
          {
            v15->clsid = v16->clsid;
            *(_OWORD *)&v15->Flags = *(_OWORD *)&v16->Flags;
            *(_OWORD *)&v15->szFriendlyName[6] = *(_OWORD *)&v16->szFriendlyName[6];
            *(_OWORD *)&v15->szFriendlyName[14] = *(_OWORD *)&v16->szFriendlyName[14];
            *(_OWORD *)&v15->szFriendlyName[22] = *(_OWORD *)&v16->szFriendlyName[22];
            *(_OWORD *)&v15->szFriendlyName[30] = *(_OWORD *)&v16->szFriendlyName[30];
            *(_OWORD *)&v15->szFriendlyName[38] = *(_OWORD *)&v16->szFriendlyName[38];
            v15 = (struct APO_REG_PROPERTIES *)((char *)v15 + 128);
            v15[-1].iidAPOInterfaceList[0] = *(IID *)&v16->szFriendlyName[46];
            v16 = (APO_REG_PROPERTIES *)((char *)v16 + 128);
            --v17;
          }
          while ( v17 );
          v15->clsid = v16->clsid;
          *(_OWORD *)&v15->Flags = *(_OWORD *)&v16->Flags;
          *(_OWORD *)&v15->szFriendlyName[6] = *(_OWORD *)&v16->szFriendlyName[6];
          *(_OWORD *)&v15->szFriendlyName[14] = *(_OWORD *)&v16->szFriendlyName[14];
          *(_DWORD *)&v15->szFriendlyName[22] = *(_DWORD *)&v16->szFriendlyName[22];
        }
      }
    }
    RegCloseKey(hkey);
  }
  else
  {
    Common = -2147418113;
  }
LABEL_20:
  if ( Common < 0 )
    goto LABEL_44;
LABEL_21:
  Flags = v36.Flags;
  if ( (v36.u32MaxOutputConnections != 1 || v36.u32MaxInputConnections != 1) && (v36.Flags & 0x10) == 0 )
  {
    Common = -2005139401;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)0x887C0037LL,
      (int)phkResult);
    goto LABEL_28;
  }
  v19 = (HKEY)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v19;
  hkey = v19;
  if ( v19 )
  {
    *((_QWORD *)v19 + 1) = 0LL;
    *((_QWORD *)v19 + 2) = 0LL;
    *((_DWORD *)v19 + 6) = a3;
    *((_QWORD *)v19 + 4) = 0LL;
    *((_DWORD *)v19 + 10) = 2;
    *(_QWORD *)v19 = &CAPOProcessNode::`vftable';
    *((_DWORD *)v19 + 12) = Flags;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 )
  {
    v21 = (HKEY)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    hkey = v21;
    if ( v21 )
    {
      *((_QWORD *)v21 + 5) = 0LL;
      *((_DWORD *)v21 + 12) = 1;
      *((_DWORD *)v21 + 13) = 1;
      *(_DWORD *)v21 = a4;
      *((_DWORD *)v21 + 1) = a5;
      *(CLSID *)(v21 + 2) = v36.clsid;
      *(_OWORD *)(v21 + 6) = *a6;
      *((_QWORD *)v20 + 4) = v21;
      *a7 = v20;
      Common = 0;
      goto LABEL_28;
    }
    v30 = 571LL;
  }
  else
  {
    v30 = 568LL;
  }
  Common = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
    (const char *)0x8007000ELL,
    (int)phkResult);
  if ( v20 )
    (**(void (__fastcall ***)(HKEY, __int64))v20)(v20, 1LL);
LABEL_28:
  PropVariantClear(pvar);
  return (unsigned int)Common;
}
