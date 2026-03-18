/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E50C
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C023EBA4 (xxxDrawAnimatedRects.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     GetWindowBorders @ 0x1C0079A1C (GetWindowBorders.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009AB10 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00F652C (_WindowFromDC.c)
 *     xxxDrawCaptionTemp @ 0x1C014DC4C (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023E42C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
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
  __int64 v23; // rcx
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // r13d
  __int64 i; // rax
  int v30; // r8d
  unsigned int v31; // ecx
  unsigned __int16 v32; // cx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  LONG v37; // [rsp+60h] [rbp-C8h]
  int v38; // [rsp+60h] [rbp-C8h]
  LONG v39; // [rsp+64h] [rbp-C4h]
  int v40; // [rsp+64h] [rbp-C4h]
  int v41; // [rsp+68h] [rbp-C0h]
  int v42; // [rsp+6Ch] [rbp-BCh]
  int v43; // [rsp+70h] [rbp-B8h]
  int v44; // [rsp+74h] [rbp-B4h]
  int v46; // [rsp+78h] [rbp-B0h]
  int v48; // [rsp+80h] [rbp-A8h]
  struct tagWND *v49; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v51; // [rsp+90h] [rbp-98h]
  __int64 v52; // [rsp+98h] [rbp-90h]
  __int64 CompatibleBitmapInternal; // [rsp+A0h] [rbp-88h]
  _QWORD v54[3]; // [rsp+A8h] [rbp-80h] BYREF
  struct tagRECT v55; // [rsp+C0h] [rbp-68h] BYREF

  v55.right = 0;
  v54[2] = 0LL;
  v49 = WindowFromDC(a2);
  if ( v49 )
  {
    DpiForSystem = GetDpiForSystem(v7);
    v9 = GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2236LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(ghdcMem);
      if ( CompatibleDC )
      {
        top = a3->top;
        left = a3->left;
        v13 = a4->right - a4->left;
        v14 = a3->right - a3->left;
        v37 = a4->left;
        v39 = a4->top;
        WindowBorders = GetWindowBorders(
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                          *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL));
        v17 = GetDpiForSystem(v16);
        DpiDependentMetric = GetDpiDependentMetric(2LL, v17);
        v19 = 2 * WindowBorders;
        if ( a3->bottom - top > DpiDependentMetric )
        {
          left += WindowBorders;
          top += WindowBorders;
          v14 -= v19;
        }
        if ( a4->bottom - v39 > DpiDependentMetric )
        {
          v37 += WindowBorders;
          v39 += WindowBorders;
          v13 -= v19;
        }
        v55.left = 0;
        v20 = v13;
        v55.top = v9;
        v55.bottom = 2 * v9;
        if ( v14 > v13 )
          v20 = v14;
        v43 = left;
        v55.right = v20;
        v42 = top;
        v41 = v14;
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                     *(HDC *)(gpDispInfo + 56LL),
                                     v20,
                                     2 * v9,
                                     0,
                                     0LL,
                                     0LL);
        v52 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v54[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v54;
        v54[1] = v49;
        HMLockObject(v49);
        if ( gbDisableAlpha || (v22 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v22 = 13;
        xxxDrawCaptionTemp((unsigned __int64)a1, CompatibleDC, &v55, 0LL, 0LL, 0LL, v22);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v23);
        EnterSharedCrit(0LL, 1LL);
        EnterSharedRenderCrit();
        v24 = SaveScreen(v49, 0, 0LL, left, top, v14, v9);
        if ( v24
          || (v25 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v14, v9, a2, left, top, 13369376, 0, 0), v27 = 0LL, v25) )
        {
          v38 = v37 - left;
          v40 = v39 - top;
          v28 = v13 - v14;
          v51 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal(a2, left, top, v14, v9, CompatibleDC, 0, v9, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v32 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v51;
            if ( v32 > 0xFAu )
              break;
            v30 = v32;
            v31 = (int)((unsigned __int64)(274877907LL * (v38 * v32 + 125)) >> 32) >> 4;
            v46 = left + (v31 >> 31) + v31;
            v48 = top + (v40 * v30 + 125) / 250;
            v44 = v14 + (v28 * v30 + 125) / 250;
            UserSleep(1LL);
            if ( v24 )
              SaveScreen(v49, 1u, v24, v43, v42, v41, v9);
            else
              NtGdiBitBltInternal(a2, v43, v42, v41, v9, CompatibleDC, 0, 0, 13369376, 0, 0);
            v43 = v46;
            v42 = v48;
            v41 = v44;
            if ( v24 )
              v24 = SaveScreen(v49, 0, 0LL, v46, v48, v44, v9);
            else
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v44, v9, a2, v46, v48, 13369376, 0, 0);
            NtGdiBitBltInternal(a2, v46, v48, v44, v9, CompatibleDC, 0, v9, 13369376, 0, 0);
          }
          if ( v24 )
            SaveScreen(v49, 1u, v24, v43, v42, v41, v9);
          else
            NtGdiBitBltInternal(a2, v43, v42, v41, v9, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v26, v27);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v33);
        EnterCrit(0LL, 1LL);
        ThreadUnlock1(v35, v34, v36);
        GreSelectBitmap(CompatibleDC, v52);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
