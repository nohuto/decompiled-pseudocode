/*
 * XREFs of _xxxRedrawTitle@8 @ 0x17084
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     ?xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z @ 0x13876 (-xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxEnableMenuItem@12 @ 0xBA004 (_xxxEnableMenuItem@12.c)
 *     ?xxxSetClassIconEnum@@YGHPAUtagWND@@J@Z @ 0x19C6E6 (-xxxSetClassIconEnum@@YGHPAUtagWND@@J@Z.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 */

int __stdcall xxxRedrawTitle(struct tagVWPL **a1, int a2)
{
  struct tagVWPL *v2; // ecx
  int v3; // ebx
  struct tagVWPL *v5; // esi
  int DCEx; // esi
  int v7; // [esp+0h] [ebp-10h]
  int v8; // [esp+0h] [ebp-10h]
  int v9; // [esp+4h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-4h]

  v11 = 1;
  v2 = a1[5];
  if ( (*((_BYTE *)v2 + 23) & 0x10) == 0 )
    goto LABEL_9;
  if ( (*((_BYTE *)v2 + 22) & 0xC0) != 0xC0 )
  {
    v11 = 0;
LABEL_9:
    LOBYTE(v3) = a2;
    goto LABEL_10;
  }
  if ( (*((_BYTE *)v2 + 8) & 0x40) != 0 && *((_DWORD *)a1[2] + 59) == _gpqForeground )
    v3 = a2 | 1;
  else
    v3 = a2;
  if ( gihmodUserApiHook < 0 )
  {
    DCEx = _GetDCEx(a1, 0, 65537);
    xxxDrawCaptionBar(a1, v3);
    _ReleaseDC(DCEx);
  }
  else
  {
    xxxSendMessage(v3, 0);
  }
LABEL_10:
  if ( IsTrayWindow(a1) && (v3 & 0xC) != 0 )
  {
    v5 = *a1;
    xxxCallHook(0, 0xAu, v7, v9);
    PostShellHookMessages(6, v5, v8, v10);
  }
  return v11;
}
