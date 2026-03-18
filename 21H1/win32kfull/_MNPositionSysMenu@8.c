/*
 * XREFs of _MNPositionSysMenu@8 @ 0xC069A
 * Callers:
 *     _xxxSetSystemMenu@8 @ 0xC0654 (_xxxSetSystemMenu@8.c)
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 * Callees:
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

struct _NT_TIB *__fastcall MNPositionSysMenu(_DWORD *a1, int a2)
{
  struct _NT_TIB *result; // eax
  int v4; // edx
  int WindowBordersForDpiWithCompatFlags2; // edi
  unsigned int v6; // eax
  int v7; // ecx
  INT v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  INT v13; // eax
  int v14; // eax
  int v15; // eax
  INT WindowDpiLastNotify; // eax
  int v17; // eax
  int DpiDependentMetric; // eax
  int v19; // edx
  int v20; // ecx
  INT v21; // eax
  int v22; // eax
  int v23; // ebx
  int v24; // edx
  int v25; // eax
  INT v26; // edi
  int v27; // eax
  int v28; // esi
  int v29; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ebx
  _BYTE *ArbitraryUserPointer; // ecx
  struct _NT_TIB **ExceptionList; // ecx
  int v37; // [esp+4h] [ebp-14h]
  int v38; // [esp+8h] [ebp-10h]
  struct _NT_TIB *v39; // [esp+Ch] [ebp-Ch]

  if ( !a2 )
    return UserSetLastError((struct _NT_TIB *)6);
  if ( a1 != *(_DWORD **)(a2 + 52) )
    HMAssignmentLock(a1, a2);
  v4 = a1[5];
  WindowBordersForDpiWithCompatFlags2 = 0;
  v6 = *(_DWORD *)(v4 + 184);
  v7 = v6 & 0xF;
  if ( *(char *)(v4 + 16) >= 0 )
  {
    if ( v7 == 3 )
    {
      WindowDpiLastNotify = (v6 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v4 + 144) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v6 & 0xF) == 0
           && (v17 = *(_DWORD *)(a1[2] + 248)) != 0
           && (*(_BYTE *)(**(_DWORD **)(v17 + 4) + 32) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
    }
    DpiDependentMetric = GetDpiDependentMetric(12, WindowDpiLastNotify);
    v19 = a1[5];
    v37 = DpiDependentMetric;
    v20 = *(_DWORD *)(v19 + 184) & 0xF;
    if ( v20 == 3 )
    {
      v21 = (*(_DWORD *)(v19 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v19 + 144) & 0x8000000) != 0 )
    {
      v21 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v20 && (v22 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v22 + 4) + 32) & 1) != 0 )
    {
      v21 = 96;
    }
    else
    {
      v21 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
    }
    v15 = GetDpiDependentMetric(13, v21);
  }
  else
  {
    if ( v7 == 3 )
    {
      v8 = (v6 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v4 + 144) & 0x8000000) != 0 )
    {
      v8 = GetWindowDpiLastNotify(a1);
    }
    else if ( (v6 & 0xF) == 0
           && (v9 = *(_DWORD *)(a1[2] + 248)) != 0
           && (*(_BYTE *)(**(_DWORD **)(v9 + 4) + 32) & 1) != 0 )
    {
      v8 = 96;
    }
    else
    {
      v8 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
    }
    v10 = GetDpiDependentMetric(23, v8);
    v11 = a1[5];
    v37 = v10;
    v12 = *(_DWORD *)(v11 + 184) & 0xF;
    if ( v12 == 3 )
    {
      v13 = (*(_DWORD *)(v11 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v11 + 144) & 0x8000000) != 0 )
    {
      v13 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v12 && (v14 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v14 + 4) + 32) & 1) != 0 )
    {
      v13 = 96;
    }
    else
    {
      v13 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
    }
    v15 = GetDpiDependentMetric(24, v13);
  }
  v23 = a1[5];
  v24 = v15;
  v38 = v15;
  if ( (*(_BYTE *)(v23 + 23) & 0x20) != 0 )
  {
    v34 = v37;
  }
  else
  {
    v25 = *(_DWORD *)(v23 + 184) & 0xF;
    if ( v25 == 3 )
    {
      v26 = (*(_DWORD *)(v23 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v23 + 144) & 0x8000000) != 0 )
    {
      v26 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v25 && (v27 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v27 + 4) + 32) & 1) != 0 )
    {
      v26 = 96;
    }
    else
    {
      v26 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
    }
    v28 = *(_DWORD *)(v23 + 16);
    v29 = *(_DWORD *)(v23 + 20);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x9900u )
      v33 = *(_DWORD *)(ThreadWin32Thread + 352);
    else
      v33 = 0;
    WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(v29, v28, v32, 0, v26, v33);
    v34 = WindowBordersForDpiWithCompatFlags2 + v37;
    v24 = WindowBordersForDpiWithCompatFlags2 + v38;
  }
  result = v39;
  ArbitraryUserPointer = v39->ArbitraryUserPointer;
  if ( (ArbitraryUserPointer[20] & 0x10) == 0 && *((_DWORD *)ArbitraryUserPointer + 6) )
  {
    ExceptionList = (struct _NT_TIB **)v39[2].ExceptionList;
    if ( ExceptionList )
    {
      (*ExceptionList)[1].SubSystemTib = (PVOID)WindowBordersForDpiWithCompatFlags2;
      (*ExceptionList)[1].StackLimit = (PVOID)WindowBordersForDpiWithCompatFlags2;
      (*ExceptionList)[1].ArbitraryUserPointer = (PVOID)(v24 - WindowBordersForDpiWithCompatFlags2);
      result = *ExceptionList;
      (*ExceptionList)[1].Version = v34 - WindowBordersForDpiWithCompatFlags2;
    }
  }
  return result;
}
