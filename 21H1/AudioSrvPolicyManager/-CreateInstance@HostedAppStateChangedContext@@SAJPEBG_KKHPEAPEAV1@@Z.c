/*
 * XREFs of ?CreateInstance@HostedAppStateChangedContext@@SAJPEBG_KKHPEAPEAV1@@Z @ 0x18003278C
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180027A74 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18001E1A4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HostedAppStateChangedContext::CreateInstance(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        int a4,
        struct HostedAppStateChangedContext **a5)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  int v14; // edi
  unsigned __int64 v15; // r9
  __int64 v17; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v13 = v10;
  if ( v10 )
    *v10 = 0LL;
  else
    v13 = 0LL;
  if ( v13 )
  {
    *((_DWORD *)v13 + 2) = a3;
    v15 = -1LL;
    *((_DWORD *)v13 + 3) = a4;
    v13[2] = a2;
    do
      ++v15;
    while ( a1[v15] );
    v14 = _AllocStringWorker<CTCoAllocPolicy>(v12, v11, a1, v15, v17, (unsigned __int16 **)v13);
    if ( v14 >= 0 )
    {
      *a5 = (struct HostedAppStateChangedContext *)v13;
      v13 = 0LL;
    }
  }
  else
  {
    v14 = -2147024882;
  }
  if ( v13 )
  {
    if ( *v13 )
    {
      CoTaskMemFree((LPVOID)*v13);
      *v13 = 0LL;
    }
    operator delete(v13, (const struct std::nothrow_t *)0x18);
  }
  if ( v14 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids, v14);
    }
    AudPolicyLogError("HostedAppStateChangedContext::CreateInstance", 952, v14);
  }
  return (unsigned int)v14;
}
