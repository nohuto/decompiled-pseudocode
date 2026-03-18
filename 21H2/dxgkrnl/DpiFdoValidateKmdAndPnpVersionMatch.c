/*
 * XREFs of DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C01FAB24
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C01F992C (DpiFdoInitializeFdo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C002636C (-RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1C0060200 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$.c)
 *     DpiGetDriverFullPath @ 0x1C01FD0D4 (DpiGetDriverFullPath.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C0215344 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 *     LocateIndexesOfCharacterInString @ 0x1C0218DA0 (LocateIndexesOfCharacterInString.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     IsKnownMismatchedVersionedDriver @ 0x1C0388C78 (IsKnownMismatchedVersionedDriver.c)
 */

__int64 __fastcall DpiFdoValidateKmdAndPnpVersionMatch(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v3; // r15d
  char v4; // bl
  _DWORD *v5; // r13
  unsigned int v6; // ecx
  int DriverFullPath; // eax
  _WORD *v8; // r8
  __int64 v9; // r9
  _WORD *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int16 LowPart; // dx
  unsigned int v14; // edi
  unsigned int *v15; // r12
  unsigned int v16; // ebx
  int v17; // eax
  NTSTATUS v18; // eax
  __int64 v19; // r15
  union _LARGE_INTEGER v20; // rbx
  __int64 v21; // rdi
  __int64 LowPart_low; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r11d
  __int64 v28; // rcx
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  union _LARGE_INTEGER v30; // [rsp+78h] [rbp-90h] BYREF
  union _LARGE_INTEGER v31[2]; // [rsp+80h] [rbp-88h] BYREF
  int v32; // [rsp+90h] [rbp-78h] BYREF
  int v33; // [rsp+94h] [rbp-74h] BYREF
  int v34; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v35[3]; // [rsp+9Ch] [rbp-6Ch] BYREF
  UNICODE_STRING String; // [rsp+A8h] [rbp-60h] BYREF
  union _LARGE_INTEGER v37; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-48h] BYREF
  PVOID P[2]; // [rsp+C8h] [rbp-40h] BYREF
  union _LARGE_INTEGER *v40; // [rsp+D8h] [rbp-30h] BYREF
  int v41; // [rsp+E0h] [rbp-28h]
  __int128 v42; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v43; // [rsp+F8h] [rbp-10h] BYREF
  int v44; // [rsp+100h] [rbp-8h]

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  *(_OWORD *)P = 0LL;
  v4 = 0;
  v5 = (_DWORD *)(a1 + 1124);
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 64) + 40LL) + 28LL);
  v35[1] = v6;
  if ( v6 < 0x6000
    || *v5 == 1297040209 && (v6 < 0x8000 || *v5 != 1297040209)
    || *(_BYTE *)(a1 + 2693)
    || *(_BYTE *)(a1 + 2692)
    || *(_BYTE *)(a1 + 2695)
    || *(_BYTE *)(a1 + 481)
    || *(_BYTE *)(a1 + 2694)
    || *(_BYTE *)(a1 + 1159) )
  {
    goto LABEL_35;
  }
  v30.QuadPart = 0LL;
  DriverFullPath = DpiGetDriverFullPath(v1, P);
  if ( DriverFullPath < 0 )
    goto LABEL_42;
  DriverFullPath = DxgkpGetFileVersion((struct _UNICODE_STRING *)P, &v30, 0LL);
  if ( DriverFullPath < 0 )
    goto LABEL_42;
  v8 = *(_WORD **)(a1 + 4824);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, -1073741823LL);
    goto LABEL_35;
  }
  *(_OWORD *)&v31[0].LowPart = 0LL;
  v9 = 0x7FFFLL;
  v10 = v8;
  while ( *v10 )
  {
    ++v10;
    if ( !--v9 )
    {
      LowPart_low = LOWORD(v31[0].LowPart);
      goto LABEL_17;
    }
  }
  v31[1].QuadPart = (LONGLONG)v8;
  LowPart_low = 0x7FFF - v9;
  LOWORD(LowPart_low) = 2 * (0x7FFF - v9);
  LOWORD(v31[0].LowPart) = LowPart_low;
  HIWORD(v31[0].u.LowPart) = LowPart_low + 2;
