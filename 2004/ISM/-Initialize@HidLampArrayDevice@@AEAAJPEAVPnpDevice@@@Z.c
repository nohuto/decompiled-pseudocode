/*
 * XREFs of ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A6DAC
 * Callers:
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800A630C (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003D1F8 (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003D204 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D310 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180095014 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18009F144 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x18009F8CC (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800A0484 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800A059C (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800A44C0 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800A4530 (-LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z.c)
 *     ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800A61F0 (-CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800A6588 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800A7734 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800A7A1C (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800A7B48 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x1800A8028 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800A824C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800A859C (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x1800A9770 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HidLampArrayDevice::Initialize(HidLampArrayDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v4; // r15
  int InterfacePath; // eax
  signed int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PCWSTR v12; // rax
  unsigned int v13; // eax
  int v14; // eax
  char v15; // cl
  signed int LastError; // eax
  __int64 v17; // rdx
  int v18; // eax
  signed int v19; // edi
  _QWORD *v20; // rbx
  struct ParsedHidReportDescriptor *v21; // rbx
  int v22; // eax
  int v23; // r14d
  int v24; // eax
  signed int v25; // eax
  int v26; // eax
  unsigned __int64 v27; // rcx
  size_t v28; // rax
  void *v29; // rax
  const struct std::nothrow_t *v30; // rdx
  void *v31; // rcx
  int v32; // edi
  __int64 v33; // rbx
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  int updated; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  LampArrayTelemetry *v47; // rcx
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-98h] BYREF
  HSTRING string; // [rsp+70h] [rbp-90h] BYREF
  UINT32 length; // [rsp+78h] [rbp-88h] BYREF
  struct ParsedHidReportDescriptor *v53; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v54[7]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 v55; // [rsp+A4h] [rbp-5Ch]
  char v56; // [rsp+A8h] [rbp-58h]
  char v57; // [rsp+A9h] [rbp-57h]
  char v58; // [rsp+AAh] [rbp-56h]
  char v59; // [rsp+ABh] [rbp-55h]
  __int128 v60; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h]
  PCWSTR StringRawBuffer; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v63[2]; // [rsp+D0h] [rbp-30h] BYREF
  PCWSTR v64; // [rsp+D8h] [rbp-28h] BYREF
  const char *v65; // [rsp+E0h] [rbp-20h] BYREF
  PCWSTR v66; // [rsp+E8h] [rbp-18h] BYREF
  const char *v67; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v68; // [rsp+F8h] [rbp-8h] BYREF
  _HIDD_ATTRIBUTES Attributes; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v4 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((RefCountedObject **)this + 2, (volatile signed __int32 *)a2);
  WindowsDeleteString(0LL);
  string = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)a2, &string);
  v6 = InterfacePath;
  if ( InterfacePath < 0 )
  {
    v7 = (unsigned int)InterfacePath;
    v8 = 57LL;
LABEL_86:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)v7);
    goto LABEL_87;
  }
  if ( (unsigned int)dword_1802053F0 > 5 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    *(_QWORD *)v63 = "Attempting to initialize HidLampArrayDevice";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v9,
      byte_1801CA26A,
      v10,
      v11,
      (const unsigned __int16 **)v63,
      &StringRawBuffer);
  }
  v12 = WindowsGetStringRawBuffer(string, &length);
  if ( !length || !*v12 )
  {
    v6 = -2147024809;
    v8 = 63LL;
    goto LABEL_85;
  }
  if ( length > 0x100 )
  {
    v6 = -2147024774;
    v8 = 64LL;
LABEL_85:
    v7 = (unsigned int)v6;
    goto LABEL_86;
  }
  v13 = _o_wcscpy_s((char *)this + 24, 256LL, v12);
  if ( v13 )
  {
    v14 = wil::details::in1diag3::Return_Win32(
            retaddr,
            65LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)v13);
LABEL_11:
    v6 = v14;
    goto LABEL_87;
  }
  v14 = PnpDevice::OpenInterface(*v4);
  if ( v14 < 0 )
    goto LABEL_11;
  PreparsedData = 0LL;
  if ( !HidD_GetPreparsedData(*((HANDLE *)*v4 + 5), &PreparsedData) )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      goto LABEL_19;
    v17 = 73LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v6);
LABEL_19:
    if ( PreparsedData )
      HidD_FreePreparsedData(PreparsedData);
    goto LABEL_87;
  }
  if ( *((_WORD *)PreparsedData + 5) != 89 )
  {
    v6 = -2147024890;
    v17 = 74LL;
    goto LABEL_18;
  }
  if ( *((_WORD *)PreparsedData + 4) != 1 )
  {
    v6 = -2147024890;
    v17 = 75LL;
    goto LABEL_18;
  }
  v53 = 0LL;
  v50 = 0;
  v18 = HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(v15, (__int64)PreparsedData, (char **)&v53, &v50);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v18);
    if ( v53 )
    {
      v20 = (_QWORD *)((char *)v53 - 8);
      `eh vector destructor iterator'(
        (char *)v53,
        24LL,
        *((_QWORD *)v53 - 1),
        (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
      operator delete[](v20, (const struct std::nothrow_t *)(24LL * *v20 + 8));
    }
    if ( PreparsedData )
      HidD_FreePreparsedData(PreparsedData);
    v6 = v19;
    goto LABEL_87;
  }
  v21 = v53;
  v22 = HidLampArrayDevice::CacheReportSizes(this, v53, v50);
  v23 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v22);
    if ( !v21 )
      goto LABEL_34;
    goto LABEL_33;
  }
  v24 = HidLampArrayDevice::ParseReportDescriptors(this, v21, v50);
  v23 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v24);
    if ( !v21 )
    {
LABEL_34:
      if ( PreparsedData )
        HidD_FreePreparsedData(PreparsedData);
LABEL_36:
      v6 = v23;
      goto LABEL_87;
    }
LABEL_33:
    `eh vector destructor iterator'(
      (char *)v21,
      24LL,
      *((_QWORD *)v21 - 1),
      (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    operator delete[]((char *)v21 - 8, (const struct std::nothrow_t *)(24LL * *((_QWORD *)v21 - 1) + 8));
    goto LABEL_34;
  }
  if ( v21 )
  {
    `eh vector destructor iterator'(
      (char *)v21,
      24LL,
      *((_QWORD *)v21 - 1),
      (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    operator delete[]((char *)v21 - 8, (const struct std::nothrow_t *)(24LL * *((_QWORD *)v21 - 1) + 8));
  }
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( HidD_GetAttributes(*((HANDLE *)*v4 + 5), &Attributes) )
  {
    *((_WORD *)this + 269) = Attributes.VendorID;
    *((_WORD *)this + 270) = Attributes.ProductID;
    *((_WORD *)this + 271) = Attributes.VersionNumber;
    v60 = 0LL;
    v61 = 0LL;
    v26 = HidLampArrayDevice::ReceiveLampArrayAttributesReport(this, (struct LampArrayAttributesDeviceReport *)&v60);
    v6 = v26;
    if ( v26 < 0 )
    {
      v7 = (unsigned int)v26;
      v8 = 102LL;
      goto LABEL_86;
    }
    v27 = (int)v60;
    *((_OWORD *)this + 34) = v60;
    *((_QWORD *)this + 70) = v61;
    v28 = 36 * v27;
    if ( !is_mul_ok(v27, 0x24uLL) )
      v28 = -1LL;
    v29 = operator new[](v28, (const struct std::nothrow_t *)&std::nothrow);
    v31 = (void *)*((_QWORD *)this + 71);
    *((_QWORD *)this + 71) = v29;
    if ( v31 )
    {
      operator delete(v31, v30);
      v29 = (void *)*((_QWORD *)this + 71);
    }
    if ( !v29 )
    {
      v6 = -2147024882;
      v8 = 116LL;
      goto LABEL_85;
    }
    v32 = 0;
    if ( *((int *)this + 136) > 0 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        v23 = HidLampArrayDevice::SendLampAttributesRequest(this, v32);
        if ( v23 < 0 )
          break;
        v23 = HidLampArrayDevice::ReceiveLampAttributesReport(this, (struct LampAttributesResponseDeviceReport *)v54);
        if ( v23 < 0 )
        {
          v35 = 123LL;
          goto LABEL_75;
        }
        if ( v54[0] != v32 )
        {
          v6 = -2089418751;
          v8 = 128LL;
          goto LABEL_85;
        }
        *(_DWORD *)(v33 + *((_QWORD *)this + 71)) = v54[0];
        *(_DWORD *)(v33 + *((_QWORD *)this + 71) + 4) = v54[1];
        *(_DWORD *)(v33 + *((_QWORD *)this + 71) + 8) = v54[2];
        *(_DWORD *)(v33 + *((_QWORD *)this + 71) + 12) = v54[3];
        *(_DWORD *)(v33 + *((_QWORD *)this + 71) + 16) = v54[4];
        *(_BYTE *)(v33 + *((_QWORD *)this + 71) + 24) = v56;
        *(_BYTE *)(v33 + *((_QWORD *)this + 71) + 25) = v57;
        *(_BYTE *)(v33 + *((_QWORD *)this + 71) + 26) = v58;
        *(_BYTE *)(v33 + *((_QWORD *)this + 71) + 27) = v59;
        *(_DWORD *)(v33 + *((_QWORD *)this + 71) + 28) = v54[6];
        *(_DWORD *)(v33 + *((_QWORD *)this + 71) + 20) = v54[5];
        if ( *((_DWORD *)this + 140) == 1 )
        {
          *(_DWORD *)(v33 + *((_QWORD *)this + 71) + 32) = HidUsageConverter::KeyboardHidUsageToVKey(v55);
        }
        else if ( *((_DWORD *)this + 140) == 2 )
        {
          if ( v55 >= 6u )
            v34 = 0;
          else
            v34 = dword_1801D5260[v55];
          *(_DWORD *)(v33 + *((_QWORD *)this + 71) + 32) = v34;
        }
        else
        {
          *(_DWORD *)(v33 + *((_QWORD *)this + 71) + 32) = 0;
        }
        ++v32;
        v33 += 36LL;
        if ( v32 >= *((_DWORD *)this + 136) )
          goto LABEL_76;
      }
      v35 = 120LL;
LABEL_75:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v23);
      goto LABEL_36;
    }
LABEL_76:
    if ( (unsigned int)dword_1802053F0 > 5 )
    {
      v64 = WindowsGetStringRawBuffer(string, 0LL);
      v65 = "Successfully parsed device data";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v36,
        byte_1801CA26A,
        v37,
        v38,
        (const unsigned __int16 **)&v65,
        &v64);
      if ( (unsigned int)dword_1802053F0 > 5 )
      {
        v66 = WindowsGetStringRawBuffer(string, 0LL);
        v67 = "Setting device to known-good-state.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v39,
          byte_1801CA26A,
          v40,
          v41,
          (const unsigned __int16 **)&v67,
          &v66);
      }
    }
    v42 = HidLampArrayDevice::SetAutonomousMode(this, 1);
    v6 = v42;
    if ( v42 < 0 )
    {
      v7 = (unsigned int)v42;
      v8 = 169LL;
      goto LABEL_86;
    }
    v68 = 0LL;
    LODWORD(v68) = 1;
    DWORD2(v68) = *((_DWORD *)this + 136) - 1;
    updated = HidLampArrayDevice::SendLampRangeUpdateReport(this, (const struct LampRangeUpdateDeviceReport *)&v68);
    v6 = updated;
    if ( updated < 0 )
    {
      v7 = (unsigned int)updated;
      v8 = 175LL;
      goto LABEL_86;
    }
    LampArrayTelemetry::GetInstance(v45, v44, v46);
    LampArrayTelemetry::LogLampArrayDeviceAdded(
      v47,
      (const unsigned __int16 *)this + 12,
      *((unsigned __int16 *)this + 269),
      *((unsigned __int16 *)this + 270),
      *((_WORD *)this + 271),
      *((_DWORD *)this + 136),
      *((_DWORD *)this + 137),
      *((_DWORD *)this + 138),
      *((_DWORD *)this + 139),
      *((_DWORD *)this + 140),
      *((_DWORD *)this + 141));
    *((_BYTE *)this + 637) = 1;
    v6 = 0;
  }
  else
  {
    v25 = GetLastError();
    v6 = v25;
    if ( v25 > 0 )
      v6 = (unsigned __int16)v25 | 0x80070000;
    if ( v6 < 0 )
    {
      v8 = 92LL;
      goto LABEL_85;
    }
  }
LABEL_87:
  WindowsDeleteString(string);
  return (unsigned int)v6;
}
