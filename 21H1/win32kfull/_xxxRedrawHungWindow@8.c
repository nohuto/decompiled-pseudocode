/*
 * XREFs of _xxxRedrawHungWindow@8 @ 0xCC8B8
 * Callers:
 *     _xxxHungAppDemon@16 @ 0x7336E (_xxxHungAppDemon@16.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 *     ?xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x17640C (-xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _PhysicalToLogicalInPlaceRgn@8 @ 0x36FCA (_PhysicalToLogicalInPlaceRgn@8.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 *     _ProcessHungWindow@4 @ 0xC2576 (_ProcessHungWindow@4.c)
 *     _xxxInternalPaintDesktop@12 @ 0xE7CB0 (_xxxInternalPaintDesktop@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreWatchVisRgnChange@8 @ 0x1FDF85 (_GreWatchVisRgnChange@8.c)
 */

int __fastcall xxxRedrawHungWindow(int a1, int a2)
{
  _DWORD *v2; // esi
  int result; // eax
  _DWORD *v4; // eax
  unsigned int EmptyRgn; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int DCEx; // edi
  __int16 v9; // ax
  int *v10; // esi
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int *v15; // esi
  int v16; // edi
  int v17; // eax
  int v18; // esi
  char v19; // al
  int v20; // ecx
  HDC v21; // esi
  int DesktopWindow; // edi
  PKTHREAD v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // esi
  HANDLE ObjectOwner; // edi
  int BrushColor; // eax
  HDC v33; // [esp-4h] [ebp-5Ch]
  const RECT *v34; // [esp+0h] [ebp-58h]
  HBRUSH v35; // [esp+4h] [ebp-54h]
  HDC v37; // [esp+Ch] [ebp-4Ch]
  _DWORD v39[3]; // [esp+14h] [ebp-44h] BYREF
  int v40; // [esp+20h] [ebp-38h] BYREF
  int v41; // [esp+24h] [ebp-34h]
  int v42; // [esp+28h] [ebp-30h]
  _BYTE v43[8]; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD v44[4]; // [esp+34h] [ebp-24h] BYREF
  int v45; // [esp+44h] [ebp-14h] BYREF
  int v46; // [esp+48h] [ebp-10h]
  int v47; // [esp+4Ch] [ebp-Ch]
  int v48; // [esp+50h] [ebp-8h]

  v39[2] = 0;
  v45 = 0;
  v2 = (_DWORD *)a1;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  result = *(_DWORD *)(a1 + 20);
  if ( *(_DWORD *)(result + 92) && (*(_BYTE *)(result + 23) & 0x10) != 0 )
  {
    if ( !a2 || IsHungWindow(a1) )
      return ProcessHungWindow(v2);
    result = GetStyleWindow((int)v2, 2568);
    if ( !result )
    {
      v4 = (_DWORD *)v2[5];
      if ( v4[23] <= 1u )
      {
        v45 = v4[13];
        v46 = v4[14];
        v47 = v4[15];
        v48 = v4[16];
        v2 = (_DWORD *)a1;
        EmptyRgn = GreCreateRectRgnIndirect(&v45);
        if ( !EmptyRgn )
          goto LABEL_23;
      }
      else
      {
        EmptyRgn = CreateEmptyRgn();
        if ( !EmptyRgn )
        {
          EmptyRgn = 1;
          goto LABEL_11;
        }
        if ( !GreCombineRgn(EmptyRgn, *(_DWORD *)(v2[5] + 92), 0, 5) )
        {
          GreDeleteObject(EmptyRgn);
LABEL_23:
          EmptyRgn = 1;
        }
      }
      if ( EmptyRgn != 1 && GreCombineRgn(EmptyRgn, EmptyRgn, a2, 1) == 1 )
        return GreDeleteObject(EmptyRgn);
LABEL_11:
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v39[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v39;
      v39[1] = v2;
      HMLockObject(v2);
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = _GetDCEx(v2, EmptyRgn, sub_50481);
        if ( (*(_BYTE *)(v2[5] + 8) & 0x40) == 0 || (v9 = 8193, *(_DWORD *)(v2[2] + 236) != _gpqForeground) )
          v9 = 0x2000;
        xxxDrawWindowFrame((struct tagVWPL **)v2, DCEx, v9);
        _ReleaseDC(DCEx);
      }
      xxxInternalInvalidate((int)v2, EmptyRgn, 1157);
      v10 = (int *)(v2[5] + 52);
      v45 = *v10++;
      v46 = *v10++;
      v47 = *v10;
      v48 = v10[1];
      v11 = a1;
      xxxCalcClientRect((struct tagEVENTHOOK *)a1, &v45, 1);
      SetRectRgnIndirect(_ghrgnInv2, &v45);
      if ( EmptyRgn > 1 )
      {
        v12 = GreCombineRgn(EmptyRgn, EmptyRgn, _ghrgnInv2, 1);
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            GreDeleteObject(EmptyRgn);
            EmptyRgn = 0;
LABEL_41:
            v19 = *(_BYTE *)(*(_DWORD *)(v11 + 20) + 23);
            v20 = (4 * (v19 & 4)) | 0x83;
            if ( (v19 & 2) != 0 )
              v20 = (4 * (v19 & 4)) | 0x8B;
            v21 = (HDC)_GetDCEx(a1, EmptyRgn, v20);
            v37 = v21;
            GreWatchVisRgnChange(v21);
            if ( a1 == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 4) + 92) )
            {
              DesktopWindow = _GetDesktopWindow((_DWORD *)a1);
              v23 = KeGetCurrentThread();
              v24 = W32GetThreadWin32Thread(v23);
              v40 = *(_DWORD *)(v24 + 228);
              *(_DWORD *)(v24 + 228) = &v40;
              v41 = DesktopWindow;
              if ( DesktopWindow )
                HMLockObject(DesktopWindow);
              xxxInternalPaintDesktop(1);
              ThreadUnlock1();
            }
            else
            {
              v25 = *(_DWORD *)(a1 + 20);
              v45 = *(_DWORD *)(v25 + 52);
              v46 = *(_DWORD *)(v25 + 56);
              v47 = *(_DWORD *)(v25 + 60);
              v48 = *(_DWORD *)(v25 + 64);
              v26 = *(_DWORD *)(v25 + 56);
              v27 = -*(_DWORD *)(v25 + 52);
              v45 -= *(_DWORD *)(v25 + 52);
              v28 = -v26;
              v47 += v27;
              v29 = *(_DWORD *)(a1 + 76);
              v48 += v28;
              v46 += v28;
              v30 = *(_DWORD *)(*(_DWORD *)(v29 + 4) + 44);
              if ( v30 )
              {
                if ( v30 <= 0x1F )
                  v30 = *(_DWORD *)(_gpsi + 4 * v30 + 4288);
              }
              else if ( (*(_BYTE *)(v25 + 10) & 1) != 0 && (*(_BYTE *)(v25 + 13) & 2) != 0 )
              {
                v30 = *(_DWORD *)(_gpsi + 4352);
              }
              else
              {
                v30 = *(_DWORD *)(_gpsi + 4312);
              }
              ObjectOwner = (HANDLE)GreGetObjectOwner(v30, 16);
              if ( !ObjectOwner || ObjectOwner == PsGetCurrentProcessId() )
              {
                v33 = (HDC)v30;
              }
              else
              {
                BrushColor = GreGetBrushColor(v30);
                if ( BrushColor == -1 )
                  BrushColor = GreGetBrushColor(*(_DWORD *)(_gpsi + 4312));
                GreSetSolidBrush(_ghbrHungApp, BrushColor);
                v33 = (HDC)_ghbrHungApp;
              }
              v21 = v37;
              FillRect(v33, v34, v35);
            }
            GreWatchVisRgnChange(v21);
            _ReleaseDC(v21);
            SetOrClrWF(1, a1, 0x108u, 1);
            SetOrClrWF(1, a1, 0x102u, 1);
            SetOrClrWF(1, a1, 0x120u, 1);
            return ThreadUnlock1();
          }
        }
        else
        {
          GreDeleteObject(EmptyRgn);
          EmptyRgn = 1;
        }
      }
      v13 = *(_DWORD *)(a1 + 20);
      if ( (*(_BYTE *)(v13 + 23) & 2) == 0 )
      {
        memset(v44, 0, sizeof(v44));
        v14 = *(_DWORD *)(v13 + 92);
        if ( v14 == 1 || !GreGetRgnBox(v14, &v45) )
        {
          v15 = (int *)(*(_DWORD *)(a1 + 20) + 52);
          v45 = *v15++;
          v46 = *v15++;
          v47 = *v15;
          v48 = v15[1];
          v11 = a1;
        }
        v16 = *(_DWORD *)(v11 + 60);
        if ( v16 )
        {
          do
          {
            v17 = *(_DWORD *)(v16 + 20);
            if ( (*(_BYTE *)(v17 + 23) & 0x10) != 0 && ((*(_BYTE *)(v17 + 12) & 4) != 0 || !*(_DWORD *)(v17 + 92)) )
            {
              if ( IntersectRect(v44, &v45, (int *)(v17 + 52)) )
              {
                v18 = PhysicalToLogicalInPlaceRgn();
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v43);
                xxxInternalInvalidate(v16, EmptyRgn, 1157);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v43);
                if ( v18 )
                  GreDeleteObject(EmptyRgn);
              }
            }
            v16 = *(_DWORD *)(v16 + 48);
          }
          while ( v16 );
          v11 = a1;
        }
      }
      goto LABEL_41;
    }
  }
  return result;
}
