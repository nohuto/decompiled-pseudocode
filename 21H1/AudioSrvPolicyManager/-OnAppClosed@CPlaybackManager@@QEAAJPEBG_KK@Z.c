/*
 * XREFs of ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x1800286BC
 * Callers:
 *     PbmReportAppClosing @ 0x180028B30 (PbmReportAppClosing.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18001E1A4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::OnAppClosed(
        CPlaybackManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4)
{
  LPVOID v5; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  LPVOID v11; // rdi
  int v12; // ebx
  unsigned __int64 v13; // r9
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-28h]

  v5 = 0LL;
  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( v11 )
  {
    *((_QWORD *)v11 + 1) = 0LL;
    *(_QWORD *)v11 = &CAppClosedWorkItem::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = a4;
    v12 = 0;
    *((_QWORD *)v11 + 3) = a3;
    if ( a2 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
      v14 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, a2, v13, v16, (unsigned __int16 **)v11 + 1);
      v12 = v14;
      if ( v14 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids, v14);
        }
        AudPolicyLogError("CAppClosedWorkItem::Initialize", 890, v12);
      }
    }
    if ( v12 >= 0 )
    {
      v5 = v11;
      v11 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v11 )
    (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1LL);
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v12 >= 0 )
      v5 = 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids, v12);
    }
    AudPolicyLogError("CAppClosedWorkItem::CreateInstance", 865, v12);
  }
  if ( v5 )
    (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_5aa1b3140c133be9bcd44f84bf38f0ce_Traceguids, v12);
    }
    AudPolicyLogError("CPlaybackManager::OnAppClosed", 265, v12);
  }
  return (unsigned int)v12;
}
