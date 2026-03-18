/*
 * XREFs of xxxRedrawHungWindow @ 0x1C0240E74
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C00493A0 (xxxSimpleDoSyncPaint.c)
 *     xxxHungAppDemon @ 0x1C00CADB0 (xxxHungAppDemon.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0210B9C (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ProcessHungWindow @ 0x1C000379C (ProcessHungWindow.c)
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     xxxDrawWindowFrame @ 0x1C003EDF8 (xxxDrawWindowFrame.c)
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00436D8 (PhysicalToLogicalInPlaceRgn.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     GetStyleWindow @ 0x1C00457D0 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     xxxCalcClientRect @ 0x1C004BFD0 (xxxCalcClientRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     IsHungWindow @ 0x1C00CAEE0 (IsHungWindow.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxInternalPaintDesktop @ 0x1C0122BC4 (xxxInternalPaintDesktop.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C029E92C (GreWatchVisRgnChange.c)
 */

char __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 StyleWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 EmptyRgn; // rdi
  __int64 ThreadWin32Thread; // rax
  HDC DCEx; // rax
  HDC v12; // rbx
  __int16 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 i; // r14
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // r8
  HDC v21; // rdi
  __int64 DesktopWindow; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  RECT v28; // xmm0
  int v29; // edx
  int v30; // ecx
  int v31; // edx
  unsigned __int64 v32; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  HRGN v40; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v41[8]; // [rsp+28h] [rbp-31h] BYREF
  __int128 v42; // [rsp+30h] [rbp-29h] BYREF
  __int64 v43; // [rsp+40h] [rbp-19h]
  _QWORD v44[3]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v45; // [rsp+60h] [rbp+7h] BYREF
  RECT v46; // [rsp+70h] [rbp+17h] BYREF

  v44[2] = 0LL;
  v43 = 0LL;
  StyleWindow = *((_QWORD *)a1 + 5);
  v46 = 0LL;
  v42 = 0LL;
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
        v8 = *((_QWORD *)a1 + 5);
        if ( *(_QWORD *)(v8 + 136) <= 1uLL )
        {
          v46 = *(RECT *)(v8 + 88);
          EmptyRgn = GreCreateRectRgnIndirect(&v46);
          if ( !EmptyRgn )
            EmptyRgn = 1LL;
        }
        else
        {
          EmptyRgn = CreateEmptyRgn(v6, v5, v7);
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
        v44[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v44;
        v44[1] = a1;
        HMLockObject(a1);
        if ( gihmodUserApiHook < 0 )
        {
          DCEx = (HDC)_GetDCEx(a1, EmptyRgn, 328833LL);
          v12 = DCEx;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
            || (v13 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground) )
          {
            v13 = 0x2000;
          }
          xxxDrawWindowFrame((__int64)a1, DCEx, v13);
          _ReleaseDC(v12);
        }
        xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
        v46 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
        xxxCalcClientRect(a1, &v46, 1);
        SetRectRgnIndirect(ghrgnInv2, &v46);
        if ( EmptyRgn > 1 )
        {
          v14 = GreCombineRgn(EmptyRgn, EmptyRgn, ghrgnInv2, 1LL);
          if ( v14 )
          {
            if ( v14 == 1 )
            {
              GreDeleteObject(EmptyRgn);
              EmptyRgn = 0LL;
LABEL_39:
              v20 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
                v20 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
              v21 = (HDC)_GetDCEx(a1, EmptyRgn, v20);
              GreWatchVisRgnChange(v21);
              if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
              {
                DesktopWindow = GetDesktopWindow((__int64)a1);
                v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v42 = *(_QWORD *)(v23 + 416);
                *(_QWORD *)(v23 + 416) = &v42;
                *((_QWORD *)&v42 + 1) = DesktopWindow;
                if ( DesktopWindow )
                  HMLockObject(DesktopWindow);
                xxxInternalPaintDesktop(DesktopWindow, v21, 1);
                ThreadUnlock1(v25, v24, v26);
              }
              else
              {
                v27 = *((_QWORD *)a1 + 5);
                v46 = *(RECT *)(v27 + 88);
                v28 = v46;
                v29 = *(_DWORD *)(v27 + 92);
                v30 = -*(_DWORD *)(v27 + 88);
                v46.right -= *(_DWORD *)(v27 + 88);
                v31 = -v29;
                v46.bottom += v31;
                v46.top += v31;
                v46.left = v30 + _mm_cvtsi128_si32((__m128i)v28);
                v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 72LL);
                if ( v32 )
                {
                  if ( v32 <= 0x1F )
                    v32 = *(_QWORD *)(gpsi + 8 * v32 + 4688);
                }
                else if ( (*(_BYTE *)(v27 + 18) & 1) != 0 && (*(_BYTE *)(v27 + 21) & 2) != 0 )
                {
                  v32 = *(_QWORD *)(gpsi + 4816LL);
                }
                else
                {
                  v32 = *(_QWORD *)(gpsi + 4736LL);
                }
                ObjectOwner = GreGetObjectOwner(v32, 16LL);
                if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
                {
                  v35 = (HBRUSH)v32;
                }
                else
                {
                  BrushColor = GreGetBrushColor(v32);
                  if ( BrushColor == -1 )
                    BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 4736LL));
                  GreSetSolidBrush(ghbrHungApp, BrushColor);
                  v35 = (HBRUSH)ghbrHungApp;
                }
                FillRect(v21, &v46, v35);
              }
              GreWatchVisRgnChange(v21);
              _ReleaseDC(v21);
              SetOrClrWF(1, (__int64)a1, 0x108u, 1);
              SetOrClrWF(1, (__int64)a1, 0x102u, 1);
              SetOrClrWF(1, (__int64)a1, 0x120u, 1);
              LOBYTE(StyleWindow) = ThreadUnlock1(v37, v36, v38);
              return StyleWindow;
            }
          }
          else
          {
            GreDeleteObject(EmptyRgn);
            EmptyRgn = 1LL;
          }
        }
        v15 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v15 + 31) & 2) == 0 )
        {
          v16 = *(_QWORD *)(v15 + 136);
          v45 = 0LL;
          if ( v16 == 1 || !(unsigned int)GreGetRgnBox(v16, &v46) )
            v46 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
          for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
          {
            v18 = *(_QWORD *)(i + 40);
            if ( (*(_BYTE *)(v18 + 31) & 0x10) != 0 && ((*(_BYTE *)(v18 + 20) & 4) != 0 || !*(_QWORD *)(v18 + 136)) )
            {
              if ( (unsigned int)IntersectRect(&v45, &v46.left, (int *)(v18 + 88)) )
              {
                v40 = (HRGN)EmptyRgn;
                v19 = PhysicalToLogicalInPlaceRgn(i, (__int64)&v40);
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v41);
                xxxInternalInvalidate((struct tagWND *)i, v40, 0x485u);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v41);
                if ( v19 )
                  GreDeleteObject(v40);
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
