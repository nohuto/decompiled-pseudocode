/*
 * XREFs of _xxxInternalDoSyncPaint@8 @ 0x734E0
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxDoSyncPaint@8 @ 0x7348A (_xxxDoSyncPaint@8.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z @ 0x2B0B4 (-InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z.c)
 *     _ClearHungFlag@8 @ 0x715BC (_ClearHungFlag@8.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     ?GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z @ 0x73A88 (-GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z.c)
 *     _xxxSendEraseBkgnd@12 @ 0x73B52 (_xxxSendEraseBkgnd@12.c)
 *     ?xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x73CC0 (-xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall xxxInternalDoSyncPaint(int a1, struct tagBWL *a2)
{
  int v2; // esi
  int v3; // ecx
  unsigned __int8 v4; // al
  int v5; // ebx
  HRGN NCUpdateRgn; // edi
  int v7; // eax
  struct tagBWL *result; // eax
  _DWORD *v9; // esi
  struct tagBWL *v10; // ebx
  _DWORD *v11; // eax
  unsigned int v12; // esi
  char *v13; // ebx
  PKTHREAD CurrentThread; // edi
  int v15; // edi
  unsigned int v16; // esi
  int v17; // esi
  struct tagBWL **v18; // edx
  struct tagBWL **v19; // ecx
  struct tagBWL *v20; // [esp-4h] [ebp-2Ch]
  struct tagWND *v21; // [esp+0h] [ebp-28h]
  HRGN v22; // [esp+4h] [ebp-24h]
  struct tagBWL *v24; // [esp+18h] [ebp-10h]
  int v25; // [esp+1Ch] [ebp-Ch] BYREF
  int v26; // [esp+20h] [ebp-8h]
  int v27; // [esp+24h] [ebp-4h]

  v2 = a1;
  if ( a1 )
  {
    while ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 19) & 2) == 0 )
    {
      a1 = *(_DWORD *)(a1 + 56);
      if ( !a1 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    SetOrClrWF(0, v2, 0x240u, 1);
    v3 = *(_DWORD *)(v2 + 20);
    v4 = *(_BYTE *)(v3 + 9);
    v5 = (v4 >> 2) & 2;
    if ( (v4 & 2) != 0 )
      v5 |= 1u;
    if ( v5 )
    {
      if ( (*(_BYTE *)(v3 + 23) & 0x10) != 0 )
      {
        if ( !*(_DWORD *)(v3 + 92) )
        {
          SetOrClrWF(0, v2, 0x102u, 1);
          SetOrClrWF(0, v2, 0x104u, 1);
          LOBYTE(v5) = v5 & 0xFE;
        }
        if ( *(_DWORD *)(v2 + 8) == _gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn(v21, (int)v22);
          if ( (v5 & 2) != 0 && (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 9) & 8) != 0 )
            xxxSendNCPaint(v21, v22);
          if ( (v5 & 1) != 0 )
          {
            v7 = *(_DWORD *)(v2 + 20);
            if ( (*(_BYTE *)(v7 + 9) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(NCUpdateRgn);
              NCUpdateRgn = GetNCUpdateRgn(v21, (int)v22);
              v7 = *(_DWORD *)(v2 + 20);
            }
            if ( (*(_BYTE *)(v7 + 9) & 2) != 0 )
            {
              SetOrClrWF(0, v2, 0x102u, 1);
              SetOrClrWF(0, v2, 0x104u, 1);
              xxxSendEraseBkgnd(NCUpdateRgn);
            }
            ClearHungFlag((struct tagVWPL **)v2, 0x308u);
          }
          DeleteMaybeSpecialRgn(NCUpdateRgn);
        }
        else if ( (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 23) & 0xC0) != 0x40
               && v2 != *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12)
               && IsHungWindow(v2)
               && (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 11) & 8) != 0 )
        {
          ClearHungFlag((struct tagVWPL **)v2, 0x308u);
          xxxRedrawHungWindow(v2, 0);
        }
      }
      else
      {
        SetOrClrWF(0, v2, 0x108u, 1);
        SetOrClrWF(0, v2, 0x102u, 1);
        SetOrClrWF(0, v2, 0x680u, 1);
        SetOrClrWF(0, v2, 0x104u, 1);
        ClearHungFlag((struct tagVWPL **)v2, 0x308u);
      }
    }
  }
  result = a2;
  if ( ((unsigned __int8)a2 & 0x20) != 0
    || ((unsigned __int8)a2 & 4) != 0 && (result = *(struct tagBWL **)(v2 + 20), (*((_BYTE *)result + 23) & 2) != 0) )
  {
    v9 = *(_DWORD **)(v2 + 60);
    v25 = 0;
    v26 = 0;
    v27 = 0;
    result = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0;
    }
    else
    {
      result = (struct tagBWL *)Win32AllocPool(148, 1819767637);
      if ( !result )
        return result;
      *((_DWORD *)result + 2) = (char *)result + 140;
    }
    *((_DWORD *)result + 3) = 0;
    *((_DWORD *)result + 1) = (char *)result + 16;
    v10 = InternalBuildHwndList(v9, result, (struct tagBWL *)2, v21, (unsigned int)v22);
    v24 = v10;
    v11 = (_DWORD *)*((_DWORD *)v10 + 1);
    if ( (unsigned int)v11 >= *((_DWORD *)v10 + 2) )
      return (struct tagBWL *)Win32FreePool(v10);
    *v11 = 1;
    *((_DWORD *)v10 + 3) = _gptiCurrent;
    *(_DWORD *)v10 = _gpbwlList;
    _gpbwlList = v10;
    v12 = *((_DWORD *)v10 + 4);
    result = (struct tagBWL *)_gptiCurrent;
    if ( v12 != 1 )
    {
      v13 = (char *)v10 + 16;
      do
      {
        if ( v12 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !IsThreadCrossSessionAttached() )
            PsGetThreadWin32Thread(CurrentThread);
          result = (struct tagBWL *)_gpsi;
          if ( (unsigned int)(unsigned __int16)v12 < *(_DWORD *)(_gpsi + 4) )
          {
            v15 = _gSharedInfo[1] + (unsigned __int16)v12 * _gSharedInfo[2];
            result = (struct tagBWL *)HMPkheFromPhe(v15);
            v16 = HIWORD(v12);
            if ( ((_WORD)v16 == *(_WORD *)(v15 + 14) || !(_WORD)v16 || (_WORD)v16 == 0xFFFF)
              && (*(_BYTE *)(v15 + 13) & 1) == 0
              && *(_BYTE *)(v15 + 12) == 1 )
            {
              v17 = *(_DWORD *)result;
              if ( *(_DWORD *)result )
              {
                result = *(struct tagBWL **)(v17 + 20);
                if ( (*((_BYTE *)result + 23) & 0x40) == 0 || _gptiCurrent == *(_DWORD *)(v17 + 8) )
                {
                  v25 = *(_DWORD *)(_gptiCurrent + 228);
                  *(_DWORD *)(_gptiCurrent + 228) = &v25;
                  v26 = v17;
                  HMLockObject(v17);
                  xxxInternalDoSyncPaint(v17, a2);
                  result = (struct tagBWL *)ThreadUnlock1();
                }
              }
            }
          }
        }
        v12 = *((_DWORD *)v13 + 1);
        v13 += 4;
      }
      while ( v12 != 1 );
      v10 = v24;
    }
    v18 = (struct tagBWL **)_gpbwlList;
    v19 = (struct tagBWL **)_gpbwlList;
    if ( _gpbwlList )
    {
      while ( v19 != (struct tagBWL **)v10 )
      {
        result = *v19;
        v18 = v19;
        v19 = (struct tagBWL **)result;
        if ( !result )
          return result;
      }
      result = *(struct tagBWL **)v10;
      *v18 = *(struct tagBWL **)v10;
      if ( !pbwlCache )
      {
        pbwlCache = v10;
        return result;
      }
      if ( (int)((*((_DWORD *)v10 + 2) - (_DWORD)v10 - 16) & 0xFFFFFFFC) > (int)((*((_DWORD *)pbwlCache + 2)
                                                                                - (_DWORD)pbwlCache
                                                                                - 16) & 0xFFFFFFFC) )
      {
        v20 = pbwlCache;
        pbwlCache = v10;
        return (struct tagBWL *)Win32FreePool(v20);
      }
      return (struct tagBWL *)Win32FreePool(v10);
    }
  }
  return result;
}
