/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C006E610
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0032C88 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C0045ECC (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C004A3C0 (_GetTopLevelWindow.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ValidateHwnd @ 0x1C008BD60 (ValidateHwnd.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00A2AC8 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C00A6EA0 (Is_GetTopLevelWindowSupported.c)
 *     McTemplateK0qqqzzzzqx_EtwWriteTransfer @ 0x1C00CA190 (McTemplateK0qqqzzzzqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C012C7E4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1@@-.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C012C968 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$07@.c)
 *     McTemplateK0qqqzzzqx_EtwWriteTransfer @ 0x1C0131C34 (McTemplateK0qqqzzzqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagQ **a1)
{
  char v2; // al
  unsigned int v3; // r8d
  unsigned int ThreadInfoFlags; // eax
  unsigned int v5; // r14d
  PWSTR Buffer; // rbx
  PWSTR v7; // rdi
  struct tagWND *v8; // rax
  struct tagWND *v9; // r15
  struct tagWND *v10; // rax
  __int64 v11; // r15
  PEPROCESS ThreadProcess; // rax
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  ULONG64 v15; // r8
  ULONG64 v16; // rdx
  _BYTE **v17; // rax
  struct tagQ *v18; // rcx
  PACCESS_TOKEN v19; // r13
  int v20; // eax
  int v21; // r8d
  int v22; // r12d
  const WCHAR *v23; // rdx
  const WCHAR *v24; // rcx
  const WCHAR *v25; // rdx
  const WCHAR *v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // [rsp+80h] [rbp-2D8h] BYREF
  unsigned int v29; // [rsp+84h] [rbp-2D4h] BYREF
  int v30; // [rsp+88h] [rbp-2D0h]
  struct tagQ *v31; // [rsp+90h] [rbp-2C8h]
  int v32; // [rsp+98h] [rbp-2C0h]
  unsigned int v33; // [rsp+9Ch] [rbp-2BCh]
  int v34; // [rsp+A0h] [rbp-2B8h]
  int v35; // [rsp+A4h] [rbp-2B4h]
  int v36; // [rsp+A8h] [rbp-2B0h]
  unsigned int v37; // [rsp+ACh] [rbp-2ACh]
  unsigned int v38; // [rsp+B0h] [rbp-2A8h]
  unsigned int v39; // [rsp+B4h] [rbp-2A4h]
  int v40; // [rsp+B8h] [rbp-2A0h]
  int v41; // [rsp+BCh] [rbp-29Ch]
  unsigned int v42; // [rsp+C0h] [rbp-298h]
  unsigned int v43; // [rsp+C4h] [rbp-294h]
  unsigned int v44; // [rsp+C8h] [rbp-290h]
  PWSTR v45; // [rsp+D0h] [rbp-288h]
  PWSTR v46; // [rsp+D8h] [rbp-280h]
  __int128 *v47; // [rsp+E0h] [rbp-278h]
  struct tagQ **v48; // [rsp+F0h] [rbp-268h]
  __int64 v49; // [rsp+F8h] [rbp-260h] BYREF
  _QWORD v50[11]; // [rsp+100h] [rbp-258h] BYREF
  __int128 v51; // [rsp+158h] [rbp-200h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+168h] [rbp-1F0h] BYREF
  struct _UNICODE_STRING v53; // [rsp+178h] [rbp-1E0h] BYREF
  _BYTE v54[144]; // [rsp+190h] [rbp-1C8h] BYREF
  _BYTE v55[256]; // [rsp+220h] [rbp-138h] BYREF

  v48 = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C024B738 - 1) <= 2u
     || (qword_1C024B720 & 0x8001000000040000uLL) == 0
     || (qword_1C024B728 & 0x8001000000040000uLL) != qword_1C024B728
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_1C024B250 <= 5
      || !tlgKeywordOn((__int64)&dword_1C024B250, 0x400000000000LL)
      && (v3 <= 5 || !tlgKeywordOn((__int64)&dword_1C024B250, 0x40000LL)) )
    {
      return;
    }
  }
  v29 = 0;
  v28 = 0;
  UnicodeString = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  EtwpGetLastInputProcessTime(
    a1[53],
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v29,
    &v28);
  if ( v29 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  if ( v28 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)a1);
  v5 = ThreadInfoFlags;
  v33 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  Buffer = 0LL;
  v46 = 0LL;
  v7 = 0LL;
  v45 = 0LL;
  v8 = (struct tagWND *)ValidateHwnd(a1[146]);
  v9 = v8;
  if ( !v8 )
    goto LABEL_29;
  if ( (int)EtwpGetClassName(v8, &UnicodeString) >= 0 )
    Buffer = UnicodeString.Buffer;
  v46 = Buffer;
  v10 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)GetTopLevelWindow();
  if ( !v10 )
    goto LABEL_29;
  if ( v9 == v10 )
  {
    v7 = Buffer;
    goto LABEL_28;
  }
  if ( (int)EtwpGetClassName(v10, &v53) >= 0 )
  {
    v7 = v53.Buffer;
LABEL_28:
    v45 = v7;
  }
