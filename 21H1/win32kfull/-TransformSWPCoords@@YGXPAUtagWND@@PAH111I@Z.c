/*
 * XREFs of ?TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z @ 0x15F6FC
 * Callers:
 *     _NtUserSetWindowPos@28 @ 0x30082 (_NtUserSetWindowPos@28.c)
 *     _NtUserDeferWindowPosAndBand@40 @ 0x749C8 (_NtUserDeferWindowPosAndBand@40.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ScaleDpiValueWithSubpixel@16 @ 0x151932 (_ScaleDpiValueWithSubpixel@16.c)
 *     _GetLogicalDpiFromMonitor@8 @ 0x15FA34 (_GetLogicalDpiFromMonitor@8.c)
 */

void __userpurge TransformSWPCoords(
        INT *a1@<edx>,
        int a2@<ecx>,
        INT *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        unsigned int a8)
{
  int *v8; // edi
  int v10; // eax
  int v11; // edi
  int CurrentThreadDpiAwarenessContext; // eax
  INT v13; // edi
  unsigned __int16 v14; // di
  INT (__stdcall *v15)(INT, INT, INT); // esi
  int v16; // eax
  int v17; // ecx
  INT v18; // edx
  INT v19; // eax
  int v20; // eax
  int v21; // edi
  INT v22; // ebx
  int v23; // eax
  INT v24; // edi
  INT v25; // eax
  INT v26; // [esp-8h] [ebp-38h]
  INT v27; // [esp-4h] [ebp-34h]
  unsigned __int16 v28; // [esp+Ch] [ebp-24h]
  int LogicalDpiFromMonitor; // [esp+1Ch] [ebp-14h] BYREF
  INT v31; // [esp+20h] [ebp-10h]
  int v32; // [esp+24h] [ebp-Ch]
  int v33; // [esp+28h] [ebp-8h]

  v8 = a5;
  LogicalDpiFromMonitor = (unsigned __int8)a6 & 3;
  if ( !_IsTopLevelWindow((_DWORD *)a2) )
  {
    if ( LogicalDpiFromMonitor != 3 )
    {
      v10 = ValidateHmonitorNoRip(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 164));
      v11 = v10;
      if ( v10 )
      {
        LogicalDpiFromMonitor = (unsigned __int16)GetLogicalDpiFromMonitor(v10, *(_DWORD *)(*(_DWORD *)(a2 + 20) + 184));
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
        v28 = GetLogicalDpiFromMonitor(v11, CurrentThreadDpiAwarenessContext);
        v13 = (unsigned __int16)LogicalDpiFromMonitor;
        if ( ((unsigned __int8)a6 & 2) == 0 )
        {
          *a1 = EngMulDiv(*a1, (unsigned __int16)LogicalDpiFromMonitor, v28);
          *a3 = EngMulDiv(*a3, v13, v28);
        }
        if ( ((unsigned __int8)a6 & 1) == 0 )
        {
          if ( IsChildWindowDpiBoundary((_DWORD *)a2) )
          {
            v14 = LogicalDpiFromMonitor;
            *(float *)(a2 + 132) = 0.0;
            *(float *)(a2 + 136) = 0.0;
            ScaleDpiValueWithSubpixel(a4, (float *)(a2 + 132), v14, v28);
            ScaleDpiValueWithSubpixel(a5, (float *)(a2 + 136), v14, v28);
            return;
          }
          v15 = EngMulDiv;
          *a4 = EngMulDiv(*a4, v13, v28);
          v27 = v28;
          v26 = v13;
          goto LABEL_17;
        }
      }
    }
    return;
  }
  if ( !LogicalDpiFromMonitor )
  {
    LogicalDpiFromMonitor = *a1;
    v16 = LogicalDpiFromMonitor + *a4;
    v31 = *a3;
    v32 = v16;
    v33 = v31 + *a5;
    TransformRectBetweenCoordinateSpaces(&LogicalDpiFromMonitor, &LogicalDpiFromMonitor, a2, 0);
    v17 = LogicalDpiFromMonitor;
    v18 = v31;
    *a1 = LogicalDpiFromMonitor;
    *a3 = v18;
    *a4 = v32 - v17;
    v19 = v33 - v18;
LABEL_18:
    *v8 = v19;
    return;
  }
  if ( ((unsigned __int8)a6 & 2) == 0 )
  {
    v8 = a3;
    LogicalDpiFromMonitor = *a1;
    v31 = *a3;
    TransformPointBetweenCoordinateSpaces(&LogicalDpiFromMonitor, &LogicalDpiFromMonitor, a2, 0);
    *a1 = LogicalDpiFromMonitor;
    v19 = v31;
    goto LABEL_18;
  }
  if ( ((unsigned __int8)a6 & 1) == 0 )
  {
    v20 = ValidateHmonitorNoRip(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 164));
    v21 = v20;
    if ( v20 )
    {
      v22 = (unsigned __int16)GetLogicalDpiFromMonitor(v20, *(_DWORD *)(*(_DWORD *)(a2 + 20) + 184));
      v23 = W32GetCurrentThreadDpiAwarenessContext();
      v15 = EngMulDiv;
      v24 = (unsigned __int16)GetLogicalDpiFromMonitor(v21, v23);
      v25 = EngMulDiv(*a4, v22, v24);
      v27 = v24;
      v26 = v22;
      *a4 = v25;
LABEL_17:
      v8 = a5;
      v19 = v15(*a5, v26, v27);
      goto LABEL_18;
    }
  }
}
