/*
 * XREFs of ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0079CA4
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0079A50 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C007B480 (-_LoadCursorsAndIcons@@YAHXZ.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D3AFC (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DA6F0 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00122C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     RtlInitUnicodeStringOrId @ 0x1C0078EEC (RtlInitUnicodeStringOrId.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C0079EA0 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C007A070 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C007AC9C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00D73E8 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555544455AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01D3180 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U_ea_1C01D3180.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444443334@Z @ 0x1C01D3450 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@-$_tlg.c)
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01D36C8 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 *     ?GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z @ 0x1C01D38AC (-GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall zzzInternalSetSystemCursor(__int64 a1, unsigned int a2, const struct _UNICODE_STRING *a3, int a4)
{
  struct tagCURSOR *CursorOrFrame; // r13
  unsigned __int64 v7; // rsi
  struct _UNICODE_STRING *v9; // r14
  WCHAR *Buffer; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  _BOOL8 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  struct tagCURSOR *v29; // rcx
  struct tagCURSOR *v30; // rcx
  struct tagCURSOR *v31; // rcx
  struct tagCURSOR *v32; // rcx
  struct tagCURSOR *v33; // rcx
  struct tagCURSOR *v34; // rcx
  struct tagCURSOR *v35; // rcx
  struct tagCURSOR *v36; // rcx
  struct tagCURSOR *v37; // rcx
  struct tagCURSOR *v38; // rcx
  PWSTR v39; // r14
  __int64 v40; // r9
  int v41; // ecx
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  int v45; // ebx
  const char *v46; // rax
  __int64 i; // rbx
  struct tagCURSOR *v48; // rcx
  struct tagCURSOR *v49; // rcx
  __int64 v50; // rdi
  struct tagCURSOR *v51; // rcx
  int v52; // r14d
  struct tagCURSOR *v53; // rcx
  int v54; // r15d
  struct tagCURSOR *v55; // rcx
  struct tagCURSOR *v56; // rcx
  int v57; // r13d
  struct tagCURSOR *v58; // rcx
  struct tagCURSOR *v59; // rcx
  struct tagCURSOR *v60; // rcx
  struct tagCURSOR *v61; // rcx
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // r10
  __int64 v65; // r11
  int v66; // ecx
  __int64 v67; // rdx
  int v68; // r8d
  int v69; // r9d
  int v70; // [rsp+A0h] [rbp-80h] BYREF
  int v71; // [rsp+A4h] [rbp-7Ch] BYREF
  int v72; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v73; // [rsp+ACh] [rbp-74h] BYREF
  int v74; // [rsp+B0h] [rbp-70h] BYREF
  int v75; // [rsp+B4h] [rbp-6Ch] BYREF
  int v76; // [rsp+B8h] [rbp-68h] BYREF
  int v77; // [rsp+BCh] [rbp-64h] BYREF
  int v78; // [rsp+C0h] [rbp-60h] BYREF
  int v79; // [rsp+C4h] [rbp-5Ch] BYREF
  int v80; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v81; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v83; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v84; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v86; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v87; // [rsp+100h] [rbp-20h] BYREF
  __int64 v88; // [rsp+108h] [rbp-18h] BYREF
  __int64 v89; // [rsp+110h] [rbp-10h] BYREF
  __int64 v90; // [rsp+118h] [rbp-8h] BYREF
  __int64 v91; // [rsp+120h] [rbp+0h] BYREF
  __int64 v92; // [rsp+128h] [rbp+8h] BYREF
  __int64 v93; // [rsp+130h] [rbp+10h] BYREF
  __int64 v94; // [rsp+138h] [rbp+18h] BYREF
  __int64 v95; // [rsp+140h] [rbp+20h] BYREF
  _QWORD v96[2]; // [rsp+150h] [rbp+30h] BYREF
  _QWORD v97[10]; // [rsp+160h] [rbp+40h] BYREF
  int v98; // [rsp+1C8h] [rbp+A8h]
  int v99; // [rsp+1C8h] [rbp+A8h]
  int v100; // [rsp+1D0h] [rbp+B0h] BYREF
  int v101; // [rsp+1D8h] [rbp+B8h] BYREF

  CursorOrFrame = 0LL;
  v7 = 552LL * a2;
  v9 = (struct _UNICODE_STRING *)&gasyscur[v7 / 8 + 2];
  if ( a3 )
  {
    Buffer = a3->Buffer;
    if ( ((unsigned __int64)Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(v9, (PCWSTR)&gasyscur[v7 / 8 + 4]);
      v9->MaximumLength = 520;
      RtlUnicodeStringCopy((struct _UNICODE_STRING *)&gasyscur[v7 / 8 + 2], a3);
      v9->Buffer[259] = 0;
    }
    else
    {
      RtlInitUnicodeStringOrId(v9, Buffer);
    }
  }
  else
  {
    RtlInitUnicodeString(v9, 0LL);
  }
  v15 = *(_QWORD *)(v7 + gasyscur[0] + 8);
  v16 = v15 == 0;
  if ( v16 != (a4 == 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v12, v13, v14);
  if ( v15 )
  {
    zzzSetSystemImage((struct tagCURSOR *)a1, *(struct tagCURSOR **)(v7 + gasyscur[0] + 8));
  }
  else
  {
    if ( PsGetCurrentProcess(v16, v12, v13) != gpepCSRSS
      || (v27 = *(_QWORD *)(a1 + 64)) == 0
      || (v27 & 0xFFFFFFFFFFFF0000uLL) != 0
      || (unsigned __int16)v27 - 100 != a2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gpepCSRSS, v24, v25, v26);
    }
    v96[1] = a1;
    v28 = *(unsigned __int16 *)(v7 + gasyscur[0]);
    *(_DWORD *)(a1 + 80) |= 0x200u;
    *(_QWORD *)(a1 + 64) = v28;
    v96[0] = &gasyscur[v7 / 8 + 1];
    HMAssignmentLock(v96);
  }
  v17 = *(_QWORD *)(v7 + gasyscur[0] + 8);
  if ( (unsigned int)dword_1C032FB30 > 5 && (qword_1C032FB40 & 8) != 0 && (qword_1C032FB48 & 8) == qword_1C032FB48 )
  {
    v98 = *(_DWORD *)UPDWORDPointer(8232LL);
    v82 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v17) + 13);
    v81 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v29) + 12);
    v83 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v30) + 11);
    v101 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v31) + 43);
    v100 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v32) + 42);
    v70 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v33) + 36) >> 1;
    v71 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v34) + 35);
    v72 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v35) + 20);
    v84 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v36) + 6);
    if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v37) + 6) )
      CursorOrFrame = InputTraceLogging::GetCursorOrFrame(v38);
    if ( a3 )
    {
      v39 = a3->Buffer;
      if ( ((unsigned __int64)v39 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v40 = (unsigned __int16)v39;
        v39 = &gStrBufSetSystemCursorPath;
        RtlStringCchPrintfW(&gStrBufSetSystemCursorPath, 0x104uLL, (size_t *)L"ResourceID %i", v40);
      }
    }
    else
    {
      v39 = L"Empty";
    }
    v74 = v98;
    v87 = v82;
    v88 = v81;
    v89 = v83;
    v75 = v101;
    v76 = v100;
    v77 = v70;
    v78 = v71;
    v79 = v72;
    v86 = (__int64)v39;
    v73 = a2;
    v41 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v17) + 19);
    v85 = (__int64)CursorOrFrame;
    v80 = v41;
    v90 = v84;
    if ( a4 )
    {
      v42 = a4 - 1;
      if ( v42 )
      {
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              if ( v45 == 1 )
                v46 = "Replace Mouse With Pen";
              else
                v46 = "UNKNOWN";
            }
            else
            {
              v46 = "Restore Mouse Cursors";
            }
          }
          else
          {
            v46 = "App called SetSystemCursor";
          }
        }
        else
        {
          v46 = "App called SPI_SETCURSORS";
        }
      }
      else
      {
        v46 = "User Login";
      }
    }
    else
    {
      v46 = "Session Init";
    }
    v84 = (__int64)v46;
    v83 = (__int64)InputTraceLogging::CurIndexName(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)&dword_1C032FB30,
      (int)&dword_1C02EEE30,
      (__int64)&v83,
      (__int64)&v84,
      (__int64)&v85,
      (__int64)&v90,
      (__int64)&v80,
      (__int64)&v79,
      (__int64)&v78,
      (__int64)&v77,
      (__int64)&v76,
      (__int64)&v75,
      (__int64)&v89,
      (__int64)&v88,
      (__int64)&v87,
      (__int64)&v74,
      (__int64)&v73,
      (__int64)&v86);
  }
  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) && v17 )
  {
    for ( i = *(_QWORD *)(v17 + 40); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (unsigned int)dword_1C032FB30 > 5 && (qword_1C032FB40 & 8) != 0 && (qword_1C032FB48 & 8) == qword_1C032FB48 )
      {
        UPDWORDPointer(8232LL);
        InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i);
        InputTraceLogging::GetCursorOrFrame(v48);
        v50 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v49) + 11);
        v52 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v51) + 43);
        v54 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v53) + 42);
        InputTraceLogging::GetCursorOrFrame(v55);
        v57 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v56) + 35);
        v99 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v58) + 20);
        v85 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v59) + 6);
        if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v60) + 6) )
          InputTraceLogging::GetCursorOrFrame(v61);
        LODWORD(v81) = v99;
        v101 = v63;
        v91 = v64;
        v92 = v65;
        v93 = v50;
        v100 = v52;
        v72 = v54;
        v71 = v62;
        v70 = v57;
        v66 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 19);
        v94 = v85;
        LODWORD(v82) = v66;
        v95 = v67;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C032FB30,
          (unsigned int)&unk_1C02EEEE2,
          v68,
          v69,
          (__int64)&v95,
          (__int64)&v94,
          (__int64)&v82,
          (__int64)&v81,
          (__int64)&v70,
          (__int64)&v71,
          (__int64)&v72,
          (__int64)&v100,
          (__int64)&v93,
          (__int64)&v92,
          (__int64)&v91,
          (__int64)&v101);
      }
    }
  }
  v97[2] = 0LL;
  v18 = *(_QWORD *)(v7 + gasyscur[0] + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v97[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v97;
  v97[1] = v18;
  HMLockObject(v18);
  xxxEnsureDpiCursorsForSysCur(a2);
  return ThreadUnlock1(v21, v20, v22);
}
