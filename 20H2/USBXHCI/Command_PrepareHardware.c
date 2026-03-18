/*
 * XREFs of Command_PrepareHardware @ 0x1C006ED08
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E290 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00093AC (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     XilCommand_GetLinkTrbPointer @ 0x1C0015AB8 (XilCommand_GetLinkTrbPointer.c)
 *     XilCommand_GetMaxTrbIndex @ 0x1C0015ADC (XilCommand_GetMaxTrbIndex.c)
 *     XilCommand_AllocateResources @ 0x1C0015AFC (XilCommand_AllocateResources.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     XilCommand_FreeResources @ 0x1C003073C (XilCommand_FreeResources.c)
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
      (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
      v8);
    v4 = *(_DWORD *)(a1 + 48);
  }
  PoolWithTag = ExAllocatePoolWithTag(
                  SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink),
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
