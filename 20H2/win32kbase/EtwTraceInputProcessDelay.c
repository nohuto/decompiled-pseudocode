/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C00C0400
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C0028818 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ValidateHwnd @ 0x1C004C310 (ValidateHwnd.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0076294 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00B3F8C (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C00B586C (Is_GetTopLevelWindowSupported.c)
 *     _GetTopLevelWindow @ 0x1C00B7AD8 (_GetTopLevelWindow.c)
 *     McTemplateK0qqqzzzzqx_EtwWriteTransfer @ 0x1C00CA54C (McTemplateK0qqqzzzzqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C01244A4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1@@-.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0124628 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$07@.c)
 *     McTemplateK0qqqzzzqx_EtwWriteTransfer @ 0x1C01298F4 (McTemplateK0qqqzzzqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagTHREADINFO *a1)
{
  char v2; // al
  unsigned int v3; // r8d
  int ThreadInfoFlags; // eax
  int v5; // r14d
  PWSTR Buffer; // rbx
  PWSTR v7; // rdi
  struct tagWND *v8; // rax
  __int64 v9; // r15
  struct tagWND *v10; // rax
  __int64 v11; // r15
  PEPROCESS ThreadProcess; // rax
  unsigned int *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  ULONG64 v16; // r8
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  __int64 v19; // rcx
  PACCESS_TOKEN v20; // r13
  int v21; // eax
  int v22; // r8d
  int v23; // r12d
  const WCHAR *v24; // rdx
  const WCHAR *v25; // rcx
  const WCHAR *v26; // rdx
  const WCHAR *v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // [rsp+80h] [rbp-2D8h] BYREF
  unsigned int v30; // [rsp+84h] [rbp-2D4h] BYREF
  int v31; // [rsp+88h] [rbp-2D0h]
  __int64 v32; // [rsp+90h] [rbp-2C8h]
  int v33; // [rsp+98h] [rbp-2C0h]
  int v34; // [rsp+9Ch] [rbp-2BCh]
  int v35; // [rsp+A0h] [rbp-2B8h]
  int v36; // [rsp+A4h] [rbp-2B4h]
  int v37; // [rsp+A8h] [rbp-2B0h]
  unsigned int v38; // [rsp+ACh] [rbp-2ACh]
  unsigned int v39; // [rsp+B0h] [rbp-2A8h]
  int v40; // [rsp+B4h] [rbp-2A4h]
  int v41; // [rsp+B8h] [rbp-2A0h]
  int v42; // [rsp+BCh] [rbp-29Ch]
  unsigned int v43; // [rsp+C0h] [rbp-298h]
  unsigned int v44; // [rsp+C4h] [rbp-294h]
  int v45; // [rsp+C8h] [rbp-290h]
  PWSTR v46; // [rsp+D0h] [rbp-288h]
  PWSTR v47; // [rsp+D8h] [rbp-280h]
  __int128 *v48; // [rsp+E0h] [rbp-278h]
  struct tagTHREADINFO *v49; // [rsp+F0h] [rbp-268h]
  __int64 v50; // [rsp+F8h] [rbp-260h] BYREF
  _QWORD v51[11]; // [rsp+100h] [rbp-258h] BYREF
  __int128 v52; // [rsp+158h] [rbp-200h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+168h] [rbp-1F0h] BYREF
  struct _UNICODE_STRING v54; // [rsp+178h] [rbp-1E0h] BYREF
  _BYTE v55[144]; // [rsp+190h] [rbp-1C8h] BYREF
  _BYTE v56[256]; // [rsp+220h] [rbp-138h] BYREF

  v49 = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C0243738 - 1) <= 2u
     || (qword_1C0243720 & 0x8001000000040000uLL) == 0
     || (qword_1C0243728 & 0x8001000000040000uLL) != qword_1C0243728
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_1C0243250 <= 5
      || !tlgKeywordOn((__int64)&dword_1C0243250, 0x400000000000LL)
      && (v3 <= 5 || !tlgKeywordOn((__int64)&dword_1C0243250, 0x40000LL)) )
    {
      return;
    }
  }
  v30 = 0;
  v29 = 0;
  UnicodeString = 0LL;
  v54 = 0LL;
  v52 = 0LL;
  EtwpGetLastInputProcessTime(
    *((struct tagQ *const *)a1 + 54),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v30,
    &v29);
  if ( v30 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  if ( v29 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v5 = ThreadInfoFlags;
  v34 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  Buffer = 0LL;
  v47 = 0LL;
  v7 = 0LL;
  v46 = 0LL;
  v8 = (struct tagWND *)ValidateHwnd(*((_QWORD *)a1 + 148));
  v9 = (__int64)v8;
  if ( !v8 )
    goto LABEL_29;
  if ( (int)EtwpGetClassName(v8, &UnicodeString) >= 0 )
    Buffer = UnicodeString.Buffer;
  v47 = Buffer;
  v10 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)GetTopLevelWindow(v9);
  if ( !v10 )
    goto LABEL_29;
  if ( (struct tagWND *)v9 == v10 )
  {
    v7 = Buffer;
    goto LABEL_28;
  }
  if ( (int)EtwpGetClassName(v10, &v54) >= 0 )
  {
    v7 = v54.Buffer;
LABEL_28:
    v46 = v7;
  }
LABEL_29:
  v31 = *((_DWORD *)a1 + 298);
  v32 = *((_QWORD *)a1 + 150);
  v11 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  v13 = (unsigned int *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
  if ( (unsigned __int64)v13 >= MmUserProbeAddress )
    v13 = (unsigned int *)MmUserProbeAddress;
  v15 = *v13;
  v33 = v15;
  LODWORD(v52) = v15;
  v16 = *((_QWORD *)v13 + 1);
  *((_QWORD *)&v52 + 1) = v16;
  if ( (v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = v16 + (unsigned __int16)v15 + 2LL;
  v18 = (_BYTE **)MmUserProbeAddress;
  if ( v17 >= MmUserProbeAddress || (unsigned __int16)v15 > HIWORD(v33) )
    goto LABEL_37;
  if ( (v15 & 1) != 0 )
    goto LABEL_38;
  if ( v17 <= v16 )
  {
LABEL_37:
    if ( (v15 & 1) == 0 )
    {
LABEL_39:
      **v18 = 0;
      goto LABEL_40;
    }
LABEL_38:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v17, v16, v14);
    v18 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_39;
  }
LABEL_40:
  v48 = &v52;
  if ( &v52 )
    v11 = *((_QWORD *)&v52 + 1);
  v19 = *((_QWORD *)a1 + 53);
  if ( (*(_DWORD *)(v19 + 820) & 0x30) == 0x10 )
  {
    v20 = PsReferencePrimaryToken(*(PEPROCESS *)v19);
    v51[0] = 256LL;
    v50 = 130LL;
    v21 = RtlQueryPackageIdentity(v20, v56, v51, v55, &v50, 0LL);
    v23 = v21;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v24 = (const WCHAR *)v55;
      if ( v21 < 0 )
        v24 = &word_1C0209C50;
      v25 = (const WCHAR *)v56;
      if ( v21 < 0 )
        v25 = &word_1C0209C50;
      McTemplateK0qqqzzzzqx_EtwWriteTransfer(
        (_DWORD)v25,
        (_DWORD)v24,
        v22,
        v5,
        v30,
        v29,
        (__int64)Buffer,
        (__int64)v7,
        (__int64)v25,
        (__int64)v24,
        v31,
        v32);
    }
    if ( (unsigned int)dword_1C0243250 > 5 && tlgKeywordOn((__int64)&dword_1C0243250, 0x400000040000LL) )
    {
      v26 = (const WCHAR *)v55;
      if ( v23 < 0 )
        v26 = &word_1C0209C50;
      v27 = (const WCHAR *)v56;
      if ( v23 < 0 )
        v27 = &word_1C0209C50;
      v35 = 2;
      v36 = 1;
      v51[1] = v32;
      v37 = v31;
      v51[2] = v7;
      v51[3] = Buffer;
      v51[4] = v11;
      v51[5] = v26;
      v51[6] = v27;
      v38 = v29;
      v39 = v30;
      v40 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v27,
        &unk_1C021281B);
    }
    PsDereferencePrimaryToken(v20);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqzzzqx_EtwWriteTransfer(v19, v17, v16, v5, v30, v29, (__int64)Buffer, (__int64)v7, v11, v31, v32);
    if ( (unsigned int)dword_1C0243250 > 5 && tlgKeywordOn((__int64)&dword_1C0243250, 0x400000040000LL) )
    {
      v41 = 1;
      v51[7] = v32;
      v42 = v31;
      v51[8] = v7;
      v51[9] = Buffer;
      v51[10] = v11;
      v43 = v29;
      v44 = v30;
      v45 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v28,
        &unk_1C0212761);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v7 )
  {
    if ( Buffer != v7 )
      RtlFreeUnicodeString(&v54);
  }
}
