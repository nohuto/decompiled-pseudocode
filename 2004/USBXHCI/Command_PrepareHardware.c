/*
 * XREFs of Command_PrepareHardware @ 0x1C006BA58
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006AFE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00089CC (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     XilCommand_GetLinkTrbPointer @ 0x1C00143B8 (XilCommand_GetLinkTrbPointer.c)
 *     XilCommand_GetMaxTrbIndex @ 0x1C00143DC (XilCommand_GetMaxTrbIndex.c)
 *     XilCommand_AllocateResources @ 0x1C00143FC (XilCommand_AllocateResources.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     XilCommand_FreeResources @ 0x1C002F25C (XilCommand_FreeResources.c)
 */

__int64 __fastcall Command_PrepareHardware(__int64 a1)
{
  int Resources; // edi
  __int64 v3; // rcx
  int v4; // edx
  PVOID PoolWithTag; // rax
  __int64 v6; // rax
  char v8; // [rsp+28h] [rbp-48h]
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+40h] [rbp-30h]
  char pszDest[16]; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  Resources = XilCommand_AllocateResources(a1);
  if ( Resources < 0 )
    goto LABEL_10;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 104) = a1 + 96;
  *(_QWORD *)(a1 + 96) = a1 + 96;
  *(_DWORD *)(a1 + 48) = XilCommand_GetMaxTrbIndex(a1);
  *(_QWORD *)(a1 + 56) = XilCommand_GetLinkTrbPointer(v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = v4;
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v4,
      7,
      13,
      (__int64)&WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids,
      v8);
    v4 = *(_DWORD *)(a1 + 48);
  }
  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                  16LL * (unsigned int)(v4 + 1),
                  0x49434858u);
  *(_QWORD *)(a1 + 72) = PoolWithTag;
  if ( !PoolWithTag )
  {
    Resources = -1073741670;
LABEL_10:
    XilCommand_FreeResources(a1);
    return (unsigned int)Resources;
  }
  memset(PoolWithTag, 0, 16LL * (unsigned int)(*(_DWORD *)(a1 + 48) + 1));
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v10 = 0LL;
  *(_QWORD *)&v9 = 48LL;
  pszDest[0] = 0;
  HIDWORD(v10) = 16;
  BYTE8(v10) = 0;
  *((_QWORD *)&v9 + 1) = 0xC800000400LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d CMD", *(_DWORD *)(v6 + 176));
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v9, a1 + 16) < 0 )
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
  *(_DWORD *)(a1 + 32) = 1;
  return 0;
}
