/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0033A54
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNInitUAHMenuItem @ 0x1C0033C10 (MNInitUAHMenuItem.c)
 *     MNInitUAHMenu @ 0x1C0033C68 (MNInitUAHMenu.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0033CB8 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall xxxSendMenuDrawItemMessage(__int64 a1, int a2, __int64 *a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 v7; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rcx
  int v15; // r14d
  int v16; // r12d
  __int64 result; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rcx
  int v30; // r9d
  __int128 v31; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v32; // [rsp+50h] [rbp-A1h]
  _DWORD v33[36]; // [rsp+60h] [rbp-91h] BYREF

  v7 = a7;
  memset(v33, 0, sizeof(v33));
  v14 = (_QWORD *)a3[2];
  v32 = 0LL;
  v31 = 0LL;
  v15 = 1;
  if ( !v14 )
    v14 = *(_QWORD **)*a3;
  v16 = MNIsUAHMenu(v14, v12, v13);
  result = MNInitDrawItemStruct(a1, a2, (_DWORD)a3, a4, a5, a6, (__int64)v33);
  if ( *(_QWORD *)(*(_QWORD *)*a3 + 80LL)
    && ((**(_DWORD **)a4 & 0x100) != 0 || *(_QWORD *)(*(_QWORD *)a4 + 96LL) == -1LL) )
  {
    v24 = *(_QWORD *)(*(_QWORD *)*a3 + 80LL);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v31 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v31;
    *((_QWORD *)&v31 + 1) = v24;
    HMLockObject(v24);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)*a3 + 80LL), 43LL, 0LL, v33);
    ThreadUnlock1(v27, v26, v28);
    v29 = (_QWORD *)a3[2];
    if ( !v29 )
      v29 = *(_QWORD **)*a3;
    result = MNGetpItemIndex(v29, a4);
    if ( (_DWORD)result == -1 )
      v15 = v30;
  }
  if ( v16 )
  {
    if ( a7 || (result = *a3, (v7 = *(_QWORD *)(*(_QWORD *)*a3 + 80LL)) != 0) )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        v33[4] &= ~0x100u;
      v18 = (_QWORD *)a3[2];
      if ( !v18 )
        v18 = *(_QWORD **)*a3;
      MNInitUAHMenu(v18, a1, &v33[16]);
      if ( v15 )
      {
        v19 = (_QWORD *)a3[2];
        if ( !v19 )
          v19 = *(_QWORD **)*a3;
        MNInitUAHMenuItem(v19, a4, &v33[22]);
      }
      v20 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v31 = *(_QWORD *)(v20 + 416);
      *(_QWORD *)(v20 + 416) = &v31;
      *((_QWORD *)&v31 + 1) = v7;
      HMLockObject(v7);
      xxxSendMessage(v7, 146LL, 0LL, v33);
      return ThreadUnlock1(v22, v21, v23);
    }
  }
  return result;
}
