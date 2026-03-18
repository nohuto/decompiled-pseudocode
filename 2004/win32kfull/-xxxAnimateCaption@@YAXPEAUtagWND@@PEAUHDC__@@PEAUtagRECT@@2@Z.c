/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023F7AC
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C023FE44 (xxxDrawAnimatedRects.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     GetWindowBorders @ 0x1C005FF14 (GetWindowBorders.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00FC03C (_WindowFromDC.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023F6CC (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  __int64 v7; // rcx
  unsigned int DpiForSystem; // eax
  LONG v9; // ebx
  HDC CompatibleDC; // rdi
  LONG top; // ebp
  LONG left; // r15d
  int v13; // r13d
  int v14; // esi
  int WindowBorders; // r14d
  __int64 v16; // rcx
  unsigned int v17; // eax
  int DpiDependentMetric; // eax
  int v19; // edx
  unsigned int v20; // edx
  __int64 ThreadWin32Thread; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r14
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // r13d
  __int64 i; // rax
  int v32; // r8d
  unsigned int v33; // ecx
  unsigned __int16 v34; // cx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  LONG v41; // [rsp+60h] [rbp-C8h]
  int v42; // [rsp+60h] [rbp-C8h]
  LONG v43; // [rsp+64h] [rbp-C4h]
  int v44; // [rsp+64h] [rbp-C4h]
  int v45; // [rsp+68h] [rbp-C0h]
  int v46; // [rsp+6Ch] [rbp-BCh]
  int v47; // [rsp+70h] [rbp-B8h]
  int v48; // [rsp+74h] [rbp-B4h]
  int v50; // [rsp+78h] [rbp-B0h]
  int v52; // [rsp+80h] [rbp-A8h]
  struct tagWND *v53; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v55; // [rsp+90h] [rbp-98h]
  __int64 v56; // [rsp+98h] [rbp-90h]
  __int64 CompatibleBitmapInternal; // [rsp+A0h] [rbp-88h]
  _QWORD v58[3]; // [rsp+A8h] [rbp-80h] BYREF
  struct tagRECT v59; // [rsp+C0h] [rbp-68h] BYREF

  v59.right = 0;
  v58[2] = 0LL;
  v53 = WindowFromDC(a2);
  if ( v53 )
  {
    DpiForSystem = GetDpiForSystem(v7);
    v9 = GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2236LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)ghdcMem);
      if ( CompatibleDC )
      {
        top = a3->top;
        left = a3->left;
        v13 = a4->right - a4->left;
        v14 = a3->right - a3->left;
        v41 = a4->left;
        v43 = a4->top;
        WindowBorders = GetWindowBorders(
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL));
        v17 = GetDpiForSystem(v16);
        DpiDependentMetric = GetDpiDependentMetric(2LL, v17);
        v19 = 2 * WindowBorders;
        if ( a3->bottom - top > DpiDependentMetric )
        {
          left += WindowBorders;
          top += WindowBorders;
          v14 -= v19;
        }
        if ( a4->bottom - v43 > DpiDependentMetric )
        {
          v41 += WindowBorders;
          v43 += WindowBorders;
          v13 -= v19;
        }
        v59.left = 0;
        v20 = v13;
        v59.top = v9;
        v59.bottom = 2 * v9;
        if ( v14 > v13 )
          v20 = v14;
        v47 = left;
        v59.right = v20;
        v46 = top;
        v45 = v14;
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                     *(HDC *)(gpDispInfo + 56LL),
                                     v20,
                                     2 * v9,
                                     0,
                                     0LL,
                                     0LL);
        v56 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v58[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v58;
        v58[1] = v53;
        HMLockObject(v53);
        if ( gbDisableAlpha || (v22 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v22 = 13;
        xxxDrawCaptionTemp((__int64)a1, CompatibleDC, &v59, 0LL, 0LL, 0LL, v22);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v24, v23, v25);
        EnterSharedCrit(0LL, 1LL);
        EnterSharedRenderCrit();
        v26 = SaveScreen(v53, 0, 0LL, left, top, v14, v9);
        if ( v26
          || (v27 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v14, v9, a2, left, top, 13369376, 0, 0), v29 = 0LL, v27) )
        {
          v42 = v41 - left;
          v44 = v43 - top;
          v30 = v13 - v14;
          v55 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal(a2, left, top, v14, v9, CompatibleDC, 0, v9, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v34 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v55;
            if ( v34 > 0xFAu )
              break;
            v32 = v34;
            v33 = (int)((unsigned __int64)(274877907LL * (v42 * v34 + 125)) >> 32) >> 4;
            v50 = left + (v33 >> 31) + v33;
            v52 = top + (v44 * v32 + 125) / 250;
            v48 = v14 + (v30 * v32 + 125) / 250;
            UserSleep(1LL);
            if ( v26 )
              SaveScreen(v53, 1u, v26, v47, v46, v45, v9);
            else
              NtGdiBitBltInternal(a2, v47, v46, v45, v9, CompatibleDC, 0, 0, 13369376, 0, 0);
            v47 = v50;
            v46 = v52;
            v45 = v48;
            if ( v26 )
              v26 = SaveScreen(v53, 0, 0LL, v50, v52, v48, v9);
            else
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v48, v9, a2, v50, v52, 13369376, 0, 0);
            NtGdiBitBltInternal(a2, v50, v52, v48, v9, CompatibleDC, 0, v9, 13369376, 0, 0);
          }
          if ( v26 )
            SaveScreen(v53, 1u, v26, v47, v46, v45, v9);
          else
            NtGdiBitBltInternal(a2, v47, v46, v45, v9, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v28, v29);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v36, v35, v37);
        EnterCrit(0LL, 1LL);
        ThreadUnlock1(v39, v38, v40);
        GreSelectBitmap(CompatibleDC, v56);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
