/*
 * XREFs of xxxActiveWindowTracking @ 0x1C01E22BC
 * Callers:
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0012724 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C009495C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     IsForegroundLocked @ 0x1C002D180 (IsForegroundLocked.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D2220 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01E14FC (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 *ActiveTrackPwnd; // rax
  unsigned __int64 *v9; // rdi
  __int64 ThreadWin32Thread; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
  v7 = *(_DWORD *)(v6 + 388);
  if ( (v7 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v6 + 388) = v7 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = GetActiveTrackPwnd((const struct tagWND *)a1);
  v9 = ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( (unsigned __int64 *)a1 != ActiveTrackPwnd )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v18 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v18;
    *((_QWORD *)&v18 + 1) = v9;
    HMLockObject(v9);
  }
  v11 = xxxSendMessage((unsigned __int64)v9, 0x21u, *v9, (struct _LARGE_STRING *)(a3 | (a2 << 16)));
  v16 = v11;
  if ( v11 <= 0 )
    goto LABEL_9;
  if ( v11 > 2 )
  {
    if ( v11 != 4 )
    {
LABEL_9:
      v16 = 0;
      goto LABEL_10;
    }
LABEL_15:
    v16 = 1;
    goto LABEL_10;
  }
  if ( !xxxTrackingActivateWindow((struct tagWND *)v9, v12, v14, v15) || v16 == 2 )
    goto LABEL_15;
LABEL_10:
  if ( (unsigned __int64 *)a1 != v9 )
    ThreadUnlock1(v13, v12, v14);
  return v16;
}
