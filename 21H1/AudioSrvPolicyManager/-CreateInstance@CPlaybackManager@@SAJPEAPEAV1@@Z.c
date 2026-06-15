/*
 * XREFs of ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x180027FD0
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000AC2C (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

__int64 __fastcall CPlaybackManager::CreateInstance(struct CPlaybackManager **a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  unsigned int v4; // ebx

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v4 = 0;
  if ( v3 )
  {
    v3[2] = 1;
    *(_QWORD *)v3 = &CPlaybackManager::`vftable'{for `CUnknown'};
    *((_QWORD *)v3 + 2) = &CPlaybackManager::`vftable'{for `ISessionInternalEvents'};
    v3[6] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    *a1 = (struct CPlaybackManager *)v3;
  }
  else
  {
    v4 = -2147024882;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_5aa1b3140c133be9bcd44f84bf38f0ce_Traceguids, -2147024882);
    }
    AudPolicyLogError("CPlaybackManager::CreateInstance", 59, -2147024882);
  }
  return v4;
}
