/*
 * XREFs of xxxReceiverDied @ 0x1C007F3DC
 * Callers:
 *     zzzCancelJournalling @ 0x1C002A378 (zzzCancelJournalling.c)
 *     SendMsgCleanup @ 0x1C007EE60 (SendMsgCleanup.c)
 *     SuspendThreadQueue @ 0x1C010F150 (SuspendThreadQueue.c)
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x1C00D705C (UnlinkSendListSms.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx
  int v6; // edx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rcx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ecx
  _QWORD v18[3]; // [rsp+50h] [rbp-58h] BYREF
  _DWORD v19[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h]
  __int64 v21; // [rsp+78h] [rbp-30h]
  __int64 v22; // [rsp+80h] [rbp-28h]
  __int128 v23; // [rsp+88h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v3 = *(_DWORD *)(a1 + 84) | 2;
  *(_DWORD *)(a1 + 84) = v3;
  if ( (*(_DWORD *)(v1 + 488) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 84) = v3 & 0xFFFFBFFF;
  }
  else
  {
    if ( (v3 & 0x8010) == 0 )
    {
      --*(_DWORD *)(v1 + 536);
      v7 = (_QWORD *)(a1 + 16);
      v8 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v8 + 8) != a1 + 16 || (v9 = *(_QWORD **)(a1 + 24), (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *v7 = 0LL;
    }
    if ( *(_QWORD *)(v1 + 520) == v1 + 520 )
    {
      *(_WORD *)(*(_QWORD *)(v1 + 448) + 6LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)(v1 + 448) + 4LL) &= ~0x40u;
    }
  }
  result = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 84);
  if ( result )
  {
    if ( (v5 & 1) != 0 )
    {
      v17 = v5 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      v17 = v5 | 0x8001;
    }
    *(_DWORD *)(a1 + 84) = v17;
    SetWakeBit(result, 512LL);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    LOWORD(v6) = *(_DWORD *)(a1 + 84);
    if ( (v5 & 4) == 0 )
    {
      result = v5 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v18[2] = 0LL;
        v10 = v5 | 1;
        v19[1] = 0;
        v11 = 33;
        v12 = *(_QWORD *)(a1 + 112);
        *(_DWORD *)(a1 + 84) = v10;
        if ( (v10 & 0x400) != 0 )
          v11 = 289;
        v22 = 0LL;
        v19[0] = v11;
        v20 = *(_QWORD *)(a1 + 48);
        v21 = *(_QWORD *)(a1 + 56);
        v23 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v18;
        v18[1] = v12;
        if ( v12 )
          HMLockObject(v12);
        xxxInterSendMsgEx(
          *(_QWORD *)(a1 + 112),
          *(unsigned int *)(a1 + 104),
          0LL,
          0LL,
          0,
          *(_QWORD *)(a1 + 64),
          v19,
          1,
          *(_DWORD *)(a1 + 84) & 0x10000);
        result = ThreadUnlock1(v15, v14, v16);
        v6 = *(_DWORD *)(a1 + 84);
      }
    }
    if ( (v6 & 0x4000) == 0 )
      return UnlinkSendListSms(a1);
  }
  return result;
}
