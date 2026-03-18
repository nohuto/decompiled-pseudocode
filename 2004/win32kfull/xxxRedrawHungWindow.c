/*
 * XREFs of xxxRedrawHungWindow @ 0x1C0242114
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C006CB10 (xxxSimpleDoSyncPaint.c)
 *     xxxHungAppDemon @ 0x1C00E7C60 (xxxHungAppDemon.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0211A1C (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ProcessHungWindow @ 0x1C00038FC (ProcessHungWindow.c)
 *     FillRect @ 0x1C0062024 (FillRect.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00722EC (PhysicalToLogicalInPlaceRgn.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCalcClientRect @ 0x1C00AC73C (xxxCalcClientRect.c)
 *     xxxDrawWindowFrame @ 0x1C00AFD24 (xxxDrawWindowFrame.c)
 *     xxxInternalPaintDesktop @ 0x1C00BEFFC (xxxInternalPaintDesktop.c)
 *     IsHungWindow @ 0x1C00E7D90 (IsHungWindow.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C029FD7C (GreWatchVisRgnChange.c)
 */

char __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 StyleWindow; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 EmptyRgn; // rdi
  __int64 ThreadWin32Thread; // rax
  HDC DCEx; // rax
  HDC v10; // rbx
  __int16 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 i; // r14
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // r8
  HDC v19; // rdi
  __int64 DesktopWindow; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  RECT v26; // xmm0
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  unsigned __int64 v30; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  HRGN v38; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v39[8]; // [rsp+28h] [rbp-31h] BYREF
  __int128 v40; // [rsp+30h] [rbp-29h] BYREF
  __int64 v41; // [rsp+40h] [rbp-19h]
  _QWORD v42[3]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v43; // [rsp+60h] [rbp+7h] BYREF
  RECT v44; // [rsp+70h] [rbp+17h] BYREF

  v42[2] = 0LL;
  v41 = 0LL;
  StyleWindow = *((_QWORD *)a1 + 5);
  v44 = 0LL;
  v40 = 0LL;
  if ( *(_QWORD *)(StyleWindow + 136) )
  {
    LOBYTE(StyleWindow) = *(_BYTE *)(StyleWindow + 31);
    if ( (StyleWindow & 0x10) != 0 )
    {
      if ( !a2 || (unsigned int)IsHungWindow((__int64)a1) )
      {
        LOBYTE(StyleWindow) = ProcessHungWindow();
        return StyleWindow;
      }
      StyleWindow = GetStyleWindow((__int64)a1, 2568);
      if ( !StyleWindow )
      {
        v6 = *((_QWORD *)a1 + 5);
        if ( *(_QWORD *)(v6 + 136) <= 1uLL )
        {
          v44 = *(RECT *)(v6 + 88);
          EmptyRgn = GreCreateRectRgnIndirect(&v44);
          if ( !EmptyRgn )
            EmptyRgn = 1LL;
        }
        else
        {
          EmptyRgn = CreateEmptyRgn(v5);
          if ( !EmptyRgn )
          {
            EmptyRgn = 1LL;
            goto LABEL_9;
          }
          if ( !(unsigned int)GreCombineRgn(EmptyRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
          {
            GreDeleteObject(EmptyRgn);
            EmptyRgn = 1LL;
          }
        }
        if ( EmptyRgn != 1 && (unsigned int)GreCombineRgn(EmptyRgn, EmptyRgn, a2, 1LL) == 1 )
        {
          LOBYTE(StyleWindow) = GreDeleteObject(EmptyRgn);
          return StyleWindow;
        }
LABEL_9:
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v42[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v42;
        v42[1] = a1;
        HMLockObject(a1);
        if ( gihmodUserApiHook < 0 )
        {
          DCEx = (HDC)_GetDCEx(a1, EmptyRgn, 328833LL);
          v10 = DCEx;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
            || (v11 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gpqForeground) )
          {
            v11 = 0x2000;
          }
          xxxDrawWindowFrame((__int64)a1, DCEx, v11);
          _ReleaseDC(v10);
        }
        xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
        v44 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
        xxxCalcClientRect((__int64)a1, &v44, 1);
        SetRectRgnIndirect(ghrgnInv2, &v44);
        if ( EmptyRgn > 1 )
        {
          v12 = GreCombineRgn(EmptyRgn, EmptyRgn, ghrgnInv2, 1LL);
          if ( v12 )
          {
            if ( v12 == 1 )
            {
              GreDeleteObject(EmptyRgn);
              EmptyRgn = 0LL;
LABEL_39:
              v18 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
                v18 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
              v19 = (HDC)_GetDCEx(a1, EmptyRgn, v18);
              GreWatchVisRgnChange(v19);
              if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
              {
                DesktopWindow = GetDesktopWindow((__int64)a1);
                v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v40 = *(_QWORD *)(v21 + 408);
                *(_QWORD *)(v21 + 408) = &v40;
                *((_QWORD *)&v40 + 1) = DesktopWindow;
                if ( DesktopWindow )
                  HMLockObject(DesktopWindow);
                xxxInternalPaintDesktop(DesktopWindow, v19, 1);
                ThreadUnlock1(v23, v22, v24);
              }
              else
              {
                v25 = *((_QWORD *)a1 + 5);
                v44 = *(RECT *)(v25 + 88);
                v26 = v44;
                v27 = *(_DWORD *)(v25 + 92);
                v28 = -*(_DWORD *)(v25 + 88);
                v44.right -= *(_DWORD *)(v25 + 88);
                v29 = -v27;
                v44.bottom += v29;
                v44.top += v29;
                v44.left = v28 + _mm_cvtsi128_si32((__m128i)v26);
                v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 72LL);
                if ( v30 )
                {
                  if ( v30 <= 0x1F )
                    v30 = *(_QWORD *)(gpsi + 8 * v30 + 4688);
                }
                else if ( (*(_BYTE *)(v25 + 18) & 1) != 0 && (*(_BYTE *)(v25 + 21) & 2) != 0 )
                {
                  v30 = *(_QWORD *)(gpsi + 4816LL);
                }
                else
                {
                  v30 = *(_QWORD *)(gpsi + 4736LL);
                }
                ObjectOwner = GreGetObjectOwner(v30, 16LL);
                if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
                {
                  v33 = (HBRUSH)v30;
                }
                else
                {
                  BrushColor = GreGetBrushColor(v30);
                  if ( BrushColor == -1 )
                    BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 4736LL));
                  GreSetSolidBrush(ghbrHungApp, BrushColor);
                  v33 = (HBRUSH)ghbrHungApp;
                }
                FillRect(v19, &v44, v33);
              }
              GreWatchVisRgnChange(v19);
              _ReleaseDC(v19);
              SetOrClrWF(1, (__int64)a1, 0x108u, 1);
              SetOrClrWF(1, (__int64)a1, 0x102u, 1);
              SetOrClrWF(1, (__int64)a1, 0x120u, 1);
              LOBYTE(StyleWindow) = ThreadUnlock1(v35, v34, v36);
              return StyleWindow;
            }
          }
          else
          {
            GreDeleteObject(EmptyRgn);
            EmptyRgn = 1LL;
          }
        }
        v13 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v13 + 31) & 2) == 0 )
        {
          v14 = *(_QWORD *)(v13 + 136);
          v43 = 0LL;
          if ( v14 == 1 || !(unsigned int)GreGetRgnBox(v14, &v44) )
            v44 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
          for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
          {
            v16 = *(_QWORD *)(i + 40);
            if ( (*(_BYTE *)(v16 + 31) & 0x10) != 0 && ((*(_BYTE *)(v16 + 20) & 4) != 0 || !*(_QWORD *)(v16 + 136)) )
            {
              if ( (unsigned int)IntersectRect(&v43, &v44.left, (int *)(v16 + 88)) )
              {
                v38 = (HRGN)EmptyRgn;
                v17 = PhysicalToLogicalInPlaceRgn(i, (__int64)&v38);
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v39);
                xxxInternalInvalidate((struct tagWND *)i, v38, 0x485u);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v39);
                if ( v17 )
                  GreDeleteObject(v38);
              }
            }
          }
        }
        goto LABEL_39;
      }
    }
  }
  return StyleWindow;
}
