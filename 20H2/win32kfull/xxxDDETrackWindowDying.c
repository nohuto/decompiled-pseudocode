/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C021D0E8
 * Callers:
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00C7E10 (GetAppCompatFlags2.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021ACE8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021BCF8 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C021D2F8 (xxxFreeDdeConv.c)
 */

_UNKNOWN **__fastcall xxxDDETrackWindowDying(__int64 *a1, _UNKNOWN **a2)
{
  _UNKNOWN **v2; // rbx
  _UNKNOWN **result; // rax
  __int64 v4; // rax
  void *v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // rax
  __int64 v12; // r8
  _DWORD *v13; // rdx
  int v14; // ecx
  BOOL v15; // eax
  struct tagFREELIST *v16; // rdi
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct tagDDECONV *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int128 v28; // [rsp+40h] [rbp-38h] BYREF
  __int64 v29; // [rsp+50h] [rbp-28h]
  _QWORD v30[4]; // [rsp+58h] [rbp-20h] BYREF

  v30[2] = 0LL;
  v2 = a2;
  v28 = 0LL;
  v29 = 0LL;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      v4 = *a1;
    else
      v4 = 0LL;
    result = (_UNKNOWN **)WPP_RECORDER_SF_qq(
                            (__int64)a1,
                            4u,
                            0xEu,
                            0x16u,
                            (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
                            v4,
                            a2);
  }
  if ( v2 )
  {
    do
    {
      v5 = v2[3];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v30[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v30;
      v30[1] = v5;
      if ( v5 )
        HMLockObject(v5);
      v7 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v28 = *(_QWORD *)(v7 + 416);
      *(_QWORD *)(v7 + 416) = &v28;
      *((_QWORD *)&v28 + 1) = v2;
      HMLockObject(v2);
      if ( ((_DWORD)v2[10] & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(0x400u) & 0x20) == 0
          || (v8 = v2[6]) == 0LL
          || ((v9 = v8[2], *(_DWORD *)(v9 + 632) <= 0x400u) ? (v10 = *(_DWORD *)(v9 + 648)) : (LOBYTE(v10) = 0),
              (v10 & 0x20) == 0) )
        {
          v11 = (__int64 *)v2[5];
          if ( v11 )
            v12 = *v11;
          else
            LODWORD(v12) = 0;
          PostMessage((int)v2[6], 993, v12, 0);
        }
      }
      v13 = v2[4];
      if ( v13 )
      {
        v14 = v13[20];
        v13[20] = v14 | 6;
        v15 = (v14 & 0xA) != 0;
      }
      else
      {
        v15 = 1;
      }
      v16 = (struct tagFREELIST *)v2[9];
      v2[9] = 0LL;
      v17 = *((_DWORD *)v2 + 20);
      if ( (v17 & 2) != 0 && v15 || (v17 & 4) != 0 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v2) + 25) & 1) == 0 )
          v2[4] = (_UNKNOWN *)xxxFreeDdeConv((struct tagDDECONV *)v2[4]);
        v21 = (struct tagDDECONV *)ThreadUnlock1(v19, v18, v20);
        if ( v21 )
          xxxFreeDdeConv(v21);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v2, (__int16)v13);
        ThreadUnlock1(v23, v22, v24);
      }
      xxxFreeListFree(v16);
      result = (_UNKNOWN **)ThreadUnlock1(v26, v25, v27);
      v2 = result;
    }
    while ( result );
  }
  return result;
}
