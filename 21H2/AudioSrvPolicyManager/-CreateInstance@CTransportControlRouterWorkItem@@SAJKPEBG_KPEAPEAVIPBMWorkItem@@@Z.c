/*
 * XREFs of ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBG_KPEAPEAVIPBMWorkItem@@@Z @ 0x18002CC18
 * Callers:
 *     PbmAllowMediaPlaybackForApp @ 0x1800232A0 (PbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG_K@Z @ 0x18002CD44 (-Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CTransportControlRouterWorkItem::CreateInstance(
        int a1,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        struct IPBMWorkItem **a4)
{
  HANDLE ProcessHeap; // rax
  CTransportControlRouterWorkItem *v9; // rax
  CTransportControlRouterWorkItem *v10; // rbx
  int v11; // edi

  ProcessHeap = GetProcessHeap();
  v9 = (CTransportControlRouterWorkItem *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 2) = 0LL;
    *(_QWORD *)v9 = &CTransportControlRouterWorkItem::`vftable';
    *((_DWORD *)v9 + 2) = a1;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( a2 )
    {
      v11 = CTransportControlRouterWorkItem::Initialize(v10, a2, a3);
      if ( v11 >= 0 )
      {
        *a4 = v10;
        v10 = 0LL;
      }
    }
    else
    {
      v11 = -2147467261;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v10 )
  {
    *(_QWORD *)v10 = &WORKER_THREAD_EVENT::`vftable';
    operator delete(v10, (const struct std::nothrow_t *)0x20);
  }
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids, v11);
    }
    AudPolicyLogError("CTransportControlRouterWorkItem::CreateInstance", 789, v11);
  }
  return (unsigned int)v11;
}
