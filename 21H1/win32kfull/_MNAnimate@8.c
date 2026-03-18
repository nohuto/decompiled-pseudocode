/*
 * XREFs of _MNAnimate@8 @ 0x1A9493
 * Callers:
 *     _MNGetPopupFromMenu@8 @ 0x1EC0C (_MNGetPopupFromMenu@8.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 *     _MNDestroyAnimationBitmap@4 @ 0x184536 (_MNDestroyAnimationBitmap@4.c)
 */

HDEV __fastcall MNAnimate(int *a1, int a2)
{
  HDEV result; // eax
  int *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // ebx
  unsigned int v7; // edx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  struct ECLIPOBJ *v16; // edi
  unsigned int v17; // edx
  int v18; // esi
  char v19; // bl
  int v20; // edx
  struct XDCOBJ *v21; // edx
  int v22; // ecx
  struct ECLIPOBJ *v23; // [esp-10h] [ebp-30h]
  HDEV v25; // [esp+14h] [ebp-Ch]
  int v26; // [esp+18h] [ebp-8h]

  result = _gfade[0];
  v3 = a1;
  if ( ((int)_gfade[9] & 0x10) != 0 )
  {
    if ( !a2 )
      return StopFade();
    return result;
  }
  if ( !a1[17] )
    return result;
  v4 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v6 = MEMORY[0xFFDF0324];
    v7 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v6 = MEMORY[0xFFDF0324];
        v7 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v3 = a1;
      v4 = MEMORY[0xFFDF0004];
    }
    v5 = v4 * (v6 << 8) + (((unsigned int)v4 * (unsigned __int64)v7) >> 24);
  }
  else
  {
    v5 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v8 = v5 - v3[18];
  if ( !a2 || v8 > 0xA5 || ExGetExclusiveWaiterCount(_gpresUser) || ExGetSharedWaiterCount(_gpresUser) )
  {
    NtGdiBitBltInternal((HDC)v3[17], 0, 0, v3[21], v3[22], (HDC)v3[24], 0, 0, -2134114272, 0xFFFFFF, 0);
LABEL_33:
    MNDestroyAnimationBitmap(v3);
    _ReleaseDC(v3[17]);
    v22 = *v3;
    v3[17] = 0;
    return (HDEV)FindTimer(*(_DWORD *)(v22 + 28), 65531, 0, 1, 0);
  }
  v25 = (HDEV)v3[19];
  v26 = v3[20];
  if ( (v3[1] & 0x180000) != 0 )
  {
    v9 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 ? GetProcessDpiMetrics() : Get96DpiMetrics();
    v10 = (int)(v8 * *(_DWORD *)(v9 + 4) + 4) / 8;
    v11 = v3[21];
    v3[19] = v10;
    if ( v10 > v11 )
      v3[19] = v11;
  }
  if ( (v3[1] & 0x600000) != 0 )
  {
    v12 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 ? GetProcessDpiMetrics() : Get96DpiMetrics();
    v13 = (int)(v8 * *(_DWORD *)(v12 + 8) + 8) / 16;
    v14 = v3[22];
    v3[20] = v13;
    if ( v13 > v14 )
      v3[20] = v14;
  }
  result = (HDEV)v3[19];
  if ( result != v25 || v3[20] != v26 )
  {
    v15 = v3[20];
    v16 = (struct ECLIPOBJ *)(v3[21] - (_DWORD)result);
    v17 = (unsigned int)v3[1] >> 19;
    v18 = v3[22] - v15;
    v19 = v17;
    v20 = v17 & 8;
    v23 = v20 == 0 ? (struct ECLIPOBJ *)v18 : 0;
    v21 = v20 != 0 ? (struct XDCOBJ *)v18 : 0;
    v3 = a1;
    NtGdiBitBltInternal(
      (HDC)a1[17],
      (v19 & 2) != 0 ? (unsigned int)v16 : 0,
      v21,
      (int)result,
      v15,
      (HDC)a1[24],
      (v19 & 2) == 0 ? v16 : 0,
      v23,
      -2134114272,
      0xFFFFFF,
      0);
    result = (HDEV)a1[21];
    if ( result == (HDEV)a1[19] )
    {
      result = (HDEV)a1[22];
      if ( result == (HDEV)a1[20] )
        goto LABEL_33;
    }
  }
  return result;
}
