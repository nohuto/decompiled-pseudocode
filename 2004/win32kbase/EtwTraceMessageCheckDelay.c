/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C0078070
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     Is_GetTopLevelWindowSupported @ 0x1C0012628 (Is_GetTopLevelWindowSupported.c)
 *     McTemplateK0qqqqzzzqx_EtwWriteTransfer @ 0x1C001A94C (McTemplateK0qqqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqqzzzzqx_EtwWriteTransfer @ 0x1C001AAD4 (McTemplateK0qqqqzzzzqx_EtwWriteTransfer.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C001B318 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C0053B2C (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00580D0 (_GetTopLevelWindow.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ValidateHwnd @ 0x1C0091FD0 (ValidateHwnd.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AC874 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0126430 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01265C4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // r13
  struct tagWND *v12; // rax
  const wchar_t *v13; // r12
  PEPROCESS ThreadProcess; // rax
  unsigned int *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  ULONG64 v19; // rdx
  _BYTE **v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  int v24; // r13d
  const wchar_t *v25; // rdx
  const wchar_t *v26; // rcx
  const WCHAR *v27; // rdx
  const WCHAR *v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // [rsp+90h] [rbp-2E8h] BYREF
  unsigned int v31; // [rsp+94h] [rbp-2E4h] BYREF
  int v32; // [rsp+98h] [rbp-2E0h]
  PETHREAD v33; // [rsp+A0h] [rbp-2D8h]
  int v34; // [rsp+A8h] [rbp-2D0h]
  int v35; // [rsp+ACh] [rbp-2CCh]
  int v36; // [rsp+B0h] [rbp-2C8h]
  int v37; // [rsp+B4h] [rbp-2C4h]
  int v38; // [rsp+B8h] [rbp-2C0h]
  int v39; // [rsp+BCh] [rbp-2BCh]
  unsigned int v40; // [rsp+C0h] [rbp-2B8h]
  unsigned int v41; // [rsp+C4h] [rbp-2B4h]
  unsigned int v42; // [rsp+C8h] [rbp-2B0h]
  int v43; // [rsp+CCh] [rbp-2ACh]
  int v44; // [rsp+D0h] [rbp-2A8h]
  int v45; // [rsp+D4h] [rbp-2A4h]
  unsigned int v46; // [rsp+D8h] [rbp-2A0h]
  unsigned int v47; // [rsp+DCh] [rbp-29Ch]
  unsigned int v48; // [rsp+E0h] [rbp-298h]
  int v49; // [rsp+E4h] [rbp-294h]
  const wchar_t *v50; // [rsp+E8h] [rbp-290h]
  PACCESS_TOKEN PrimaryToken; // [rsp+F0h] [rbp-288h]
  const wchar_t *v52; // [rsp+F8h] [rbp-280h]
  __int128 *v53; // [rsp+108h] [rbp-270h]
  __int64 v54; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v55[11]; // [rsp+118h] [rbp-260h] BYREF
  __int128 v56; // [rsp+170h] [rbp-208h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+180h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING v58; // [rsp+190h] [rbp-1E8h] BYREF
  _BYTE v59[144]; // [rsp+1B0h] [rbp-1C8h] BYREF
  _BYTE v60[256]; // [rsp+240h] [rbp-138h] BYREF

  PrimaryToken = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C0245748 - 1) <= 2u
     || (qword_1C0245730 & 0x8001000000040000uLL) == 0
     || (qword_1C0245738 & 0x8001000000040000uLL) != qword_1C0245738
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_1C0245250 <= 5 || !tlgKeywordOn((__int64)&dword_1C0245250, 0x40000LL) )
      return;
  }
  v31 = 0;
  v30 = 0;
  UnicodeString = 0LL;
  v58 = 0LL;
  v56 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 292);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v35 = v3 - v4;
  if ( (int)v3 - v4 < W32kEtwMessageCheckDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)a1);
  v7 = ThreadInfoFlags;
  v36 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v5 < gdwHungAppTimeout )
    return;
  Buffer = 0LL;
  v52 = 0LL;
  v9 = 0LL;
  v50 = 0LL;
  v10 = (struct tagWND *)ValidateHwnd(a1[147]);
  v11 = (__int64)v10;
  if ( !v10 )
    goto LABEL_29;
  if ( (int)EtwpGetClassName(v10, &UnicodeString) >= 0 )
    Buffer = UnicodeString.Buffer;
  v52 = Buffer;
  v12 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)GetTopLevelWindow(v11);
  if ( !v12 )
    goto LABEL_29;
  if ( (struct tagWND *)v11 == v12 )
  {
    v9 = Buffer;
    goto LABEL_28;
  }
  if ( (int)EtwpGetClassName(v12, &v58) >= 0 )
  {
    v9 = v58.Buffer;
LABEL_28:
    v50 = v9;
  }
