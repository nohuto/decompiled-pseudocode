/*
 * XREFs of ?xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z @ 0x19DBBC
 * Callers:
 *     _xxxDrawAnimatedRects@16 @ 0x19E161 (_xxxDrawAnimatedRects@16.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     __WindowFromDC@4 @ 0x9A764 (__WindowFromDC@4.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?SaveScreen@@YGKPAUtagWND@@KKHHHH@Z @ 0x19DB0A (-SaveScreen@@YGKPAUtagWND@@KKHHHH@Z.c)
 */

void __userpurge xxxAnimateCaption(
        HDC a1@<edx>,
        struct tagWND *a2@<ecx>,
        struct tagWND *a3,
        HDC a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  INT DpiForSystem; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // ebx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v16; // ecx
  int v17; // eax
  int WindowBordersForDpiWithCompatFlags2; // esi
  INT v19; // eax
  int DpiDependentMetric; // eax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // eax
  int v24; // edx
  HDC v25; // esi
  PKTHREAD v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  __int16 v31; // cx
  unsigned __int16 v32; // ax
  int v33; // eax
  __int16 v34; // cx
  int v35; // [esp+0h] [ebp-80h]
  int v36; // [esp+0h] [ebp-80h]
  int v37; // [esp+4h] [ebp-7Ch]
  int v38; // [esp+4h] [ebp-7Ch]
  _DWORD v39[3]; // [esp+10h] [ebp-70h] BYREF
  int CompatibleBitmapInternal; // [esp+1Ch] [ebp-64h]
  int v41; // [esp+20h] [ebp-60h]
  int v42; // [esp+24h] [ebp-5Ch]
  HDC CompatibleDC; // [esp+28h] [ebp-58h]
  unsigned int v44; // [esp+2Ch] [ebp-54h]
  unsigned int v45; // [esp+30h] [ebp-50h]
  int v46; // [esp+34h] [ebp-4Ch]
  struct tagWND *v47; // [esp+38h] [ebp-48h]
  int v48; // [esp+3Ch] [ebp-44h]
  HDC v49; // [esp+40h] [ebp-40h]
  int v50; // [esp+44h] [ebp-3Ch]
  int v51; // [esp+48h] [ebp-38h]
  unsigned int v52; // [esp+4Ch] [ebp-34h]
  int i; // [esp+50h] [ebp-30h]
  struct tagWND *v54; // [esp+54h] [ebp-2Ch]
  unsigned int v55; // [esp+58h] [ebp-28h]
  unsigned int v56; // [esp+5Ch] [ebp-24h]
  int v57; // [esp+60h] [ebp-20h]
  int v58; // [esp+64h] [ebp-1Ch]
  unsigned int v59; // [esp+68h] [ebp-18h]
  _DWORD v60[2]; // [esp+6Ch] [ebp-14h] BYREF
  int v61; // [esp+74h] [ebp-Ch]
  int v62; // [esp+78h] [ebp-8h]

  v54 = a2;
  v61 = 0;
  v39[2] = 0;
  v49 = a1;
  i = (int)a3;
  v58 = (int)a4;
  v47 = _WindowFromDC();
  if ( v47 )
  {
    DpiForSystem = GetDpiForSystem();
    v7 = GetDpiDependentMetric(2, DpiForSystem) - 1;
    v42 = v7;
    if ( !_gProtocolType && (*(_BYTE *)(_gpsi + 1836) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(_ghdcMem);
      if ( CompatibleDC )
      {
        v8 = *(_DWORD *)a4;
        v55 = *((_DWORD *)a3 + 1);
        v9 = *((_DWORD *)a3 + 2);
        v56 = *(_DWORD *)a3;
        v10 = v9 - v56;
        v51 = *((_DWORD *)a4 + 1);
        v11 = *((_DWORD *)a4 + 2) - v8;
        v48 = v8;
        v50 = v11;
        v12 = *((_DWORD *)v54 + 5);
        v13 = *(_DWORD *)(v12 + 16);
        v52 = *(_DWORD *)(v12 + 20);
        v59 = GetDpiForSystem();
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x9900u )
          v17 = *(_DWORD *)(ThreadWin32Thread + 352);
        else
          v17 = 0;
        WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(v52, v13, v16, 0, v59, v17);
        v19 = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(2, v19);
        v21 = v55;
        v57 = DpiDependentMetric;
        v59 = 2 * WindowBordersForDpiWithCompatFlags2;
        v22 = v56;
        if ( (int)(*(_DWORD *)(i + 12) - v55) > DpiDependentMetric )
        {
          v22 = WindowBordersForDpiWithCompatFlags2 + v56;
          v21 = WindowBordersForDpiWithCompatFlags2 + v55;
          v56 += WindowBordersForDpiWithCompatFlags2;
          v10 -= 2 * WindowBordersForDpiWithCompatFlags2;
          v55 += WindowBordersForDpiWithCompatFlags2;
        }
        v23 = v50;
        if ( *(_DWORD *)(v58 + 12) - v51 > v57 )
        {
          v48 += WindowBordersForDpiWithCompatFlags2;
          v51 += WindowBordersForDpiWithCompatFlags2;
          v23 = v50 - v59;
          v50 -= v59;
        }
        v60[0] = 0;
        v45 = v21;
        v24 = v10;
        v44 = v22;
        v46 = v10;
        v60[1] = v7;
        if ( v10 <= v23 )
          v24 = v23;
        v61 = v24;
        v62 = 2 * v7;
        v25 = CompatibleDC;
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)(_gpDispInfo + 28), v24, 2 * v7, 0, 0, 0);
        v41 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        v26 = KeGetCurrentThread();
        v27 = W32GetThreadWin32Thread(v26);
        v39[0] = *(_DWORD *)(v27 + 228);
        *(_DWORD *)(v27 + 228) = v39;
        v39[1] = v47;
        HMLockObject(v47);
        if ( _gbDisableAlpha || ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
          xxxDrawCaptionTemp(v54, v25, v60, 0, 0, 0, (struct tagCURSOR *)0xD);
        else
          xxxDrawCaptionTemp(v54, v25, v60, 0, 0, 0, (struct tagCURSOR *)0x2D);
        if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit();
        EnterSharedCrit(0, 1);
        EnterSharedRenderCrit();
        v54 = (struct tagWND *)SaveScreen((int)v47, 0, v56, v55, v10, v7, v35, v37);
        if ( v54
          || NtGdiBitBltInternal(
               v25,
               0,
               0,
               v10,
               v7,
               v49,
               (struct ECLIPOBJ *)v56,
               (struct ECLIPOBJ *)v55,
               13369376,
               0,
               0) )
        {
          v50 -= v10;
          v48 -= v56;
          v51 -= v55;
          v58 = MEMORY[0xFFDF0004];
          if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
          {
            v29 = MEMORY[0xFFDF0324];
            v57 = MEMORY[0xFFDF0320];
            if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
            {
              do
              {
                _mm_pause();
                v57 = MEMORY[0xFFDF0320];
              }
              while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
              v7 = v42;
              v29 = MEMORY[0xFFDF0324];
              v25 = CompatibleDC;
            }
            v28 = v58 * (v29 << 8) + (((unsigned int)v58 * (unsigned __int64)(unsigned int)v57) >> 24);
          }
          else
          {
            v28 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
          }
          v57 = v28;
          NtGdiBitBltInternal(v49, v56, (struct XDCOBJ *)v55, v10, v7, v25, 0, (struct ECLIPOBJ *)v7, 13369376, 0, 0);
          i = MEMORY[0xFFDF0004];
          if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
          {
            v31 = MEMORY[0xFFDF0324];
            v58 = MEMORY[0xFFDF0320];
            if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
            {
              do
              {
                _mm_pause();
                v58 = MEMORY[0xFFDF0320];
              }
              while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
              v7 = v42;
              v31 = MEMORY[0xFFDF0324];
              v25 = CompatibleDC;
            }
            LOWORD(v30) = i * (v31 << 8) + (((unsigned int)i * (unsigned __int64)(unsigned int)v58) >> 24);
          }
          else
          {
            v30 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
          }
          v32 = v30 - v57;
          for ( i = 250; v32 <= 0xFAu; v32 = v33 - v57 )
          {
            v59 = v56 + (v48 * v32 + 125) / i;
            v52 = v55 + (v51 * v32 + 125) / i;
            v58 = v10 + (v50 * v32 + 125) / 250;
            UserSleep(1);
            if ( v54 )
              SaveScreen((int)v47, v54, v44, v45, v46, v7, v36, v38);
            else
              NtGdiBitBltInternal(v49, v44, (struct XDCOBJ *)v45, v46, v7, v25, 0, 0, 13369376, 0, 0);
            v44 = v59;
            v45 = v52;
            v46 = v58;
            if ( v54 )
              v54 = (struct tagWND *)SaveScreen((int)v47, 0, v59, v52, v58, v7, v36, v38);
            else
              NtGdiBitBltInternal(
                v25,
                0,
                0,
                v58,
                v7,
                v49,
                (struct ECLIPOBJ *)v59,
                (struct ECLIPOBJ *)v52,
                13369376,
                0,
                0);
            NtGdiBitBltInternal(v49, v59, (struct XDCOBJ *)v52, v58, v7, v25, 0, (struct ECLIPOBJ *)v7, 13369376, 0, 0);
            v52 = MEMORY[0xFFDF0004];
            if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
            {
              v34 = MEMORY[0xFFDF0324];
              v59 = MEMORY[0xFFDF0320];
              if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
              {
                do
                {
                  _mm_pause();
                  v59 = MEMORY[0xFFDF0320];
                }
                while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
                v7 = v42;
                v34 = MEMORY[0xFFDF0324];
                v25 = CompatibleDC;
              }
              LOWORD(v33) = v52 * (v34 << 8) + ((v52 * (unsigned __int64)v59) >> 24);
            }
            else
            {
              v33 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
            }
          }
          if ( v54 )
            SaveScreen((int)v47, v54, v44, v45, v46, v7, v36, v38);
          else
            NtGdiBitBltInternal(v49, v44, (struct XDCOBJ *)v45, v46, v7, v25, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock();
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit();
        EnterCrit(0, 1);
        ThreadUnlock1();
        GreSelectBitmap(v25, v41);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(v25);
      }
    }
  }
}
