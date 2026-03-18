/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C00C14A0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0032C88 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C0045ECC (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C004A3C0 (_GetTopLevelWindow.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ValidateHwnd @ 0x1C008BD60 (ValidateHwnd.c)
 *     McTemplateK0qqqqzzzqx_EtwWriteTransfer @ 0x1C00A20F8 (McTemplateK0qqqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqqzzzzqx_EtwWriteTransfer @ 0x1C00A2280 (McTemplateK0qqqqzzzzqx_EtwWriteTransfer.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00A2AC8 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C00A6EA0 (Is_GetTopLevelWindowSupported.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C012C420 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C012C5B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwTraceMessageCheckDelay(PETHREAD *a1)
{
  char v2; // al
  unsigned __int64 v3; // r12
  int v4; // eax
  unsigned int v5; // r15d
  int ThreadInfoFlags; // eax
  int v7; // r14d
  const wchar_t *Buffer; // rbx
  const wchar_t *v9; // rdi
  struct tagWND *v10; // rax
  struct tagWND *v11; // r13
  struct tagWND *v12; // rax
  const wchar_t *v13; // r12
  PEPROCESS ThreadProcess; // rax
  unsigned int *v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  ULONG64 v18; // rdx
  _BYTE **v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  int v23; // r13d
  const wchar_t *v24; // rdx
  const wchar_t *v25; // rcx
  const WCHAR *v26; // rdx
  const WCHAR *v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // [rsp+90h] [rbp-2E8h] BYREF
  unsigned int v30; // [rsp+94h] [rbp-2E4h] BYREF
  int v31; // [rsp+98h] [rbp-2E0h]
  PETHREAD v32; // [rsp+A0h] [rbp-2D8h]
  int v33; // [rsp+A8h] [rbp-2D0h]
  int v34; // [rsp+ACh] [rbp-2CCh]
  int v35; // [rsp+B0h] [rbp-2C8h]
  int v36; // [rsp+B4h] [rbp-2C4h]
  int v37; // [rsp+B8h] [rbp-2C0h]
  int v38; // [rsp+BCh] [rbp-2BCh]
  unsigned int v39; // [rsp+C0h] [rbp-2B8h]
  unsigned int v40; // [rsp+C4h] [rbp-2B4h]
  unsigned int v41; // [rsp+C8h] [rbp-2B0h]
  int v42; // [rsp+CCh] [rbp-2ACh]
  int v43; // [rsp+D0h] [rbp-2A8h]
  int v44; // [rsp+D4h] [rbp-2A4h]
  unsigned int v45; // [rsp+D8h] [rbp-2A0h]
  unsigned int v46; // [rsp+DCh] [rbp-29Ch]
  unsigned int v47; // [rsp+E0h] [rbp-298h]
  int v48; // [rsp+E4h] [rbp-294h]
  const wchar_t *v49; // [rsp+E8h] [rbp-290h]
  PACCESS_TOKEN PrimaryToken; // [rsp+F0h] [rbp-288h]
  const wchar_t *v51; // [rsp+F8h] [rbp-280h]
  __int128 *v52; // [rsp+108h] [rbp-270h]
  __int64 v53; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v54[11]; // [rsp+118h] [rbp-260h] BYREF
  __int128 v55; // [rsp+170h] [rbp-208h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+180h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING v57; // [rsp+190h] [rbp-1E8h] BYREF
  _BYTE v58[144]; // [rsp+1B0h] [rbp-1C8h] BYREF
  _BYTE v59[256]; // [rsp+240h] [rbp-138h] BYREF

  PrimaryToken = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C024B738 - 1) <= 2u
     || (qword_1C024B720 & 0x8001000000040000uLL) == 0
     || (qword_1C024B728 & 0x8001000000040000uLL) != qword_1C024B728
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_1C024B250 <= 5 || !tlgKeywordOn((__int64)&dword_1C024B250, 0x40000LL) )
      return;
  }
  v30 = 0;
  v29 = 0;
  UnicodeString = 0LL;
  v57 = 0LL;
  v55 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 290);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v34 = v3 - v4;
  if ( (int)v3 - v4 < W32kEtwMessageCheckDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)a1);
  v7 = ThreadInfoFlags;
  v35 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v5 < gdwHungAppTimeout )
    return;
  Buffer = 0LL;
  v51 = 0LL;
  v9 = 0LL;
  v49 = 0LL;
  v10 = (struct tagWND *)ValidateHwnd((__int64)a1[146]);
  v11 = v10;
  if ( !v10 )
    goto LABEL_29;
  if ( (int)EtwpGetClassName(v10, &UnicodeString) >= 0 )
    Buffer = UnicodeString.Buffer;
  v51 = Buffer;
  v12 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)GetTopLevelWindow();
  if ( !v12 )
    goto LABEL_29;
  if ( v11 == v12 )
  {
    v9 = Buffer;
    goto LABEL_28;
  }
  if ( (int)EtwpGetClassName(v12, &v57) >= 0 )
  {
    v9 = v57.Buffer;
LABEL_28:
    v49 = v9;
  }