LABEL_29:
  EtwpGetLastInputProcessTime(a1[53], v3, &v31, &v30);
  v32 = *((_DWORD *)a1 + 296);
  v33 = a1[149];
  v13 = 0LL;
  ThreadProcess = PsGetThreadProcess(*a1);
  v15 = (unsigned int *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
  if ( (unsigned __int64)v15 >= MmUserProbeAddress )
    v15 = (unsigned int *)MmUserProbeAddress;
  v17 = *v15;
  v34 = v17;
  LODWORD(v56) = v17;
  v18 = *((_QWORD *)v15 + 1);
  *((_QWORD *)&v56 + 1) = v18;
  if ( (v18 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = v18 + (unsigned __int16)v17 + 2LL;
  v20 = (_BYTE **)MmUserProbeAddress;
  if ( v19 >= MmUserProbeAddress || (unsigned __int16)v17 > HIWORD(v34) )
    goto LABEL_37;
  if ( (v17 & 1) != 0 )
    goto LABEL_38;
  if ( v19 <= v18 )
  {
LABEL_37:
    if ( (v17 & 1) == 0 )
    {
LABEL_39:
      **v20 = 0;
      goto LABEL_40;
    }
LABEL_38:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v19, v18, v16);
    v20 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_39;
  }
LABEL_40:
  v53 = &v56;
  if ( &v56 )
    v13 = (const wchar_t *)*((_QWORD *)&v56 + 1);
  v21 = (__int64)a1[52];
  if ( (*(_DWORD *)(v21 + 820) & 0x30) == 0x10 )
  {
    PrimaryToken = PsReferencePrimaryToken(*(PEPROCESS *)v21);
    v55[0] = 256LL;
    v54 = 130LL;
    v22 = RtlQueryPackageIdentity(PrimaryToken, v60, v55, v59, &v54, 0LL);
    v24 = v22;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v25 = (const wchar_t *)v59;
      if ( v22 < 0 )
        v25 = &word_1C020BCB0;
      v26 = (const wchar_t *)v60;
      if ( v22 < 0 )
        v26 = &word_1C020BCB0;
      McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        (__int64)v26,
        (__int64)v25,
        v23,
        v7,
        v5,
        v31,
        v30,
        Buffer,
        v9,
        v26,
        v25,
        v32,
        (char)v33);
    }
    if ( (unsigned int)dword_1C0245250 > 5 && tlgKeywordOn((__int64)&dword_1C0245250, 0x40000LL) )
    {
      v27 = (const WCHAR *)v59;
      if ( v24 < 0 )
        v27 = &word_1C020BCB0;
      v28 = (const WCHAR *)v60;
      if ( v24 < 0 )
        v28 = &word_1C020BCB0;
      v37 = 2;
      v38 = 1;
      v55[1] = v33;
      v39 = v32;
      v55[2] = v9;
      v55[3] = Buffer;
      v55[4] = v13;
      v55[5] = v27;
      v55[6] = v28;
      v40 = v30;
      v41 = v31;
      v42 = v5;
      v43 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v28,
        &unk_1C02149C6);
    }
    PsDereferencePrimaryToken(PrimaryToken);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqqzzzqx_EtwWriteTransfer(v21, v19, v18, v7, v5, v31, v30, Buffer, v9, v13, v32, (char)v33);
    if ( (unsigned int)dword_1C0245250 > 5 && tlgKeywordOn((__int64)&dword_1C0245250, 0x40000LL) )
    {
      v44 = 1;
      v55[7] = v33;
      v45 = v32;
      v55[8] = v9;
      v55[9] = Buffer;
      v55[10] = v13;
      v46 = v30;
      v47 = v31;
      v48 = v5;
      v49 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v29,
        &unk_1C02148FF);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v9 )
  {
    if ( Buffer != v9 )
      RtlFreeUnicodeString(&v58);
  }
}
