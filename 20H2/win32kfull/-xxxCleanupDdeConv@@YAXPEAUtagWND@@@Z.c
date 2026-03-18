/*
 * XREFs of ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C021B4BC
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C021C8A4 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021BCF8 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C021D2F8 (xxxFreeDdeConv.c)
 */

void __fastcall xxxCleanupDdeConv(struct tagWND *a1)
{
  __int64 i; // rbx
  int v3; // edi
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

LABEL_1:
  for ( i = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 80) & 7) == 7 && (*(_DWORD *)(*(_QWORD *)(i + 32) + 80LL) & 2) != 0 )
    {
      v9 = 0LL;
      v10 = 0LL;
      if ( *(_QWORD *)(i + 72) )
      {
        v3 = 1;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v9 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v9;
        *((_QWORD *)&v9 + 1) = i;
        HMLockObject(i);
        v5 = *(struct tagFREELIST **)(i + 72);
        *(_QWORD *)(i + 72) = 0LL;
        xxxFreeListFree(v5);
      }
      else
      {
        v3 = 0;
      }
      if ( (*(_BYTE *)(_HMPheFromObject(i) + 25) & 1) == 0 )
      {
        *(_QWORD *)(i + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(i + 32));
        xxxFreeDdeConv((struct tagDDECONV *)i);
      }
      if ( v3 )
        ThreadUnlock1(v7, v6, v8);
      goto LABEL_1;
    }
  }
}
