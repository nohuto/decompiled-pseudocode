/*
 * XREFs of ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18001BD50
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x18001A83C (--1CProcess@@MEAA@XZ.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18001C01C (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180020930 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800233A4 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CleanupProcessTerminationWatcher(CProcess *this, int a2)
{
  struct _TP_WAIT *v4; // r8
  char *v5; // rsi
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 400);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 55) )
  {
    v4 = (struct _TP_WAIT *)*((_QWORD *)this + 55);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x37u,
        &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
        *((_DWORD *)this + 48));
      v4 = (struct _TP_WAIT *)*((_QWORD *)this + 55);
    }
    WaitForThreadpoolWaitCallbacks(v4, 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 55));
    *((_QWORD *)this + 55) = 0LL;
    if ( a2 )
    {
      v5 = (char *)*((_QWORD *)this + 23);
      if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v5);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 23) = 0LL;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CProcess *))(*(_QWORD *)this + 32LL))(this);
      (*(void (__fastcall **)(CProcess *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
    }
  }
  if ( v9 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v9 = 0;
  }
  return 0LL;
}
