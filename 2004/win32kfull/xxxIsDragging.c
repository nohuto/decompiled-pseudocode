/*
 * XREFs of xxxIsDragging @ 0x1C0249DA8
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     NtUserDragDetect @ 0x1C01F8810 (NtUserDragDetect.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0035F20 (xxxSetCapture.c)
 *     xxxSleepThread2 @ 0x1C0096960 (xxxSleepThread2.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     xxxInternalGetMessage @ 0x1C00BE0D4 (xxxInternalGetMessage.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     xxxSleepThread @ 0x1C01D3C80 (xxxSleepThread.c)
 */

__int64 __fastcall xxxIsDragging(__int64 a1, __int64 a2)
{
  int v5; // r14d
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  BOOL v12; // eax
  int v13; // [rsp+38h] [rbp-29h] BYREF
  __int64 v14; // [rsp+40h] [rbp-21h] BYREF
  __int64 v15; // [rsp+48h] [rbp-19h]
  __int128 v16; // [rsp+50h] [rbp-11h] BYREF
  __int128 v17; // [rsp+60h] [rbp-1h]
  __int128 v18; // [rsp+70h] [rbp+Fh]
  _QWORD v19[3]; // [rsp+80h] [rbp+1Fh] BYREF

  v19[2] = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (_GetKeyState(1LL) & 0x8000u) == 0LL )
    return 0LL;
  xxxSetCapture(a1);
  v5 = 1;
  v14 = a2;
  v15 = a2;
  v6 = *(_DWORD *)(gpsi + 2168LL);
  v7 = *(_DWORD *)(gpsi + 2172LL);
  HIDWORD(v14) = HIDWORD(a2) - v7;
  HIDWORD(v15) = v7 + HIDWORD(a2);
  LODWORD(v14) = a2 - v6;
  LODWORD(v15) = a2 + v6;
  v8 = 0;
  v19[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v19;
  v19[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  do
  {
    while ( 1 )
    {
      while ( (unsigned int)xxxInternalGetMessage(&v16, 0LL, 0x200u, 0x20Eu, 1, 0)
           || (unsigned int)xxxInternalGetMessage(&v16, 0LL, 0x23u, 0x23u, 1, 0)
           || (unsigned int)xxxInternalGetMessage(&v16, 0LL, 0x100u, 0x109u, 1, 0)
           || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a1 || DWORD2(v16) == 514 )
        {
          v5 = 0;
        }
        else
        {
          switch ( DWORD2(v16) )
          {
            case 0x23:
              xxxCallHook(2, 0LL, 0LL, 5);
              break;
            case 0x100:
              if ( (_QWORD)v17 == 27LL )
                goto LABEL_12;
              break;
            case 0x200:
              v12 = PtInRect(&v14, *(unsigned __int64 *)((char *)&v18 + 4));
              if ( !v12 )
                v8 = 1;
              v5 = v12 ? v5 : 0;
              break;
          }
        }
        if ( !v5 )
          goto LABEL_12;
      }
      if ( *(_QWORD *)(gptiCurrent + 1384LL) )
        break;
      if ( !(unsigned int)xxxSleepThread(7u, 0x1F4u, 1, 0) )
        goto LABEL_11;
    }
    v13 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (enum SLEEP_STATUS *)&v13) && !v13 );
LABEL_11:
  v8 = 1;
LABEL_12:
  v11 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v11 + 104) == a1 )
    xxxReleaseCapture();
  ThreadUnlock1(v11, v9, v10);
  return v8;
}
