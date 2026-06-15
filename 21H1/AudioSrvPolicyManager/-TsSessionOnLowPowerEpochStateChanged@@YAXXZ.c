/*
 * XREFs of ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x18002FE80
 * Callers:
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x18000A830 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800055F4 (WPP_SF_.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x180026A4C (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x18002E1C8 (-TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void TsSessionOnLowPowerEpochStateChanged(void)
{
  struct _RTL_CRITICAL_SECTION *v0; // rsi
  struct TSSession *v1; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rbx
  struct TSSession *v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionGetPrimaryConsoleAudioSession(&v5) )
  {
    v1 = v5;
    if ( *((_DWORD *)v5 + 57) || g_bLowPowerEpoch || !*((_DWORD *)v5 + 58) || g_bApmSuspended )
    {
      ProcessHeap = GetProcessHeap();
      v4 = HeapAlloc(ProcessHeap, 0, 4uLL);
      if ( v4 )
        *v4 = *(_DWORD *)v1;
      else
        v4 = 0LL;
      if ( v4 && (int)QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v3, (__int64)v4) < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids);
        }
        operator delete(v4, (const struct std::nothrow_t *)4);
      }
    }
  }
  if ( v0 )
    LeaveCriticalSection(v0);
}
