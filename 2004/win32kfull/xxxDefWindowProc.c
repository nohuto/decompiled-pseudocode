/*
 * XREFs of xxxDefWindowProc @ 0x1C00AF770
 * Callers:
 *     xxxEventWndProc @ 0x1C0030FD0 (xxxEventWndProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0098440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00BB110 (xxxTooltipWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxGetControlColor @ 0x1C0143EEC (xxxGetControlColor.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014A71C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxGetWindowText @ 0x1C014C04C (xxxGetWindowText.c)
 *     xxxSwitchWndProc @ 0x1C01F5B40 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     xxxLoadUserApiHook @ 0x1C00456D0 (xxxLoadUserApiHook.c)
 *     SfnDWORD @ 0x1C00A3480 (SfnDWORD.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(__int64 *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax

  if ( a2 == 397 || a2 == 325 )
    return 0LL;
  v7 = 0LL;
  if ( a2 != 60 )
    v7 = a4;
  if ( gihmodUserApiHook < 0 )
    return xxxRealDefWindowProc((unsigned __int64)a1, a2, a3, v7);
  v8 = a1[5];
  if ( *(char *)(v8 + 19) < 0 && (a2 != 130 || (*(_BYTE *)(v8 + 18) & 4) == 0 || *(__int16 *)(v8 + 42) < 0) )
    return xxxRealDefWindowProc((unsigned __int64)a1, a2, a3, v7);
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 || !(unsigned int)xxxLoadUserApiHook() )
    return xxxRealDefWindowProc((unsigned __int64)a1, a2, a3, v7);
  v10 = a2 & 0x1FFFF;
  if ( (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
  {
    if ( v10 < 0x400 )
      return ((__int64 (__fastcall *)(__int64 *, _QWORD, unsigned __int64, unsigned __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
               a1,
               a2,
               a3,
               v7,
               0LL,
               *(_QWORD *)(gpsi + 552LL),
               1,
               0LL);
    v11 = *(_QWORD *)(gpsi + 552LL);
    return SfnDWORD(a1, a2, a3, v7, 0LL, v11);
  }
  if ( v10 >= 0x400 )
  {
    v11 = *(_QWORD *)(gpsi + 744LL);
    return SfnDWORD(a1, a2, a3, v7, 0LL, v11);
  }
  return ((__int64 (__fastcall *)(__int64 *, _QWORD, unsigned __int64, unsigned __int64, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
           a1,
           a2,
           a3,
           v7,
           0LL,
           *(_QWORD *)(gpsi + 744LL),
           0,
           0LL);
}
