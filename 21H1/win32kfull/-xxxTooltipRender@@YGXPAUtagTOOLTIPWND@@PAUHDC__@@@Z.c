/*
 * XREFs of ?xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z @ 0x1A0FFC
 * Callers:
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _GreSetBkMode@8 @ 0x90470 (_GreSetBkMode@8.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     _xxxClientExtTextOutW@32 @ 0xBC862 (_xxxClientExtTextOutW@32.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall xxxTooltipRender(_DWORD *a1, HDC a2)
{
  int DPIMETRICSForDpi; // eax
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // edx
  int v9; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  BOOL v12; // edx
  unsigned __int16 *v13; // ecx
  struct tagRECT *v14; // esi
  int v15; // [esp-4h] [ebp-34h]
  const RECT *v16; // [esp+0h] [ebp-30h]
  HBRUSH v17; // [esp+4h] [ebp-2Ch]
  int v19[4]; // [esp+1Ch] [ebp-14h] BYREF

  if ( a1[9] )
  {
    DPIMETRICSForDpi = GetDPIMETRICSForDpi((void *)*(unsigned __int16 *)(*(_DWORD *)(*a1 + 20) + 180));
    GreSelectFont(a2, *(_DWORD *)(DPIMETRICSForDpi + 44));
    GreSetTextColor(a2, *(_DWORD *)(_gpsi + 4260));
    v5 = *a1;
    v6 = *(_DWORD *)(_gpsi + 4264);
    v7 = *(_DWORD **)(v5 + 20);
    v8 = v7[18];
    v9 = v7[17];
    v19[0] = 0;
    v19[2] = v7[19] - v9;
    v19[1] = v7[18] - v8;
    v19[3] = v7[20] - v8;
    if ( v6 == GreGetNearestColor(a2, v6) )
    {
      GreSetBkColor(a2, v6);
      v15 = 2;
    }
    else
    {
      FillRect(*(HDC *)(_gpsi + 4388), v16, v17);
      GreSetBkMode(a2, 1);
      v15 = 4;
    }
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v12 = CALL_LPK(ThreadWin32Thread);
    v13 = (unsigned __int16 *)a1[9];
    v14 = (struct tagRECT *)wcslen(v13);
    if ( v12 )
      xxxClientExtTextOutW(a2, 2, 1, v15, v19, v13, (int)v14, (int)v13);
    else
      GreExtTextOutWInternal(a2, (ERECTL *)2, (struct XDCOBJ *)1, v15, (ERECTL **)v19, v13, v14, 0, 0, 0);
  }
}