LABEL_29:
  v30 = *((_DWORD *)a1 + 294);
  v31 = a1[148];
  v11 = 0LL;
  ThreadProcess = PsGetThreadProcess(*a1);
  v13 = (unsigned int *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
  if ( (unsigned __int64)v13 >= MmUserProbeAddress )
    v13 = (unsigned int *)MmUserProbeAddress;
  v14 = *v13;
  v32 = v14;
  LODWORD(v51) = v14;
  v15 = *((_QWORD *)v13 + 1);
  *((_QWORD *)&v51 + 1) = v15;
  if ( (v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = v15 + (unsigned __int16)v14 + 2LL;
  v17 = (_BYTE **)MmUserProbeAddress;
  if ( v16 >= MmUserProbeAddress || (unsigned __int16)v14 > HIWORD(v32) )
    goto LABEL_37;
  if ( (v14 & 1) != 0 )
    goto LABEL_38;
  if ( v16 <= v15 )
  {
LABEL_37:
    if ( (v14 & 1) == 0 )
    {
LABEL_39:
      **v17 = 0;
      goto LABEL_40;
    }
LABEL_38:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
    v17 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_39;
  }
LABEL_40:
  v47 = &v51;
  if ( &v51 )
    v11 = *((_QWORD *)&v51 + 1);
  v18 = a1[52];
  if ( (*((_DWORD *)v18 + 205) & 0x30) == 0x10 )
  {
    v19 = PsReferencePrimaryToken(*(PEPROCESS *)v18);
    v50[0] = 256LL;
    v49 = 130LL;
    v20 = RtlQueryPackageIdentity(v19, v55, v50, v54, &v49, 0LL);
    v22 = v20;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v23 = (const WCHAR *)v54;
      if ( v20 < 0 )
        v23 = &word_1C0211C10;
      v24 = (const WCHAR *)v55;
      if ( v20 < 0 )
        v24 = &word_1C0211C10;
      McTemplateK0qqqzzzzqx_EtwWriteTransfer(
        (_DWORD)v24,
        (_DWORD)v23,
        v21,
        v5,
        v29,
        v28,
        (__int64)Buffer,
        (__int64)v7,
        (__int64)v24,
        (__int64)v23,
        v30,
        (char)v31);
    }
    if ( (unsigned int)dword_1C024B250 > 5 && tlgKeywordOn((__int64)&dword_1C024B250, 0x400000040000LL) )
    {
      v25 = (const WCHAR *)v54;
      if ( v22 < 0 )
        v25 = &word_1C0211C10;
      v26 = (const WCHAR *)v55;
      if ( v22 < 0 )
        v26 = &word_1C0211C10;
      v34 = 2;
      v35 = 1;
      v50[1] = v31;
      v36 = v30;
      v50[2] = v7;
      v50[3] = Buffer;
      v50[4] = v11;
      v50[5] = v25;
      v50[6] = v26;
      v37 = v28;
      v38 = v29;
      v39 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v26,
        &unk_1C021A38B);
    }
    PsDereferencePrimaryToken(v19);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqzzzqx_EtwWriteTransfer(
        (_DWORD)v18,
        v16,
        v15,
        v5,
        v29,
        v28,
        (__int64)Buffer,
        (__int64)v7,
        v11,
        v30,
        (char)v31);
    if ( (unsigned int)dword_1C024B250 > 5 && tlgKeywordOn((__int64)&dword_1C024B250, 0x400000040000LL) )
    {
      v40 = 1;
      v50[7] = v31;
      v41 = v30;
      v50[8] = v7;
      v50[9] = Buffer;
      v50[10] = v11;
      v42 = v28;
      v43 = v29;
      v44 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v27,
        &unk_1C021A2D1);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v7 )
  {
    if ( Buffer != v7 )
      RtlFreeUnicodeString(&v53);
  }
}
