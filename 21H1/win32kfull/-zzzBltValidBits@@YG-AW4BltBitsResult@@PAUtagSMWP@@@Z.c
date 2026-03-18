/*
 * XREFs of ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2
 * Callers:
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 * Callees:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z @ 0x2D4D2 (-SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     _IsThreadDesktopComposed@4 @ 0x303CC (_IsThreadDesktopComposed@4.c)
 *     _GreRedrawSpriteOverlapPresent@4 @ 0x303E4 (_GreRedrawSpriteOverlapPresent@4.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _PhysicalToLogicalInPlaceRgn@8 @ 0x36FCA (_PhysicalToLogicalInPlaceRgn@8.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?BltValidInit@@YGHPAUtagSMWP@@@Z @ 0x3C58C (-BltValidInit@@YGHPAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YGHPAUHWND__@@@Z @ 0x3D284 (-IsStillWindowC@@YGHPAUHWND__@@@Z.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _DeleteOldRedirectionBitmap@4 @ 0x6E4D2 (_DeleteOldRedirectionBitmap@4.c)
 *     _GetOldRedirectionBitmap@4 @ 0x6E504 (_GetOldRedirectionBitmap@4.c)
 *     _GreHintDCWnd@20 @ 0x83BD0 (_GreHintDCWnd@20.c)
 *     ?bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x8D950 (-bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     _UnionRect@12 @ 0x982E2 (_UnionRect@12.c)
 *     _LogicalToPhysicalInPlaceRgnWorker@12 @ 0xA1A12 (_LogicalToPhysicalInPlaceRgnWorker@12.c)
 *     ?CombineOldNewVis@@YGHPAUHRGN__@@00II@Z @ 0xA1FF0 (-CombineOldNewVis@@YGHPAUHRGN__@@00II@Z.c)
 *     ??1SEMOBJEXORSHARED@@QAE@XZ @ 0xAEE44 (--1SEMOBJEXORSHARED@@QAE@XZ.c)
 *     ?IsWindowOnlyMoving@@YGHPAUtagCVR@@@Z @ 0xBFC6E (-IsWindowOnlyMoving@@YGHPAUtagCVR@@@Z.c)
 *     _UpdateSpriteArea@44 @ 0xC4700 (_UpdateSpriteArea@44.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _FindSpb@4 @ 0x17E390 (_FindSpb@4.c)
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 *     _RestoreSpb@12 @ 0x17E510 (_RestoreSpb@12.c)
 *     _SpbCheck@0 @ 0x17E6A2 (_SpbCheck@0.c)
 *     _SpbCheckRect@12 @ 0x17E755 (_SpbCheckRect@12.c)
 *     _GreClientRgnDone@4 @ 0x1E6ED8 (_GreClientRgnDone@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall zzzBltValidBits(_DWORD *this)
{
  int v1; // ebx
  int v2; // edx
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // edx
  int v11; // ebx
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // esi
  int *v17; // ebx
  int v18; // edi
  int RedirectionBitmap; // eax
  int v20; // ecx
  int v21; // eax
  HRGN v22; // ecx
  int v23; // edi
  int v24; // edx
  int v25; // esi
  int v26; // eax
  int v27; // edi
  int v28; // ecx
  int v29; // eax
  LONG y; // esi
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  int StyleWindow; // eax
  int v36; // esi
  int v37; // edi
  int OldRedirectionBitmap; // ecx
  HDC *v39; // eax
  HRGN v40; // eax
  int v41; // eax
  int v42; // esi
  char v43; // al
  char v44; // al
  _DWORD *v45; // esi
  int v46; // esi
  char v47; // al
  _DWORD *v48; // ecx
  int v49; // eax
  int Spb; // eax
  int v51; // eax
  int v52; // edi
  int v53; // esi
  _DWORD *v54; // esi
  ERECTL *v55; // ecx
  unsigned int v56; // ebx
  int v57; // eax
  int v58; // esi
  void (__stdcall *v59)(_DWORD, struct _RECTL *); // eax
  void (__stdcall *v60)(_DWORD, LONG *); // eax
  int v61; // ebx
  _DWORD *v62; // edi
  int v63; // esi
  int v64; // ecx
  bool v65; // zf
  _DWORD *v66; // ebx
  int v67; // esi
  int v68; // esi
  int v69; // edi
  _DWORD *v70; // esi
  int v72; // [esp-4h] [ebp-A4h]
  struct tagSMWP *v73; // [esp+0h] [ebp-A0h]
  struct tagCVR *v74; // [esp+0h] [ebp-A0h]
  unsigned int v75; // [esp+4h] [ebp-9Ch]
  int v76; // [esp+10h] [ebp-90h]
  struct _POINTL v77; // [esp+14h] [ebp-8Ch] BYREF
  int valid; // [esp+1Ch] [ebp-84h]
  int v79; // [esp+20h] [ebp-80h]
  int v80; // [esp+24h] [ebp-7Ch] BYREF
  _DWORD *v81; // [esp+28h] [ebp-78h]
  _DWORD *v82; // [esp+2Ch] [ebp-74h]
  int v83; // [esp+30h] [ebp-70h]
  int v84; // [esp+34h] [ebp-6Ch]
  BOOL v85; // [esp+38h] [ebp-68h]
  _DWORD *v86; // [esp+3Ch] [ebp-64h]
  int v87; // [esp+40h] [ebp-60h]
  int v88; // [esp+44h] [ebp-5Ch] BYREF
  HRGN v89; // [esp+48h] [ebp-58h]
  struct _RECTL v90; // [esp+4Ch] [ebp-54h] BYREF
  _DWORD v91[4]; // [esp+5Ch] [ebp-44h] BYREF
  struct _RECTL v92; // [esp+6Ch] [ebp-34h] BYREF
  LONG v93; // [esp+7Ch] [ebp-24h] BYREF
  LONG v94; // [esp+80h] [ebp-20h]
  LONG v95; // [esp+84h] [ebp-1Ch]
  LONG v96; // [esp+88h] [ebp-18h]
  struct _RECTL v97; // [esp+8Ch] [ebp-14h] BYREF

  v1 = (int)this;
  v81 = this;
  v93 = 0;
  v80 = 0;
  v84 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  ++_gdwDeferWinEvent;
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  valid = BltValidInit(v73);
  if ( valid )
  {
    v86 = 0;
    v3 = *(_DWORD **)(v1 + 24);
    v4 = *(_DWORD *)(v1 + 16) - 1;
    if ( v4 >= 0 )
    {
      do
      {
        LOBYTE(v2) = 1;
        v5 = HMValidateHandleNoSecure(*v3, v2);
        v6 = v5;
        if ( v5 && *(_DWORD *)(v5 + 56) && IsStillWindowC((HWND)v74) )
        {
          if ( v3[22] == 2
            && ((*(_BYTE *)(*(_DWORD *)(v6 + 20) + 23) & 1) == 0 || *(_DWORD *)(v6 + 56) != _GetDesktopWindow(v6)) )
          {
            v3[22] = 0;
          }
          v7 = v86;
          if ( !v86 )
          {
            v7 = v3;
            v86 = v3;
          }
        }
        else
        {
          *v3 = 0;
          v7 = v86;
          v3[6] = 6159;
        }
        v3 += 32;
        --v4;
      }
      while ( v4 >= 0 );
      if ( v7 )
      {
        v8 = *(_DWORD *)(_HMObjectFromHandle(*v7) + 56);
        v86 = (_DWORD *)v8;
        if ( *(_DWORD *)(_gpDispInfo + 16) )
          SpbCheck();
        v9 = (int)v81;
        zzzChangeStates(v8, (int)v81);
        v85 = 0;
        if ( !IsThreadDesktopComposed(_gptiCurrent) )
        {
          v11 = v81[6];
          v12 = v81[4] - 1;
          v83 = v12;
          if ( v12 >= 0 )
          {
            do
            {
              if ( *(_DWORD *)v11 && (*(_BYTE *)(v11 + 24) & 8) == 0 )
              {
                _HMObjectFromHandle(*(_DWORD *)v11);
                v13 = *(_DWORD *)(v11 + 60);
                if ( v13 || *(_DWORD *)(v11 + 64) )
                {
                  v14 = -*(_DWORD *)(v11 + 64);
                  v97 = *(struct _RECTL *)(v11 + 44);
                  v15 = -v13;
                  v92 = v97;
                  v97.bottom += v14;
                  v97.top += v14;
                  v97.left += v15;
                  v97.right += v15;
                  UnionRect(&v97);
                  v12 = v83;
                  v10 = 1;
                  v85 = 1;
                }
                else
                {
                  v10 = v85;
                }
              }
              v11 += 128;
              v83 = --v12;
            }
            while ( v12 >= 0 );
            v9 = (int)v81;
          }
        }
        v16 = ~(unsigned __int8)(*(_DWORD *)(_gptiCurrent + 264) >> 14) & 2;
        v84 = v16;
        zzzLockDisplayAreaAndInvalidateDCCache(v10 != 0 ? &v93 : 0);
        v83 = 0;
        v17 = *(int **)(v9 + 24);
        v87 = 96;
        v76 = _ghrgnInvalidSum;
        v79 = *(_DWORD *)(v9 + 16) - 1;
        if ( v79 >= 0 )
        {
          v84 = v16;
          do
          {
            --valid;
            if ( !*v17 || (v17[6] & 8) != 0 )
              goto LABEL_139;
            _HMObjectFromHandle(*v17);
            v72 = *v17;
            v84 = v16 | 1;
            v18 = _HMObjectFromHandle(v72);
            v89 = (HRGN)v17[19];
            v88 = v18;
            if ( (*(_BYTE *)(*(_DWORD *)(v18 + 20) + 18) & 8) != 0 )
            {
              RedirectionBitmap = GetRedirectionBitmap(v18);
              v20 = *(_DWORD *)(v18 + 20);
              if ( !RedirectionBitmap && (*(_BYTE *)(v20 + 19) & 0x20) == 0
                || (v21 = *(_DWORD *)(v20 + 144), (v21 & 0x20) == 0) && (v17[30] & 7) == 0 )
              {
LABEL_116:
                *(_DWORD *)(*(_DWORD *)(v18 + 20) + 144) &= ~2u;
                v89 = (HRGN)((unsigned int)v89 | 8);
                goto LABEL_117;
              }
              *(_DWORD *)(v20 + 144) = v21 | 2;
            }
            if ( !SwpCalcVisRgn(v18, _ghrgnVisNew) )
              v89 = (HRGN)((unsigned int)v89 | 1);
            if ( *(_DWORD *)(_gpDispInfo + 16) )
              SpbCheckRect(v18, *(_DWORD *)(v18 + 20) + 52, 1);
            v22 = v89;
            if ( ((unsigned __int8)v89 & 3) == 0 && *(_DWORD *)(*(_DWORD *)(v18 + 20) + 92) != 1 )
            {
              v23 = v17[13];
              v82 = (_DWORD *)v17[11];
              if ( v23 > (int)v82 )
              {
                v24 = v17[14];
                v25 = v17[12];
                if ( v24 > v25 )
                {
                  GreSetRectRgn(_ghrgnSWP1, (char *)v82 - v17[15], v25 - v17[16], v23 - v17[15], v24 - v17[16]);
                  if ( GreCombineRgn(_ghrgnValid, _ghrgnSWP1, v17[20], 1) >= 2u
                    && ((v87 & 0x20) != 0 || GreCombineRgn(_ghrgnValid, _ghrgnValid, _ghrgnValidSum, 4) >= 2u) )
                  {
                    v26 = v17[15];
                    if ( v26 || v17[16] )
                      GreOffsetRgn(_ghrgnValid, v26, v17[16]);
                    v27 = v88;
                    v28 = 0;
                    while ( 1 )
                    {
                      v29 = *(_DWORD *)(v27 + 20);
                      y = *(_DWORD *)(v29 + 92);
                      if ( y == 1 )
                        break;
                      if ( y )
                      {
                        v77.y = *(_DWORD *)(v29 + 92);
                        if ( v28 )
                        {
                          v31 = PhysicalToLogicalInPlaceRgn(v28, &v77.y);
                          y = v77.y;
                          v82 = (_DWORD *)v31;
                        }
                        else
                        {
                          v82 = 0;
                        }
                        v32 = GreCombineRgn(_ghrgnValid, _ghrgnValid, y, 4);
                        v77.y = v32;
                        if ( v82 )
                        {
                          GreDeleteObject(y);
                          v32 = v77.y;
                        }
                        if ( v32 < 2 )
                          break;
                        v28 = v27;
                      }
                      v27 = *(_DWORD *)(v27 + 56);
                      if ( !v27 || (*(_BYTE *)(*(_DWORD *)(v27 + 20) + 23) & 2) != 0 )
                      {
                        v33 = v17[23];
                        if ( v33 && GreCombineRgn(_ghrgnValid, _ghrgnValid, v33, 4) < 2u )
                          break;
                        v34 = GreCombineRgn(_ghrgnValid, _ghrgnValid, _ghrgnVisNew, 1);
                        v22 = v89;
                        if ( v34 > 1 )
                          goto LABEL_69;
                        goto LABEL_68;
                      }
                    }
                  }
                  v22 = v89;
                }
              }
            }
LABEL_68:
            v22 = (HRGN)((unsigned int)v22 | 4);
            v89 = v22;
LABEL_69:
            if ( ((unsigned __int8)v22 & 4) != 0 || !v17[15] && !v17[16] )
              goto LABEL_79;
            v18 = v88;
            StyleWindow = GetStyleWindow(v88, 2568);
            v36 = StyleWindow;
            if ( StyleWindow )
            {
              v37 = GetRedirectionBitmap(StyleWindow);
              if ( v37 )
              {
                if ( v88 == v36 )
                {
                  if ( !IsWindowOnlyMoving(v74) )
                  {
                    OldRedirectionBitmap = GetOldRedirectionBitmap(v36);
                    v39 = (HDC *)_ghdcMem;
                    if ( !OldRedirectionBitmap )
                    {
                      v39 = (HDC *)_ghdcMem2;
                      OldRedirectionBitmap = v37;
                    }
                    UpdateSpriteArea(
                      OldRedirectionBitmap,
                      *v39,
                      _ghdcMem2,
                      _ghrgnValid,
                      (int)(v17 + 11),
                      -v17[15],
                      -v17[16],
                      v17[17],
                      v17[18]);
                  }
                }
                else
                {
                  UpdateSpriteArea(
                    v37,
                    _ghdcMem,
                    _ghdcMem,
                    _ghrgnValid,
                    (int)(v17 + 11),
                    -v17[15],
                    -v17[16],
                    *(_DWORD *)(*(_DWORD *)(v36 + 20) + 52),
                    *(_DWORD *)(*(_DWORD *)(v36 + 20) + 56));
                }
LABEL_79:
                v18 = v88;
                goto LABEL_80;
              }
              v18 = v88;
            }
            if ( (*(_BYTE *)(*(_DWORD *)(v18 + 20) + 18) & 8) == 0 )
            {
              v42 = v80;
              if ( !v80 )
              {
                v42 = *(_DWORD *)(_gpDispInfo + 28);
                v80 = v42;
              }
              GreHintDCWnd(v42, *(HWND *)v18, 0, 0, 0);
              GreSelectVisRgn(v42, _ghrgnValid, 2);
              NtGdiBitBltInternal(
                v42,
                v17[12],
                v17[13] - v17[11],
                v17[14] - v17[12],
                v42,
                v17[11] - v17[15],
                v17[12] - v17[16],
                13369376,
                0,
                1);
              GreHintDCWnd(v42, 0, 0, 0, 0);
            }
LABEL_80:
            v40 = v89;
            if ( *(char *)(*(_DWORD *)(v18 + 20) + 8) >= 0 || ((unsigned __int8)v89 & 2) != 0 )
              goto LABEL_101;
            if ( !CombineOldNewVis(_ghrgnVisNew, (HRGN)4, v89, (unsigned int)v74, v75) )
            {
              v40 = v89;
LABEL_101:
              if ( v17[20] )
              {
                if ( !CombineOldNewVis(_ghrgnVisNew, (HRGN)2, v40, (unsigned int)v74, v75) )
                  goto LABEL_116;
              }
              else
              {
                v45 = (_DWORD *)(v86[5] + 52);
                v91[0] = *v45++;
                v91[1] = *v45++;
                v91[2] = *v45;
                v91[3] = v45[1];
                v18 = v88;
                TransformRectBetweenCoordinateSpaces(v91, v91, v88, v86);
                SetRectRgnIndirect(_ghrgnInvalid, v91);
              }
              goto LABEL_104;
            }
            v41 = RestoreSpb(&v80);
            if ( !v41 )
            {
              if ( ((unsigned __int8)v89 & 1) != 0 )
                goto LABEL_116;
LABEL_96:
              GreCombineRgn(_ghrgnInvalid, _ghrgnInvalid, _ghrgnVisNew, 2);
              v43 = (char)v89;
              goto LABEL_97;
            }
            if ( v41 == 2 && (v87 & 0x20) == 0 )
              GreCombineRgn(_ghrgnValidSum, _ghrgnValidSum, _ghrgnInvalid, 4);
            v43 = (char)v89;
            if ( ((unsigned __int8)v89 & 1) == 0 )
              goto LABEL_96;
LABEL_97:
            if ( (v43 & 0x20) == 0 && GreCombineRgn(_ghrgnValid, _ghrgnValid, _ghrgnInvalid, 4) <= 1u )
            {
              v44 = (unsigned __int8)v89 | 0x20;
              v89 = (HRGN)((unsigned int)v89 | 0x20);
              goto LABEL_105;
            }
LABEL_104:
            v44 = (char)v89;
LABEL_105:
            v46 = v44 & 4;
            if ( (v44 & 4) != 0 )
            {
              v47 = v87;
            }
            else
            {
              if ( (v87 & 0x20) != 0 )
                GreCombineRgn(_ghrgnValidSum, _ghrgnValid, v44 & 4, 5);
              else
                GreCombineRgn(_ghrgnValidSum, _ghrgnValid, _ghrgnValidSum, 2);
              v47 = v87 & 0xDF;
              v87 &= ~0x20u;
            }
            if ( (v47 & 0x20) != 0 )
            {
              if ( v46 )
                goto LABEL_117;
              v48 = (_DWORD *)_ghrgnValid;
            }
            else
            {
              v48 = (_DWORD *)_ghrgnValidSum;
            }
            if ( GreCombineRgn(_ghrgnInvalid, _ghrgnInvalid, *v48, 4) <= 1u )
              goto LABEL_116;
LABEL_117:
            if ( *(char *)(*(_DWORD *)(v18 + 20) + 8) < 0 )
            {
              v49 = v17[6];
              if ( (v49 & 0x40) == 0 && (v49 & 0x87) != 7 )
              {
                Spb = FindSpb(v18);
                FreeSpb(Spb);
              }
            }
            if ( v17[20] )
            {
              GreDeleteObject(v17[20]);
              v17[20] = 0;
            }
            if ( (*(_BYTE *)(*(_DWORD *)(v18 + 20) + 13) & 1) == 0 && (v17[6] & 0x40) != 0 )
              ++v83;
            if ( ((unsigned __int8)v89 & 8) != 0 )
              goto LABEL_138;
            if ( ((unsigned __int8)v89 & 5) == 4 )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v97.right);
              xxxInternalInvalidate(v18, 1, 1157);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v97.right);
            }
            v88 = _ghrgnInvalid;
            v51 = LogicalToPhysicalInPlaceRgnWorker(v18, &v88, 0);
            v52 = v51;
            if ( (v87 & 0x40) == 0 )
            {
              v53 = v88;
              GreCombineRgn(_ghrgnInvalidSum, v88, _ghrgnInvalidSum, 2);
LABEL_135:
              if ( v52 )
                GreDeleteObject(v53);
              goto LABEL_137;
            }
            if ( valid || v51 )
            {
              v53 = v88;
              GreCombineRgn(_ghrgnInvalidSum, v88, 0, 5);
              goto LABEL_135;
            }
            v76 = _ghrgnInvalid;
LABEL_137:
            v87 &= ~0x40u;
LABEL_138:
            v16 = v84;
LABEL_139:
            v17 += 32;
            --v79;
          }
          while ( v79 >= 0 );
        }
        if ( !v85 )
          goto LABEL_157;
        v97.left = v93;
        v54 = *(_DWORD **)(_gpDispInfo + 20);
        v97.top = v94;
        v97.right = v95;
        v82 = v54;
        v97.bottom = v96;
        ERECTL::vOrder((ERECTL *)&v97);
        if ( ERECTL::bWrapped(v55) )
          goto LABEL_157;
        if ( v54[26] )
        {
          v85 = GreIsSemaphoreOwnedByCurrentThread(_ghsemSprite) != 0;
          v56 = 0;
          if ( v54[26] )
          {
            do
            {
              v57 = *(_DWORD *)(v54[27] + 4 * v56);
              v92 = v97;
              v79 = v57;
              v58 = v57;
              v77 = *(struct _POINTL *)(v57 + 1836);
              ERECTL::bOffsetSubtract((ERECTL *)&v92, &v77, 0);
              if ( bIntersect(&v92, (const struct _RECTL *)(v58 + 84), &v90) )
              {
                v59 = *(void (__stdcall **)(_DWORD, struct _RECTL *))(v58 + 2308);
                if ( v59 )
                  v59(*(_DWORD *)(v58 + 1108), &v90);
                if ( v85 )
                  SEMOBJEXORSHARED::~SEMOBJEXORSHARED((SEMOBJEXORSHARED *)(v58 + 152));
              }
              v54 = v82;
              ++v56;
            }
            while ( v56 < v82[26] );
          }
          if ( !v85 )
            goto LABEL_157;
        }
        else
        {
          v60 = (void (__stdcall *)(_DWORD, LONG *))v54[577];
          if ( v60 )
            v60(v54[277], &v93);
          if ( !GreIsSemaphoreOwnedByCurrentThread(_ghsemSprite) )
            goto LABEL_157;
          SEMOBJEXORSHARED::~SEMOBJEXORSHARED((SEMOBJEXORSHARED *)(v54 + 38));
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", _ghsemSprite);
        GreReleaseSemaphoreInternal(_ghsemSprite);
LABEL_157:
        v61 = (int)v81;
        v62 = (_DWORD *)v81[6];
        v63 = v81[4];
        while ( --v63 >= 0 )
        {
          if ( *v62 )
          {
            v64 = _HMObjectFromHandle(*v62);
            if ( (*(_BYTE *)(*(_DWORD *)(v64 + 20) + 18) & 8) != 0 )
              DeleteOldRedirectionBitmap(v64);
          }
          v62 += 32;
        }
        if ( (v87 & 0x40) == 0 )
        {
          v65 = v83 == *(_DWORD *)(v61 + 16);
          v66 = v86;
          if ( !v65 || v66 == (_DWORD *)_GetDesktopWindow(v86) )
            v67 = 133;
          else
            v67 = 69;
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v97.right);
          xxxInternalInvalidate(v66, v76, v67);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v97.right);
        }
        if ( gcountPWO )
          GreClientRgnDone();
        GreRedrawSpriteOverlapPresent(*(_DWORD **)(_gpDispInfo + 20));
        v68 = v80;
        if ( v80 )
        {
          GreSelectVisRgn(v80, 0, 1);
          GreGetBounds(v68, 0, 0);
        }
        goto LABEL_179;
      }
    }
    v1 = (int)v81;
  }
  v69 = *(_DWORD *)(v1 + 16) - 1;
  if ( v69 >= 0 )
  {
    v70 = (_DWORD *)(*(_DWORD *)(v1 + 24) + 80);
    do
    {
      if ( *v70 )
      {
        GreDeleteObject(*v70);
        *v70 = 0;
      }
      v70 += 32;
      --v69;
    }
    while ( v69 >= 0 );
  }
LABEL_179:
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  zzzEndDeferWinEventNotify();
  return v84;
}
