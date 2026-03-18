/*
 * XREFs of _IsThreadHung@8 @ 0x175E4
 * Callers:
 *     _DoExplorerHangDetection@4 @ 0x11B94 (_DoExplorerHangDetection@4.c)
 *     _xxxSwitchToThisWindow@8 @ 0x11FBE (_xxxSwitchToThisWindow@8.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x17536 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z @ 0x7D75E (-_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z.c)
 *     ?InterQueueMsgCleanup@@YGXK@Z @ 0xB085E (-InterQueueMsgCleanup@@YGXK@Z.c)
 *     _xxxQueryInformationThread@16 @ 0xCF7F4 (_xxxQueryInformationThread@16.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z @ 0x18570D (-ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z.c)
 *     ?ForceForeground@CWindow@@QAE_NXZ @ 0x19F061 (-ForceForeground@CWindow@@QAE_NXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall IsThreadHung(_DWORD *a1, unsigned int a2)
{
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v9; // esi
  unsigned int v10; // eax

  v3 = 0;
  v4 = MEMORY[0xFFDF0004];
  v5 = a1;
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v9 = MEMORY[0xFFDF0324];
    if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
    {
      v10 = MEMORY[0xFFDF0320];
    }
    else
    {
      do
      {
        _mm_pause();
        v9 = MEMORY[0xFFDF0324];
        v10 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v5 = a1;
      v4 = MEMORY[0xFFDF0004];
    }
    v6 = MEMORY[0xFFDF0004] * (v9 << 8) + (((unsigned int)v4 * (unsigned __int64)v10) >> 24);
    v3 = 0;
  }
  else
  {
    v6 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  if ( !a2 )
    a2 = _gdwHungAppTimeout;
  v7 = v5[61];
  if ( v6 - *(_DWORD *)(v7 + 12) > a2
    && (*(_WORD *)(v7 + 10) & 0x1C07) == 0
    && !PsGetThreadFreezeCount(*v5)
    && (*(_BYTE *)(v5[58] + 8) & 0x40) == 0 )
  {
    return 1;
  }
  return v3;
}
