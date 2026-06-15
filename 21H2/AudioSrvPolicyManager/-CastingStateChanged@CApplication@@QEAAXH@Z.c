/*
 * XREFs of ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180012D98
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E848 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x18001F6D0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800050D0 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x18000FD24 (WPP_SF_dd.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CApplication::CastingStateChanged(CApplication *this, int a2)
{
  int v4; // r8d
  _UNKNOWN **v5; // rcx
  int v6; // eax
  bool v7; // cc
  int v8; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = a2 + *((_DWORD *)this + 154);
  *((_DWORD *)this + 154) = v4;
  v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  v6 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = v4;
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, a2, v8);
    v6 = *((_DWORD *)this + 154);
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v7 = v6 <= 0;
  if ( v6 < 0 )
  {
    if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 2u )
      WPP_SF_((TRACEHANDLE)v5[2], 0x24u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids);
    *((_DWORD *)this + 154) = 0;
    v7 = 1;
  }
  if ( v7 )
    *((_DWORD *)this + 52) &= ~8u;
  else
    *((_DWORD *)this + 52) |= 8u;
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
