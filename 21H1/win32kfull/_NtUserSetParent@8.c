/*
 * XREFs of _NtUserSetParent@8 @ 0xCB854
 * Callers:
 *     <none>
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 */

int __stdcall NtUserSetParent(int a1, int a2)
{
  int v2; // esi
  struct tagWND *v3; // eax
  struct tagWND *v4; // ebx
  int v5; // eax
  int DesktopWindow; // edi
  struct tagWND *v7; // eax
  int v9; // eax
  struct tagWND *v10; // [esp+0h] [ebp-24h]
  int v11; // [esp+4h] [ebp-20h]
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch] BYREF
  struct tagWND *v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]

  v2 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  EnterCrit(0, 1);
  v3 = (struct tagWND *)ValidateHwnd(a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_WORD *)(*((_DWORD *)v3 + 5) + 30) & 0x3FFF;
    if ( v5 != 669 && v5 != 671 )
    {
      v15 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v15;
      v16 = v4;
      HMLockObject(v4);
      if ( a2 )
      {
        if ( a2 == -3 )
        {
          v9 = *((_DWORD *)v4 + 3);
          DesktopWindow = 0;
          if ( v9 )
            DesktopWindow = *(_DWORD *)(v9 + 52);
        }
        else
        {
          DesktopWindow = ValidateHwnd(a2);
          if ( !DesktopWindow )
          {
LABEL_12:
            ThreadUnlock1();
            goto LABEL_13;
          }
        }
      }
      else
      {
        DesktopWindow = _GetDesktopWindow(v4);
      }
      v12 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v12;
      v13 = DesktopWindow;
      if ( DesktopWindow )
        HMLockObject(DesktopWindow);
      v7 = xxxSetParentWorker(DesktopWindow, v4, 0, 0, v10, v11);
      if ( v7 )
        v2 = *(_DWORD *)v7;
      ThreadUnlock1();
      goto LABEL_12;
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit();
  return v2;
}
