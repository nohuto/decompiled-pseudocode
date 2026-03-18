/*
 * XREFs of xxxDefWindowProc @ 0x1C00743E0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0054120 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxEventWndProc @ 0x1C00739B0 (xxxEventWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C011C5E0 (xxxTooltipWndProc.c)
 *     xxxGetControlColor @ 0x1C014651C (xxxGetControlColor.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014CF4C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxGetWindowText @ 0x1C014E85C (xxxGetWindowText.c)
 *     xxxValidateClassAndSize @ 0x1C015BB84 (xxxValidateClassAndSize.c)
 *     xxxSwitchWndProc @ 0x1C01F4ED0 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     SfnDWORD @ 0x1C004CB10 (SfnDWORD.c)
 *     xxxLoadUserApiHook @ 0x1C0074590 (xxxLoadUserApiHook.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
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
    return xxxRealDefWindowProc(a1, a2, a3, v7);
  v8 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v8 + 19) < 0 && (a2 != 130 || (*(_BYTE *)(v8 + 18) & 4) == 0 || *(__int16 *)(v8 + 42) < 0) )
    return xxxRealDefWindowProc(a1, a2, a3, v7);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 || !(unsigned int)xxxLoadUserApiHook() )
    return xxxRealDefWindowProc(a1, a2, a3, v7);
  v10 = a2 & 0x1FFFF;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8) != 0 )
  {
    if ( v10 < 0x400 )
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, unsigned __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
               a1,
               a2,
               a3,
               v7,
               0LL,
               *(_QWORD *)(gpsi + 552LL),
               1,
               0LL);
    v11 = *(_QWORD *)(gpsi + 552LL);
    return SfnDWORD((__int64 *)a1, a2, a3, v7, 0LL, v11);
  }
  if ( v10 >= 0x400 )
  {
    v11 = *(_QWORD *)(gpsi + 744LL);
    return SfnDWORD((__int64 *)a1, a2, a3, v7, 0LL, v11);
  }
  return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, unsigned __int64, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
           a1,
           a2,
           a3,
           v7,
           0LL,
           *(_QWORD *)(gpsi + 744LL),
           0,
           0LL);
}
