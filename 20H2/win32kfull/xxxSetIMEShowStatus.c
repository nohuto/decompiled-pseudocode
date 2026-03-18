/*
 * XREFs of xxxSetIMEShowStatus @ 0x1C012C3A4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UpdateWinIniInt @ 0x1C01D73B0 (UpdateWinIniInt.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E25F4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetIMEShowStatus(unsigned int a1, int a2, _DWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF

  *a3 = 0;
  if ( HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) == a1 )
    return 1LL;
  if ( !a2 )
    goto LABEL_4;
  v15 = 0LL;
  v16 = 0LL;
  v6 = CreateProfileUserName(&v15);
  v7 = v6;
  if ( v6 )
  {
    *a3 = UpdateWinIniInt(v6, 35LL, 236LL, a1);
    FreeProfileUserName(v7, &v15);
  }
  if ( *a3 )
  {
LABEL_4:
    HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = a1;
    if ( (*gpsi & 4) != 0 )
    {
      if ( gpqForeground )
      {
        v8 = *(_QWORD *)(gpqForeground + 112LL);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 16);
          v17[2] = 0LL;
          v10 = *(_QWORD *)(v9 + 784);
          if ( v10 )
          {
            if ( (*(_DWORD *)(v9 + 488) & 1) == 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v17[0] = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = v17;
              v17[1] = v10;
              HMLockObject(v10);
              xxxNotifyImeShowStatus(*(struct tagWND **)(v9 + 784));
              ThreadUnlock1(v13, v12, v14);
            }
          }
        }
      }
    }
    return 1LL;
  }
  return 0LL;
}