LABEL_29:
  EtwpGetLastInputProcessTime(a1[53], v3, &v30, &v29);
  v31 = *((_DWORD *)a1 + 294);
  v32 = a1[148];
  v13 = 0LL;
  ThreadProcess = PsGetThreadProcess(*a1);
  v15 = (unsigned int *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
  if ( (unsigned __int64)v15 >= MmUserProbeAddress )
    v15 = (unsigned int *)MmUserProbeAddress;
  v16 = *v15;
  v33 = v16;
  LODWORD(v55) = v16;
  v17 = *((_QWORD *)v15 + 1);
  *((_QWORD *)&v55 + 1) = v17;
  if ( (v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = v17 + (unsigned __int16)v16 + 2LL;
  v19 = (_BYTE **)MmUserProbeAddress;
  if ( v18 >= MmUserProbeAddress || (unsigned __int16)v16 > HIWORD(v33) )
    goto LABEL_37;
  if ( (v16 & 1) != 0 )
    goto LABEL_38;
  if ( v18 <= v17 )
  {
LABEL_37:
    if ( (v16 & 1) == 0 )
    {
LABEL_39:
      **v19 = 0;
      goto LABEL_40;
    }
LABEL_38:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
    v19 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_39;
  }
LABEL_40:
  v52 = &v55;
  if ( &v55 )
    v13 = (const wchar_t *)*((_QWORD *)&v55 + 1);
  v20 = (__int64)a1[52];
  if ( (*(_DWORD *)(v20 + 820) & 0x30) == 0x10 )
  {
    PrimaryToken = PsReferencePrimaryToken(*(PEPROCESS *)v20);
    v54[0] = 256LL;
    v53 = 130LL;
    v21 = RtlQueryPackageIdentity(PrimaryToken, v59, v54, v58, &v53, 0LL);
    v23 = v21;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v24 = (const wchar_t *)v58;
      if ( v21 < 0 )
        v24 = &word_1C0211C10;
      v25 = (const wchar_t *)v59;
      if ( v21 < 0 )
        v25 = &word_1C0211C10;
      McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        (__int64)v25,
        (__int64)v24,
        v22,
        v7,
        v5,
        v30,
        v29,
        Buffer,
        v9,
        v25,
        v24,
        v31,
        (char)v32);
    }
    if ( (unsigned int)dword_1C024B250 > 5 && tlgKeywordOn((__int64)&dword_1C024B250, 0x40000LL) )
    {
      v26 = (const WCHAR *)v58;
      if ( v23 < 0 )
        v26 = &word_1C0211C10;
      v27 = (const WCHAR *)v59;
      if ( v23 < 0 )
        v27 = &word_1C0211C10;
      v36 = 2;
      v37 = 1;
      v54[1] = v32;
      v38 = v31;
      v54[2] = v9;
      v54[3] = Buffer;
      v54[4] = v13;
      v54[5] = v26;
      v54[6] = v27;
      v39 = v29;
      v40 = v30;
      v41 = v5;
      v42 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v27,
        &unk_1C021A536);
    }
    PsDereferencePrimaryToken(PrimaryToken);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqqzzzqx_EtwWriteTransfer(v20, v18, v17, v7, v5, v30, v29, Buffer, v9, v13, v31, (char)v32);
    if ( (unsigned int)dword_1C024B250 > 5 && tlgKeywordOn((__int64)&dword_1C024B250, 0x40000LL) )
    {
      v43 = 1;
      v54[7] = v32;
      v44 = v31;
      v54[8] = v9;
      v54[9] = Buffer;
      v54[10] = v13;
      v45 = v29;
      v46 = v30;
      v47 = v5;
      v48 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v28,
        &unk_1C021A46F);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v9 )
  {
    if ( Buffer != v9 )
      RtlFreeUnicodeString(&v57);
  }
}
