/*
 * XREFs of _xxxMNSwitchToAlternateMenu@8 @ 0x19AA93
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 */

int __fastcall xxxMNSwitchToAlternateMenu(int **a1, int a2)
{
  int v4; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // edx
  int v9; // edx
  int v10; // ecx
  _DWORD v11[3]; // [esp+10h] [ebp-10h] BYREF
  int v12; // [esp+1Ch] [ebp-4h] BYREF

  v12 = 0;
  v11[2] = 0;
  if ( (*(_BYTE *)**a1 & 1) == 0 || !*(_DWORD *)(**a1 + 24) || (*(_DWORD *)**a1 & 0x8000) != 0 || !a2 )
    return 0;
  v4 = *(_DWORD *)(**a1 + 4);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v11[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v11;
  v11[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  xxxMNSelectItem(a1, a2, (char *)0xFFFFFFFF);
  if ( !*(_DWORD *)(**a1 + 24) )
  {
    ThreadUnlock1();
    return 0;
  }
  HMAssignmentLock(&v12, v7);
  HMAssignmentLock(**a1 + 24, **a1);
  HMAssignmentLock(v10, v9);
  HMAssignmentUnlock(&v12);
  if ( !*(_DWORD *)(**a1 + 4) || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(**a1 + 4) + 20) + 22) & 8) != 0 )
  {
    if ( *(_DWORD *)(**a1 + 4) && *(_DWORD *)(*(_DWORD *)(**a1 + 4) + 88) )
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a2 + 4) & 0xFFFFFFFD | (2
                                                              * (*(_DWORD *)(*(_DWORD *)(**a1 + 4) + 88) == *(_DWORD *)(**a1 + 20)));
    else
      *(_DWORD *)(a2 + 4) ^= (*(_DWORD *)(a2 + 4) ^ (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) + 20) >> 6)) & 2;
  }
  else
  {
    *(_DWORD *)(a2 + 4) &= ~2u;
  }
  *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 4))) & 4;
  xxxWindowEvent(5u, *(struct tagEVENTHOOK **)(**a1 + 4), ~(*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  xxxWindowEvent(4u, *(struct tagEVENTHOOK **)(**a1 + 4), (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  ThreadUnlock1();
  return 1;
}
