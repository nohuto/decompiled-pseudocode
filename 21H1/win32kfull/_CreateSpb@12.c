/*
 * XREFs of _CreateSpb@12 @ 0xC549A
 * Callers:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _SubtractRect@12 @ 0x9A66A (_SubtractRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z @ 0x17E2A7 (-SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z.c)
 *     _SpbCheck@0 @ 0x17E6A2 (_SpbCheck@0.c)
 *     _GreSaveScreenBits@16 @ 0x1FD449 (_GreSaveScreenBits@16.c)
 */

int __fastcall CreateSpb(_DWORD *a1, int a2, HDC a3)
{
  int result; // eax
  int v6; // edi
  _DWORD *i; // edi
  int v8; // ebx
  int v9; // eax
  _DWORD *v10; // esi
  int *v11; // esi
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // edi
  _DWORD **v15; // esi
  struct ECLIPOBJ **v16; // esi
  int v17; // edi
  int v18; // eax
  int CompatibleBitmapInternal; // eax
  DC *v20; // esi
  int v21; // ecx
  int v22; // ecx
  struct tagWND *v23; // [esp-8h] [ebp-54h]
  int v24; // [esp-4h] [ebp-50h]
  int v25; // [esp+10h] [ebp-3Ch]
  int v27; // [esp+18h] [ebp-34h]
  LONG v29; // [esp+1Ch] [ebp-30h]
  int v30; // [esp+20h] [ebp-2Ch]
  int v31; // [esp+20h] [ebp-2Ch]
  int v32; // [esp+20h] [ebp-2Ch]
  _DWORD v33[4]; // [esp+24h] [ebp-28h] BYREF
  int v34; // [esp+34h] [ebp-18h] BYREF
  int v35; // [esp+38h] [ebp-14h]
  int v36; // [esp+3Ch] [ebp-10h]
  int v37; // [esp+40h] [ebp-Ch]

  result = IsWindowDesktopComposed(a1);
  if ( result && a2 != 2 )
    return result;
  v30 = a2 & 2;
  if ( (a2 & 2) == 0 )
  {
    v6 = a1[14];
    if ( v6 )
    {
      result = _GetDesktopWindow(a1);
      if ( v6 != result )
        return result;
    }
  }
  if ( *(_DWORD *)(_gpDispInfo + 16) )
  {
    SpbCheck();
  }
  else
  {
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    for ( i = *(_DWORD **)(_gpDispInfo + 12); i; i = (_DWORD *)*i )
      GreGetBounds(i[1], 0, 1);
    GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  }
  result = Win32AllocPoolWithQuota(44, 1651733333);
  v8 = result;
  if ( !result )
    return result;
  v9 = Win32AllocPoolNonPaged(48, 1651733333);
  *(_DWORD *)(v8 + 40) = v9;
  if ( !v9 )
    return Win32FreePool(v8);
  *(_DWORD *)(v8 + 4) = 0;
  v10 = (_DWORD *)(a1[5] + 52);
  *(_DWORD *)(v8 + 12) = *v10++;
  *(_DWORD *)(v8 + 16) = *v10++;
  *(_DWORD *)(v8 + 20) = *v10;
  *(_DWORD *)(v8 + 24) = v10[1];
  v11 = (int *)(*_gpDispInfo + 12);
  v34 = *v11++;
  v35 = *v11++;
  v36 = *v11;
  v37 = v11[1];
  if ( !IntersectRect((_DWORD *)(v8 + 12), (int *)(v8 + 12), &v34) )
  {
LABEL_38:
    Win32FreePool(*(_DWORD *)(v8 + 40));
    return Win32FreePool(v8);
  }
  v14 = a1;
  v15 = (_DWORD **)(v8 + 4);
  *(_DWORD *)(v8 + 28) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  v24 = (int)a1;
  v23 = (struct tagWND *)(v8 + 4);
  *(_DWORD *)(v8 + 32) = a2;
  HMAssignmentLock(v13, v12);
  if ( !v30 )
  {
    v33[0] = *(_DWORD *)(v8 + 12);
    v33[1] = *(_DWORD *)(v8 + 16);
    v33[2] = *(_DWORD *)(v8 + 20);
    v33[3] = *(_DWORD *)(v8 + 24);
    v16 = (struct ECLIPOBJ **)(v8 + 12);
    if ( *(_DWORD *)(_gpsi + 1820)
      || ((v31 = _MonitorFromRect((int *)(v8 + 12), 1, 0),
           v34 = 0,
           v35 = 0,
           v36 = 0,
           v37 = 0,
           !SubtractRect(&v34, (int *)(v8 + 12), (int *)(*(_DWORD *)(v31 + 20) + 16)))
       || !GreRectInRegion(*(_DWORD *)(_gpDispInfo + 64), &v34))
      && IntersectRect((_DWORD *)(v8 + 12), (int *)(v8 + 12), (int *)(*(_DWORD *)(v31 + 20) + 16))
      && v31 == *(_DWORD *)(_gpDispInfo + 52) )
    {
      v17 = (int)a1;
      if ( !*(_DWORD *)(a1[5] + 108) )
      {
        v18 = GreSaveScreenBits(0, v33);
        *(_DWORD *)(v8 + 36) = v18;
        if ( v18 )
        {
          *(_DWORD *)(v8 + 32) |= 1u;
LABEL_29:
          SetOrClrWF(1, v17, 0x80u, 1);
          v14 = *(_DWORD **)(v17 + 48);
          v15 = (_DWORD **)(v8 + 4);
          goto LABEL_30;
        }
      }
      v29 = (unsigned int)*v16 & 7;
      v27 = *(_DWORD *)(v8 + 20) - (_DWORD)*v16;
      v32 = *(_DWORD *)(v8 + 24) - *(_DWORD *)(v8 + 16);
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v29 + v27, v32, 0, 0, 0);
      *(_DWORD *)(v8 + 8) = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v25 = GreSelectBitmap(_ghdcMem, CompatibleBitmapInternal);
        if ( v25 )
        {
          v20 = NtGdiBitBltInternal(
                  _ghdcMem,
                  v29,
                  0,
                  v27,
                  v32,
                  a3,
                  *v16,
                  *(struct ECLIPOBJ **)(v8 + 16),
                  13369344,
                  0,
                  0);
          GreSelectBitmap(_ghdcMem, v25);
          if ( v20 )
          {
            GreSetBitmapOwner(*(_DWORD *)(v8 + 8), 0);
            goto LABEL_29;
          }
        }
      }
    }
    if ( *(_DWORD *)(v8 + 8) )
      GreDeleteObject(*(_DWORD *)(v8 + 8));
    HMAssignmentUnlock(v8 + 4);
    goto LABEL_38;
  }
LABEL_30:
  *(_DWORD *)v8 = *(_DWORD *)(_gpDispInfo + 16);
  *(_DWORD *)(_gpDispInfo + 16) = v8;
  SetRectRgnIndirect(_ghrgnSPB2, v8 + 12);
  v21 = *(_DWORD *)((*v15)[5] + 108);
  if ( !v21 || (result = GreCombineRgn(_ghrgnSPB2, _ghrgnSPB2, v21, 1)) != 0 )
  {
    result = IsDesktopWindow(*v15);
    if ( result || (result = *(_DWORD *)(v22 + 20), (*(_BYTE *)(result + 18) & 8) == 0) )
    {
      if ( !*(_DWORD *)(v22 + 56) || (result = SpbTransfer(0, v23, v24)) != 0 )
      {
        while ( v14 )
        {
          result = SpbTransfer((struct tagSPB *)1, v23, v24);
          if ( !result )
            break;
          v14 = (_DWORD *)v14[12];
        }
      }
    }
    else
    {
      return SpbTransfer((struct tagSPB *)1, v23, v24);
    }
  }
  return result;
}
