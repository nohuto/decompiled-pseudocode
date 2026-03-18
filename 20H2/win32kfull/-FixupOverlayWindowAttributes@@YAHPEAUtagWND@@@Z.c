/*
 * XREFs of ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D5DB0
 * Callers:
 *     _NotifyOverlayWindow @ 0x1C01D7450 (_NotifyOverlayWindow.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C021426C (SetWindowCompositionVideoOverlayActive.c)
 */

__int64 __fastcall FixupOverlayWindowAttributes(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rbp
  __int64 v4; // rax
  int v5; // edi
  struct tagBWL *v6; // rax
  struct tagBWL *v7; // r14
  unsigned __int64 *i; // rsi
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v1 = 0;
  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow )
  {
    v4 = *(_QWORD *)(TopLevelWindow + 40);
    v5 = -__CFSHR__(*(_DWORD *)(v4 + 232), 11);
    if ( __CFSHR__(*(_DWORD *)(v4 + 232), 11) )
    {
LABEL_12:
      v11 = 0LL;
      LODWORD(v11) = v5;
      v12 = 0LL;
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(v3, &v11) >= 0;
      return v1;
    }
    v6 = BuildHwndList(v3, 1, 0LL);
    v7 = v6;
    if ( v6 )
    {
      for ( i = (unsigned __int64 *)((char *)v6 + 32); *i != 1; ++i )
      {
        v9 = HMValidateHandleNoSecure(*i, 1);
        if ( v9 && (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 232LL) & 0x400) != 0 )
        {
          v5 = 1;
          break;
        }
      }
      FreeHwndList(v7);
      goto LABEL_12;
    }
  }
  return v1;
}
