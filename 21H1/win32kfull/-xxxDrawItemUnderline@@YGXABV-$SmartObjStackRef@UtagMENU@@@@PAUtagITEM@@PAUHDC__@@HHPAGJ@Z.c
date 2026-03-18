/*
 * XREFs of ?xxxDrawItemUnderline@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z @ 0x1A90F9
 * Callers:
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     ?xxxDrawMenuItemText@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z @ 0x1A9277 (-xxxDrawMenuItemText@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     _xxxClientGetTextExtentPointW@16 @ 0xBCB06 (_xxxClientGetTextExtentPointW@16.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 */

int __fastcall xxxDrawItemUnderline(int a1, int a2, HDC a3, int a4, int a5, WCHAR *a6, int a7)
{
  PKTHREAD CurrentThread; // eax
  int result; // eax
  int v11; // ecx
  int ProcessDpiMetrics; // eax
  int v13; // ebx
  WCHAR *v14; // edx
  int v15; // ecx
  bool v16; // zf
  int v17; // eax
  int v18; // eax
  struct tagSIZE v19; // [esp+Ch] [ebp-18h] BYREF
  struct tagSIZE v20; // [esp+14h] [ebp-10h] BYREF
  int v21; // [esp+1Ch] [ebp-8h]
  int v22; // [esp+20h] [ebp-4h]

  v21 = a1;
  CurrentThread = KeGetCurrentThread();
  result = W32GetThreadWin32Thread(CurrentThread);
  v22 = result;
  if ( a7 == 0xFFFF )
    return result;
  if ( *(_DWORD *)(*(_DWORD *)a2 + 56) != 0x7FFFFFFF )
  {
    if ( (*(_BYTE *)(PsGetCurrentProcessWin32Process() + 412) & 0xF) == 0 )
      goto LABEL_17;
    result = v22;
  }
  if ( a7 )
  {
    v20.cx = 0;
    v20.cy = 0;
    if ( CALL_LPK(result) )
    {
      xxxClientGetTextExtentPointW(a3, a6, a7, &v20);
      v11 = *(_DWORD *)(a1 + 8);
      if ( !v11 )
        v11 = **(_DWORD **)a1;
      result = MNGetpItemIndex(v11, a2);
      if ( result == -1 )
        return result;
    }
    else
    {
      GreGetTextExtentW(a3, a6, a7, &v20, 1);
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      ProcessDpiMetrics = GetProcessDpiMetrics();
    else
      ProcessDpiMetrics = Get96DpiMetrics();
    *(_DWORD *)(*(_DWORD *)a2 + 56) = v20.cx - *(_DWORD *)(ProcessDpiMetrics + 12);
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)a2 + 56) = 0;
  }
LABEL_17:
  v13 = *(_DWORD *)(*(_DWORD *)a2 + 56) + a4;
  if ( *(_DWORD *)(*(_DWORD *)a2 + 60) )
  {
LABEL_28:
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v18 = GetProcessDpiMetrics();
    else
      v18 = Get96DpiMetrics();
    return NtGdiPatBlt(
             a3,
             v13,
             (struct XDCOBJ *)(a5 + *(_DWORD *)(v18 + 20)),
             *(_DWORD *)(*(_DWORD *)a2 + 60),
             1,
             (struct EXFORMOBJ *)0xF00021);
  }
  v19.cx = 0;
  v19.cy = 0;
  if ( CALL_LPK(v22) )
  {
    xxxClientGetTextExtentPointW(a3, v14, 1, &v19);
    v15 = *(_DWORD *)(v21 + 8);
    if ( !v15 )
      v15 = **(_DWORD **)v21;
    result = MNGetpItemIndex(v15, a2);
    v16 = result == -1;
  }
  else
  {
    result = GreGetTextExtentW(a3, v14, 1u, &v19, 1);
    v16 = result == 0;
  }
  if ( !v16 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v17 = GetProcessDpiMetrics();
    else
      v17 = Get96DpiMetrics();
    *(_DWORD *)(*(_DWORD *)a2 + 60) = v19.cx - *(_DWORD *)(v17 + 12);
    goto LABEL_28;
  }
  return result;
}
