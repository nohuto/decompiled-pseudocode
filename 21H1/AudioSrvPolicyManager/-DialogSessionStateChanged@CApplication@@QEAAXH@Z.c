/*
 * XREFs of ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x180018908
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Do_call @ 0x18000ECB0 (std--_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_--_Do_call.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800241A8 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x180015684 (WPP_SF_dd.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CApplication::DialogSessionStateChanged(CApplication *this, int a2)
{
  int v4; // r8d
  int v5; // eax
  bool v6; // cc
  int v7; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = a2 + *((_DWORD *)this + 156);
  *((_DWORD *)this + 156) = v4;
  v5 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = v4;
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, a2, v7);
    v5 = *((_DWORD *)this + 156);
  }
  v6 = v5 <= 0;
  if ( v5 < 0 )
  {
    *((_DWORD *)this + 156) = 0;
    v6 = 1;
  }
  if ( v6 )
    *((_DWORD *)this + 52) &= ~0x20u;
  else
    *((_DWORD *)this + 52) |= 0x20u;
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
