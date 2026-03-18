/*
 * XREFs of ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0042E40
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0042BEC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C01202A0 (-_LoadCursorsAndIcons@@YAHXZ.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D490C (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DB3B0 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0041E2C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C004303C (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C004320C (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C005CE2C (RtlInitUnicodeStringOrId.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00B2E58 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C6090 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555544455AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01D3F90 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U_ea_1C01D3F90.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444443334@Z @ 0x1C01D4260 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@-$_tlg.c)
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01D44D8 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 *     ?GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z @ 0x1C01D46BC (-GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall zzzInternalSetSystemCursor(__int64 a1, unsigned int a2, const struct _UNICODE_STRING *a3, int a4)
{
  struct tagCURSOR *CursorOrFrame; // r13
  unsigned __int64 v7; // rsi
  struct _UNICODE_STRING *v9; // r14
  PWSTR Buffer; // rdx
  __int64 v12; // rdx
  __int64 v13; // r14
  _BOOL8 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  struct tagCURSOR *v25; // rcx
  struct tagCURSOR *v26; // rcx
  struct tagCURSOR *v27; // rcx
  struct tagCURSOR *v28; // rcx
  struct tagCURSOR *v29; // rcx
  struct tagCURSOR *v30; // rcx
  struct tagCURSOR *v31; // rcx
  struct tagCURSOR *v32; // rcx
  struct tagCURSOR *v33; // rcx
  struct tagCURSOR *v34; // rcx
  PWSTR v35; // r14
  __int64 v36; // r9
  int v37; // ecx
  int v38; // ebx
  int v39; // ebx
  int v40; // ebx
  int v41; // ebx
  const char *v42; // rax
  __int64 i; // rbx
  struct tagCURSOR *v44; // rcx
  struct tagCURSOR *v45; // rcx
  __int64 v46; // rdi
  struct tagCURSOR *v47; // rcx
  int v48; // r14d
  struct tagCURSOR *v49; // rcx
  int v50; // r15d
  struct tagCURSOR *v51; // rcx
  struct tagCURSOR *v52; // rcx
  int v53; // r13d
  struct tagCURSOR *v54; // rcx
  struct tagCURSOR *v55; // rcx
  struct tagCURSOR *v56; // rcx
  struct tagCURSOR *v57; // rcx
  int v58; // r8d
  int v59; // r9d
  __int64 v60; // r10
  __int64 v61; // r11
  int v62; // ecx
  __int64 v63; // rdx
  int v64; // r8d
  int v65; // r9d
  int v66; // [rsp+A0h] [rbp-80h] BYREF
  int v67; // [rsp+A4h] [rbp-7Ch] BYREF
  int v68; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v69; // [rsp+ACh] [rbp-74h] BYREF
  int v70; // [rsp+B0h] [rbp-70h] BYREF
  int v71; // [rsp+B4h] [rbp-6Ch] BYREF
  int v72; // [rsp+B8h] [rbp-68h] BYREF
  int v73; // [rsp+BCh] [rbp-64h] BYREF
  int v74; // [rsp+C0h] [rbp-60h] BYREF
  int v75; // [rsp+C4h] [rbp-5Ch] BYREF
  int v76; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v82; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v83; // [rsp+100h] [rbp-20h] BYREF
  __int64 v84; // [rsp+108h] [rbp-18h] BYREF
  __int64 v85; // [rsp+110h] [rbp-10h] BYREF
  __int64 v86; // [rsp+118h] [rbp-8h] BYREF
  __int64 v87; // [rsp+120h] [rbp+0h] BYREF
  __int64 v88; // [rsp+128h] [rbp+8h] BYREF
  __int64 v89; // [rsp+130h] [rbp+10h] BYREF
  __int64 v90; // [rsp+138h] [rbp+18h] BYREF
  __int64 v91; // [rsp+140h] [rbp+20h] BYREF
  _QWORD v92[2]; // [rsp+150h] [rbp+30h] BYREF
  _QWORD v93[10]; // [rsp+160h] [rbp+40h] BYREF
  int v94; // [rsp+1C8h] [rbp+A8h]
  int v95; // [rsp+1C8h] [rbp+A8h]
  int v96; // [rsp+1D0h] [rbp+B0h] BYREF
  int v97; // [rsp+1D8h] [rbp+B8h] BYREF

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
  v13 = *(_QWORD *)(v7 + gasyscur[0] + 8);
  v14 = v13 == 0;
  if ( v14 != (a4 == 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v12);
  if ( v13 )
  {
    zzzSetSystemImage((struct tagCURSOR *)a1, *(struct tagCURSOR **)(v7 + gasyscur[0] + 8));
  }
  else
  {
    if ( PsGetCurrentProcess() != gpepCSRSS
      || (v23 = *(_QWORD *)(a1 + 64)) == 0
      || (v23 & 0xFFFFFFFFFFFF0000uLL) != 0
      || (unsigned __int16)v23 - 100 != a2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gpepCSRSS, v22);
    }
    v92[1] = a1;
    v24 = *(unsigned __int16 *)(v7 + gasyscur[0]);
    *(_DWORD *)(a1 + 80) |= 0x200u;
    *(_QWORD *)(a1 + 64) = v24;
    v92[0] = &gasyscur[v7 / 8 + 1];
    HMAssignmentLock(v92);
  }
  v15 = *(_QWORD *)(v7 + gasyscur[0] + 8);
  if ( (unsigned int)dword_1C0330B30 > 5 && (qword_1C0330B40 & 8) != 0 && (qword_1C0330B48 & 8) == qword_1C0330B48 )
  {
    v94 = *(_DWORD *)UPDWORDPointer(8232LL);
    v78 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 13);
    v77 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v25) + 12);
    v79 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v26) + 11);
    v97 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v27) + 43);
    v96 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v28) + 42);
    v66 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v29) + 36) >> 1;
    v67 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v30) + 35);
    v68 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v31) + 20);
    v80 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v32) + 6);
    if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v33) + 6) )
      CursorOrFrame = InputTraceLogging::GetCursorOrFrame(v34);
    if ( a3 )
    {
      v35 = a3->Buffer;
      if ( ((unsigned __int64)v35 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v36 = (unsigned __int16)v35;
        v35 = &gStrBufSetSystemCursorPath;
        RtlStringCchPrintfW(&gStrBufSetSystemCursorPath, 0x104uLL, L"ResourceID %i", v36);
      }
    }
    else
    {
      v35 = L"Empty";
    }
    v70 = v94;
    v83 = v78;
    v84 = v77;
    v85 = v79;
    v71 = v97;
    v72 = v96;
    v73 = v66;
    v74 = v67;
    v75 = v68;
    v82 = (__int64)v35;
    v69 = a2;
    v37 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 19);
    v81 = (__int64)CursorOrFrame;
    v76 = v37;
    v86 = v80;
    if ( a4 )
    {
      v38 = a4 - 1;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v41 )
            {
              if ( v41 == 1 )
                v42 = "Replace Mouse With Pen";
              else
                v42 = "UNKNOWN";
            }
            else
            {
              v42 = "Restore Mouse Cursors";
            }
          }
          else
          {
            v42 = "App called SetSystemCursor";
          }
        }
        else
        {
          v42 = "App called SPI_SETCURSORS";
        }
      }
      else
      {
        v42 = "User Login";
      }
    }
    else
    {
      v42 = "Session Init";
    }
    v80 = (__int64)v42;
    v79 = (__int64)InputTraceLogging::CurIndexName(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)&dword_1C0330B30,
      (int)&dword_1C02EF820,
      (__int64)&v79,
      (__int64)&v80,
      (__int64)&v81,
      (__int64)&v86,
      (__int64)&v76,
      (__int64)&v75,
      (__int64)&v74,
      (__int64)&v73,
      (__int64)&v72,
      (__int64)&v71,
      (__int64)&v85,
      (__int64)&v84,
      (__int64)&v83,
      (__int64)&v70,
      (__int64)&v69,
      (__int64)&v82);
  }
  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) && v15 )
  {
    for ( i = *(_QWORD *)(v15 + 40); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (unsigned int)dword_1C0330B30 > 5 && (qword_1C0330B40 & 8) != 0 && (qword_1C0330B48 & 8) == qword_1C0330B48 )
      {
        UPDWORDPointer(8232LL);
        InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i);
        InputTraceLogging::GetCursorOrFrame(v44);
        v46 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v45) + 11);
        v48 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v47) + 43);
        v50 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v49) + 42);
        InputTraceLogging::GetCursorOrFrame(v51);
        v53 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v52) + 35);
        v95 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v54) + 20);
        v81 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v55) + 6);
        if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v56) + 6) )
          InputTraceLogging::GetCursorOrFrame(v57);
        LODWORD(v77) = v95;
        v97 = v59;
        v87 = v60;
        v88 = v61;
        v89 = v46;
        v96 = v48;
        v68 = v50;
        v67 = v58;
        v66 = v53;
        v62 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 19);
        v90 = v81;
        LODWORD(v78) = v62;
        v91 = v63;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C0330B30,
          (unsigned int)&unk_1C02EF8D2,
          v64,
          v65,
          (__int64)&v91,
          (__int64)&v90,
          (__int64)&v78,
          (__int64)&v77,
          (__int64)&v66,
          (__int64)&v67,
          (__int64)&v68,
          (__int64)&v96,
          (__int64)&v89,
          (__int64)&v88,
          (__int64)&v87,
          (__int64)&v97);
      }
    }
  }
  v93[2] = 0LL;
  v16 = *(_QWORD *)(v7 + gasyscur[0] + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v93[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v93;
  v93[1] = v16;
  HMLockObject(v16);
  xxxEnsureDpiCursorsForSysCur(a2);
  return ThreadUnlock1(v19, v18, v20);
}
