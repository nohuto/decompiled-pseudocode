/*
 * XREFs of xxxMNSwitchToAlternateMenu @ 0x1C023B434
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02373E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023923C (xxxMNMouseMove.c)
 *     xxxMNKeyFilter @ 0x1C025048C (xxxMNKeyFilter.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 */

__int64 __fastcall xxxMNSwitchToAlternateMenu(__int64 **a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 *v10; // rax
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v16[2]; // [rsp+38h] [rbp-9h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp+7h] BYREF
  __int128 v18; // [rsp+58h] [rbp+17h]
  __int128 v19; // [rsp+68h] [rbp+27h] BYREF
  _QWORD v20[4]; // [rsp+78h] [rbp+37h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+67h] BYREF

  v21 = 0LL;
  v20[2] = 0LL;
  if ( (*(_DWORD *)**a1 & 1) == 0 || !*(_QWORD *)(**a1 + 48) || (*(_DWORD *)**a1 & 0x8000) != 0 || !a2 )
    return 0LL;
  v4 = *(_QWORD *)(**a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v20[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v20;
  v20[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  xxxMNSelectItem(a1, a2, -1);
  v8 = **a1;
  if ( !*(_QWORD *)(v8 + 48) )
  {
    ThreadUnlock1(v8, v6, v7);
    return 0LL;
  }
  v10 = *a1;
  v16[0] = &v21;
  v16[1] = *(_QWORD *)(*v10 + 48);
  HMAssignmentLock(v16);
  v11 = *(_QWORD *)(**a1 + 40);
  v17[0] = **a1 + 48;
  v17[1] = v11;
  HMAssignmentLock(v17);
  *(_QWORD *)&v18 = **a1 + 40;
  *((_QWORD *)&v18 + 1) = v21;
  v19 = v18;
  HMAssignmentLock(&v19);
  HMAssignmentUnlock(&v21);
  if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) )
    {
      v12 = 0;
      if ( *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) == *(_QWORD *)(**a1 + 40) )
        v12 = 2;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | v12;
    }
    else
    {
      *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 40LL) >> 6)) & 2;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) &= ~2u;
  }
  *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
  xxxWindowEvent(5u, *(struct tagWND **)(**a1 + 8), ~(*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  xxxWindowEvent(4u, *(struct tagWND **)(**a1 + 8), (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  ThreadUnlock1(v14, v13, v15);
  return 1LL;
}
