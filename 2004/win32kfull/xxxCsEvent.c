/*
 * XREFs of xxxCsEvent @ 0x1C0247DB8
 * Callers:
 *     xxxChangeMonitorFlags @ 0x1C011DFD0 (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x1C01F93D0 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1C0248048 (xxxMessageEvent.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall xxxCsEvent(void *Src, unsigned __int16 a2)
{
  size_t v4; // rdi
  void *v5; // rax
  __int64 v6; // rbx
  int v8; // esi
  _DWORD *CurrentIrp; // rax
  int v10; // edx
  _DWORD *v11; // rax
  _DWORD *v12; // rdi
  int v13; // r14d
  _QWORD *i; // rsi
  int j; // esi
  _QWORD *v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int128 v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+60h] [rbp-38h]
  __int128 v25; // [rsp+68h] [rbp-30h] BYREF
  __int64 v26; // [rsp+78h] [rbp-20h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v4 = (unsigned int)a2 + 8;
  v5 = (void *)Win32AllocPoolWithQuota(v4, 895775573LL);
  v6 = (__int64)v5;
  if ( !v5 )
    return 16392LL;
  memmove(v5, Src, v4);
  *(_WORD *)(v6 + 6) = a2;
  v8 = 0;
  CurrentIrp = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    v10 = *(_DWORD *)v6;
    do
    {
      if ( ((v10 & CurrentIrp[10]) == 0 || *(_WORD *)(v6 + 4)) && ((v10 & CurrentIrp[10]) != 0 || !*(_WORD *)(v6 + 4)) )
        ++v8;
      CurrentIrp = (_DWORD *)*((_QWORD *)CurrentIrp + 3);
    }
    while ( CurrentIrp );
  }
  v11 = (_DWORD *)Win32AllocPoolWithQuotaZInit(8LL * v8 + 8, 912552789LL);
  v12 = v11;
  if ( !v11 )
  {
    Win32FreePool(v6);
    return 16392LL;
  }
  *v11 = v8;
  v13 = 0;
  for ( i = WPP_MAIN_CB.Queue.Wcb.CurrentIrp; i && v13 < *v12; i = (_QWORD *)i[3] )
  {
    if ( ((*(_DWORD *)v6 & (_DWORD)i[5]) == 0 || *(_WORD *)(v6 + 4))
      && ((*(_DWORD *)v6 & (_DWORD)i[5]) != 0 || !*(_WORD *)(v6 + 4)) )
    {
      *(_QWORD *)&v21 = &v12[2 * v13 + 2];
      *((_QWORD *)&v21 + 1) = i[6];
      HMAssignmentLock(&v21);
      ++v13;
    }
  }
  PushW32ThreadLock(v6, &v25, (__int64)Win32FreePool);
  PushW32ThreadLock((__int64)v12, &v23, (__int64)DestroyEventPacketTargets);
  for ( j = 0; j < *v12; ++j )
  {
    v21 = 0LL;
    v22 = 0LL;
    v16 = (_QWORD *)HMAssignmentUnlock(&v12[2 * j + 2]);
    if ( v16 )
    {
      v17 = ValidateHwnd(*v16);
      if ( v17 )
      {
        *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v21;
        *((_QWORD *)&v21 + 1) = v17;
        HMLockObject(v17);
        xxxSendMessage(v17, 0x3Cu, 0LL, (struct _LARGE_STRING *)v6);
        ThreadUnlock1(v19, v18, v20);
      }
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)&v23);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v25);
  return 0LL;
}
