/*
 * XREFs of ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80
 * Callers:
 *     ?_LoadCursorsAndIcons@@YGHXZ @ 0xD8CF2 (-_LoadCursorsAndIcons@@YGHXZ.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0xD8DF2 (-xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason.c)
 *     ?zzzSetSystemCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x143292 (-zzzSetSystemCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YGXXZ @ 0x148BFC (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YGXXZ.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z @ 0x9AEC8 (-Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z.c)
 *     _RtlInitUnicodeStringOrId@8 @ 0xABF7C (_RtlInitUnicodeStringOrId@8.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YGXI@Z @ 0xD9106 (-xxxEnsureDpiCursorsForSysCur@@YGXI@Z.c)
 *     ?zzzSetSystemImage@@YGXPAUtagCURSOR@@0@Z @ 0xD9236 (-zzzSetSystemImage@@YGXPAUtagCURSOR@@0@Z.c)
 *     ?RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z @ 0xD9756 (-RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@3ABU?$_tlgWrapperByVal@$03@@444444444444ABU?$_tlgWrapSz@G@@@Z @ 0x142A3C (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U-$_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33333333333@Z @ 0x142CAD (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6GJPB.c)
 *     ?CursorResourcePathToString@InputTraceLogging@@CGPBGPAU_UNICODE_STRING@@PAGI@Z @ 0x142FA4 (-CursorResourcePathToString@InputTraceLogging@@CGPBGPAU_UNICODE_STRING@@PAGI@Z.c)
 *     ?GetCursorOrFrame@InputTraceLogging@@CGPAUtagCURSOR@@PAU2@@Z @ 0x1430FC (-GetCursorOrFrame@InputTraceLogging@@CGPAUtagCURSOR@@PAU2@@Z.c)
 *     ?SwapReasonToString@InputTraceLogging@@CGPBDW4InputTracing_SetSystemCursorReason@@@Z @ 0x143144 (-SwapReasonToString@InputTraceLogging@@CGPBDW4InputTracing_SetSystemCursorReason@@@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall zzzInternalSetSystemCursor(int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // edi
  struct _UNICODE_STRING *v6; // ebx
  WCHAR *v7; // edx
  int v8; // ebx
  int v9; // esi
  int v10; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int CurrentProcess; // eax
  int v15; // edx
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // eax
  struct _UNICODE_STRING *v19; // ecx
  int v20; // ecx
  const char *v21; // eax
  int v22; // edx
  int v23; // ecx
  struct _UNICODE_STRING *v24; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v25; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v26; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v27; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v28; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v29; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v30; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v31; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v32; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v33; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v34; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v35; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v36; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v37; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v38; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v39; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v40; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v41; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v42; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v43; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v44; // [esp+0h] [ebp-80h]
  struct tagCURSOR *v45; // [esp+0h] [ebp-80h]
  struct _UNICODE_STRING *v46; // [esp+4h] [ebp-7Ch]
  struct tagCURSOR *CursorOrFrame; // [esp+10h] [ebp-70h]
  int v49; // [esp+14h] [ebp-6Ch]
  int v50; // [esp+18h] [ebp-68h]
  int v51; // [esp+1Ch] [ebp-64h] BYREF
  int v52; // [esp+20h] [ebp-60h] BYREF
  int v53; // [esp+24h] [ebp-5Ch] BYREF
  int v54; // [esp+28h] [ebp-58h] BYREF
  int v55; // [esp+2Ch] [ebp-54h] BYREF
  int v56; // [esp+30h] [ebp-50h] BYREF
  int v57; // [esp+34h] [ebp-4Ch] BYREF
  int v58; // [esp+38h] [ebp-48h] BYREF
  int v59; // [esp+3Ch] [ebp-44h] BYREF
  int v60; // [esp+40h] [ebp-40h] BYREF
  int v61; // [esp+44h] [ebp-3Ch] BYREF
  int v62; // [esp+48h] [ebp-38h] BYREF
  int v63; // [esp+4Ch] [ebp-34h] BYREF
  int v64; // [esp+50h] [ebp-30h] BYREF
  int v65; // [esp+54h] [ebp-2Ch] BYREF
  int v66; // [esp+58h] [ebp-28h] BYREF
  int v67; // [esp+5Ch] [ebp-24h] BYREF
  int v68; // [esp+60h] [ebp-20h] BYREF
  int v69; // [esp+64h] [ebp-1Ch] BYREF
  int v70; // [esp+68h] [ebp-18h] BYREF
  int v71; // [esp+6Ch] [ebp-14h] BYREF
  int v72; // [esp+70h] [ebp-10h] BYREF
  _DWORD v73[3]; // [esp+74h] [ebp-Ch] BYREF

  v5 = 536 * a2;
  v6 = (struct _UNICODE_STRING *)&_gasyscur[134 * a2 + 2];
  if ( a3 )
  {
    v7 = *(WCHAR **)(a3 + 4);
    if ( ((unsigned int)v7 & 0xFFFF0000) != 0 )
    {
      RtlInitUnicodeString(v6, (PCWSTR)&_gasyscur[v5 / 4 + 4]);
      v6->MaximumLength = 520;
      RtlUnicodeStringCopy(v24, v46);
      v6->Buffer[259] = 0;
    }
    else
    {
      RtlInitUnicodeStringOrId(v6, v7);
    }
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)&_gasyscur[134 * a2 + 2], 0);
  }
  v8 = *(_DWORD *)(v5 + _gasyscur[0] + 4);
  if ( (v8 == 0) != (a4 == 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( v8 )
  {
    zzzSetSystemImage((struct tagCURSOR *)v24, (struct tagCURSOR *)v46);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess();
    v16 = _gpepCSRSS;
    if ( CurrentProcess != _gpepCSRSS
      || (v17 = *(_DWORD *)(a1 + 32)) == 0
      || (v17 & 0xFFFF0000) != 0
      || (unsigned __int16)v17 - 100 != a2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v18 = *(unsigned __int16 *)(v5 + _gasyscur[0]);
    *(_DWORD *)(a1 + 44) |= 0x200u;
    *(_DWORD *)(a1 + 32) = v18;
    HMAssignmentLock(v16, v15);
  }
  v9 = *(_DWORD *)(v5 + _gasyscur[0] + 4);
  if ( (unsigned int)dword_2689E8 > 5 && _tlgKeywordOn(&dword_2689E8, 8LL) )
  {
    v49 = *(_DWORD *)UPDWORDPointer(8232);
    v50 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v24) + 15);
    v51 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v25) + 14);
    v52 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v26) + 13);
    v53 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v27) + 25);
    v54 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v28) + 24);
    v55 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v29) + 23) >> 1;
    v56 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v30) + 22);
    v57 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v31) + 11);
    v58 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v32) + 6);
    if ( *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v33) + 6) )
      CursorOrFrame = InputTraceLogging::GetCursorOrFrame(v34);
    else
      CursorOrFrame = 0;
    v59 = (int)InputTraceLogging::CursorResourcePathToString(v19, (unsigned __int16 *)v34, (unsigned int)v46);
    v61 = v49;
    v62 = v50;
    v63 = v51;
    v64 = v52;
    v65 = v53;
    v66 = v54;
    v67 = v55;
    v68 = v56;
    v60 = a2;
    v69 = v57;
    v70 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v35) + 10);
    v71 = v58;
    v72 = (int)CursorOrFrame;
    v58 = InputTraceLogging::SwapReasonToString(a4);
    if ( a2 >= 0x13 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v21 = "ERROR BAD INDEX";
    }
    else
    {
      v21 = `InputTraceLogging::CurIndexName'::`2'::typenames[a2];
    }
    v57 = (int)v21;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)&dword_2689E8,
      v20,
      v20,
      (int)&v57,
      (int)&v58,
      (int)&v72,
      (int)&v71,
      (int)&v70,
      (int)&v69,
      (int)&v68,
      (int)&v67,
      (int)&v66,
      (int)&v65,
      (int)&v64,
      (int)&v63,
      (int)&v62,
      (int)&v61,
      (int)&v60,
      (int)&v59);
  }
  if ( InputTraceLogging::Enabled(0) && v9 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v9 + 20);
      if ( !v9 )
        break;
      if ( (unsigned int)dword_2689E8 > 5 && _tlgKeywordOn(&dword_2689E8, 8LL) )
      {
        v72 = *(_DWORD *)UPDWORDPointer(8232);
        v71 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v24) + 15);
        v70 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v36) + 14);
        v69 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v37) + 13);
        v68 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v38) + 25);
        v67 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v39) + 24);
        v66 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v40) + 23) >> 1;
        v65 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v41) + 22);
        v64 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v42) + 11);
        v63 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v43) + 6);
        if ( *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v44) + 6) )
          InputTraceLogging::GetCursorOrFrame(v45);
        v62 = v72;
        v61 = v71;
        v60 = v70;
        v59 = v69;
        v58 = v68;
        v57 = v67;
        v56 = v66;
        v55 = v65;
        v54 = v64;
        v53 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v45) + 10);
        v52 = v63;
        v51 = v22;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_2689E8,
          (int)&unk_253DBA,
          v23,
          v23,
          (int)&v51,
          (int)&v52,
          (int)&v53,
          (int)&v54,
          (int)&v55,
          (int)&v56,
          (int)&v57,
          (int)&v58,
          (int)&v59,
          (int)&v60,
          (int)&v61,
          (int)&v62);
      }
    }
  }
  v73[2] = 0;
  v10 = *(_DWORD *)(v5 + _gasyscur[0] + 4);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v73[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v73;
  v73[1] = v10;
  HMLockObject(v10);
  xxxEnsureDpiCursorsForSysCur((unsigned int)v24);
  return ThreadUnlock1();
}