LABEL_17:
  v11 = 0x7FFFLL;
  v43 = *(_QWORD *)L"00000";
  v44 = *(_DWORD *)L"0";
  v12 = &v43;
  String = 0LL;
  while ( *(_WORD *)v12 )
  {
    v12 = (__int64 *)((char *)v12 + 2);
    if ( !--v11 )
      goto LABEL_22;
  }
  String.Buffer = (wchar_t *)&v43;
  String.Length = 2 * (0x7FFF - v11);
  String.MaximumLength = String.Length + 2;
LABEL_22:
  v40 = 0LL;
  v41 = 0;
  v42 = 0LL;
  DriverFullPath = LocateIndexesOfCharacterInString(v31, LowPart_low, v11, &v40);
  if ( DriverFullPath < 0 )
  {
LABEL_42:
    WdLogSingleEntry1(2LL, DriverFullPath);
    goto LABEL_35;
  }
  v14 = 0;
  v15 = (unsigned int *)&v40;
  while ( 1 )
  {
    if ( v14 && (v3 = *((_DWORD *)&v40 + v14 - 1) + 1, v14 == 3) )
      v16 = LowPart >> 1;
    else
      v16 = *v15;
    if ( v3 >= v16 || v16 > LowPart >> 1 )
    {
      WdLogSingleEntry1(1LL, 7992LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"startCharIndex < endCharIndex && endCharIndex <= (PnPDriverVersionString.Length / sizeof(WCHAR))",
        7992LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v17 = RtlUnicodeStringCchCopyStringN(&String, (wchar_t *)(v31[1].QuadPart + 2LL * v3), v16 - v3);
    if ( v17 < 0 )
    {
      WdLogSingleEntry1(2LL, v17);
      v4 = 0;
      goto LABEL_35;
    }
    v18 = RtlUnicodeStringToInteger(&String, 0, (PULONG)&v42 + v14);
    v19 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry1(2LL, v18);
LABEL_34:
      v4 = 0;
      goto LABEL_35;
    }
    ++v14;
    ++v15;
    if ( v14 > 3 )
      break;
    LowPart = v31[0].LowPart;
    v3 = 0;
  }
  v20 = v30;
  HIDWORD(v29) = WORD2(v42) | ((_DWORD)v42 << 16);
  LODWORD(v29) = WORD6(v42) | (DWORD2(v42) << 16);
  v21 = v29;
  if ( v29 == v30.QuadPart || (unsigned __int8)IsKnownMismatchedVersionedDriver((unsigned int)*v5, &v29, &v30) )
    goto LABEL_34;
  if ( (unsigned int)dword_1C012F918 > 5 && tlgKeywordOn((__int64)&dword_1C012F918, 0x400000000100LL) )
  {
    v32 = *(_DWORD *)(a1 + 1140);
    v33 = *(_DWORD *)(a1 + 1136);
    v34 = *(_DWORD *)(a1 + 1132);
    v35[0] = *(_DWORD *)(a1 + 1128);
    v40 = v31;
    LODWORD(v29) = v27;
    v37 = v20;
    v38 = v21;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v24,
      byte_1C0099DC4,
      v25,
      v26,
      (unsigned __int16 **)&v40,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v29,
      (__int64)v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32);
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
    2LL,
    a1,
    v21,
    (union _LARGE_INTEGER)v20.QuadPart,
    v19,
    -1073741438LL);
  DxgCreateLiveDumpWithWdLogs(403LL, 2059LL);
  LOBYTE(v28) = 1;
  if ( (unsigned __int8)WdIsDebuggerPresent(v28) )
  {
    DbgPrintEx(
      0x65u,
      0,
      "A mismatch between the PNP/INF version and the KMD file version on the graphics adapter has been detected. The ada"
      "pter will fail to start.");
    __debugbreak();
  }
  v4 = 1;
LABEL_35:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return v4 != 0 ? 0xC0000182 : 0;
}
