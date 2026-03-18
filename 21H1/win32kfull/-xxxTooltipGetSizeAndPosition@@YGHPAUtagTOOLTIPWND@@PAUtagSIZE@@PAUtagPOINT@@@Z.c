/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z @ 0x1A0DCF
 * Callers:
 *     ?xxxShowTooltip@@YGHPAUtagTOOLTIPWND@@@Z @ 0x1A0CFB (-xxxShowTooltip@@YGHPAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     _xxxClientGetTextExtentPointW@16 @ 0xBCB06 (_xxxClientGetTextExtentPointW@16.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     ?GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z @ 0xE4980 (-GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetCursorHeight@@YGHXZ @ 0x1A07A4 (-GetCursorHeight@@YGHXZ.c)
 */

int __userpurge xxxTooltipGetSizeAndPosition@<eax>(
        struct tagSIZE *a1@<edx>,
        int a2@<ecx>,
        struct tagTOOLTIPWND *a3,
        struct tagSIZE *a4,
        struct tagPOINT *a5)
{
  int v6; // eax
  int v7; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v11; // eax
  int v12; // eax
  _WORD *v13; // ecx
  _WORD *v14; // esi
  int v16; // ecx
  HDC v17; // esi
  _WORD *v18; // ecx
  _WORD *v19; // esi
  unsigned int v21; // ecx
  struct tagSIZE *v22; // eax
  void *v23; // ecx
  int *MonitorRect; // eax
  int v25; // ecx
  struct tagSIZE *v26; // esi
  LONG cy; // edx
  int v28; // eax
  LONG cx; // edx
  int v30; // ecx
  int v31[5]; // [esp+10h] [ebp-3Ch] BYREF
  void *v32; // [esp+24h] [ebp-28h]
  int v33; // [esp+28h] [ebp-24h]
  int v34; // [esp+2Ch] [ebp-20h] BYREF
  int v35; // [esp+30h] [ebp-1Ch]
  int v36; // [esp+34h] [ebp-18h]
  int v37; // [esp+38h] [ebp-14h]
  HDC TooltipDC; // [esp+3Ch] [ebp-10h]
  struct tagSIZE *v39; // [esp+40h] [ebp-Ch]

  v39 = a1;
  v37 = a2;
  *(_DWORD *)a3 = *(_DWORD *)(_gpsi + 4428);
  *((_DWORD *)a3 + 1) = *(_DWORD *)(_gpsi + 4432);
  v6 = _MonitorFromPoint(*(_DWORD *)a3, *((_DWORD *)a3 + 1), 0, 0);
  v7 = v6;
  v32 = (void *)v6;
  if ( !v6 )
    return 0;
  TooltipDC = GetTooltipDC((_DWORD *)a2, v6);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( CALL_LPK(ThreadWin32Thread) )
  {
    v36 = 0;
    v11 = KeGetCurrentThread();
    v12 = W32GetThreadWin32Thread(v11);
    v34 = *(_DWORD *)(v12 + 228);
    *(_DWORD *)(v12 + 228) = &v34;
    v35 = v7;
    HMLockObject(v7);
    v13 = *(_WORD **)(a2 + 36);
    v14 = v13 + 1;
    while ( *v13++ )
      ;
    v16 = v13 - v14;
    v17 = TooltipDC;
    xxxClientGetTextExtentPointW(TooltipDC, *(const WCHAR **)(a2 + 36), v16, v39);
    if ( !ThreadUnlock1() )
    {
      _ReleaseDC(v17);
      return 0;
    }
  }
  else
  {
    v18 = *(_WORD **)(a2 + 36);
    v19 = v18 + 1;
    while ( *v18++ )
      ;
    v21 = v18 - v19;
    v17 = TooltipDC;
    GreGetTextExtentW(TooltipDC, *(unsigned __int16 **)(a2 + 36), v21, v39, 1);
  }
  _ReleaseDC(v17);
  v22 = v39;
  v23 = v32;
  v39->cx += 6;
  v22->cy += 4;
  MonitorRect = GetMonitorRect(v23, v31);
  v25 = *((_DWORD *)a3 + 1);
  v33 = *MonitorRect;
  v34 = MonitorRect[1];
  v35 = MonitorRect[2];
  v36 = MonitorRect[3];
  v26 = v39;
  cy = v39->cy;
  if ( v25 + cy < v36 )
  {
    *((_DWORD *)a3 + 1) += GetCursorHeight();
    *(_DWORD *)(v37 + 20) |= 1u;
  }
  else
  {
    v28 = v37;
    *((_DWORD *)a3 + 1) = v25 - cy;
    *(_DWORD *)(v28 + 20) &= ~1u;
  }
  cx = v26->cx;
  v30 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 + v26->cx >= v35 )
  {
    v30 = v35 - cx;
    *(_DWORD *)a3 = v35 - cx;
  }
  if ( v30 < v33 )
    *(_DWORD *)a3 = v33;
  return 1;
}
