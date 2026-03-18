/*
 * XREFs of NtUserSetParent @ 0x1C010FE60
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagWND *DesktopWindow; // rdi
  __int64 v13; // r8
  struct tagWND *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]
  __int128 v22; // [rsp+38h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-10h]

  v22 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x3FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v20;
      *((_QWORD *)&v20 + 1) = v4;
      HMLockObject(v4);
      if ( a2 )
      {
        if ( a2 == -3 )
        {
          v19 = *(_QWORD *)(v9 + 24);
          DesktopWindow = 0LL;
          if ( v19 )
            DesktopWindow = *(struct tagWND **)(v19 + 104);
        }
        else
        {
          DesktopWindow = (struct tagWND *)ValidateHwnd(a2);
          if ( !DesktopWindow )
          {
LABEL_11:
            ThreadUnlock1(v11, v10, v13);
            goto LABEL_12;
          }
        }
      }
      else
      {
        DesktopWindow = (struct tagWND *)GetDesktopWindow(v9);
      }
      *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v22;
      *((_QWORD *)&v22 + 1) = DesktopWindow;
      if ( DesktopWindow )
        HMLockObject(DesktopWindow);
      v14 = xxxSetParentWorker((struct tagWND *)v9, DesktopWindow, 0LL, 0);
      if ( v14 )
        v8 = *(_QWORD *)v14;
      ThreadUnlock1(v16, v15, v17);
      goto LABEL_11;
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
