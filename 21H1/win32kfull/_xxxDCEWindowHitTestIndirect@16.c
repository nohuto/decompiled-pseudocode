/*
 * XREFs of _xxxDCEWindowHitTestIndirect@16 @ 0x262C0
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxDCEWindowHitTest@32 @ 0x9AED8 (_xxxDCEWindowHitTest@32.c)
 * Callees:
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(int a1, int a2, struct tagWND *a3, LONG a4)
{
  int v6; // ecx
  struct tagWND *v7; // ebx
  struct tagWND *v8; // eax
  LONG v9; // edx
  LONG x; // edi
  int v11; // ecx
  int v12; // ebx
  int v13; // edi
  int v15; // ecx
  int v16; // eax
  struct tagPOINT v17; // [esp-4h] [ebp-3Ch]
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v18; // [esp+4h] [ebp-34h]
  unsigned int CurrentThreadDpiAwarenessContext; // [esp+14h] [ebp-24h]
  HWND v21; // [esp+18h] [ebp-20h]
  unsigned int v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+1Ch] [ebp-1Ch]
  int v24; // [esp+20h] [ebp-18h]
  struct tagWND *v25; // [esp+24h] [ebp-14h] BYREF
  struct tagPOINT v26; // [esp+28h] [ebp-10h] BYREF
  int v27; // [esp+30h] [ebp-8h]
  int v28; // [esp+34h] [ebp-4h]

  v28 = 0;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v21 = 0;
  v26.y = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v26.y;
  v27 = 0;
  if ( a1 )
  {
    v6 = *(_DWORD *)(a2 + 16) & 4;
    v23 = *(_DWORD *)(a2 + 16);
    v24 = v6;
    while ( 1 )
    {
      v7 = a3;
      v8 = a3;
      v9 = a4;
      x = a4;
      v25 = a3;
      v26.x = a4;
      if ( !v6 )
        goto LABEL_4;
      v22 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 184);
      if ( (((CurrentThreadDpiAwarenessContext >> 8) ^ (v22 >> 8)) & 0x1FF) == 0 )
      {
        v15 = (v22 & 0xF) == 2 && (v22 & 0x20000000) != 0;
        v16 = (CurrentThreadDpiAwarenessContext & 0xF) == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0;
        if ( v15 == v16 )
          break;
      }
      LogicalToPhysicalDPIPoint(&v25, &a3, CurrentThreadDpiAwarenessContext, 0);
      v11 = a2;
      v9 = a4;
      v7 = a3;
      x = v26.x;
      *(_DWORD *)(a2 + 16) &= ~4u;
      v8 = v25;
LABEL_5:
      if ( *(_DWORD *)(v11 + 32) && v8 == v7 && x == v9 )
      {
        v12 = a2;
      }
      else
      {
        v12 = a2;
        *(_DWORD *)(a2 + 32) = &v25;
      }
      v13 = v27;
      v27 = a1;
      HMLockObject(a1);
      if ( v13 )
        HMUnlockObject(v13);
      v17.x = v26.x;
      v21 = xxxDCEWindowHitTest2Internal(v25, v17, v18);
      if ( !v21 )
      {
        v6 = v24;
        *(_DWORD *)(v12 + 16) = v23;
        a1 = *(_DWORD *)(a1 + 48);
        if ( a1 )
          continue;
      }
      goto LABEL_13;
    }
    v8 = v25;
LABEL_4:
    v11 = a2;
    goto LABEL_5;
  }
LABEL_13:
  ThreadUnlock1();
  return v21;
}
