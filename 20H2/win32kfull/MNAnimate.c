/*
 * XREFs of MNAnimate @ 0x1C024BE4C
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C00363BC (MNGetPopupFromMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     StopFade @ 0x1C01E77F0 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1C0221614 (MNDestroyAnimationBitmap.c)
 */

int __fastcall MNAnimate(__int64 a1, int a2)
{
  int result; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  int v10; // r14d
  __int64 DPIMetrics; // rax
  unsigned int v12; // edx
  __int64 v13; // rt2
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r9d
  int v17; // r10d
  int v18; // edi
  int v19; // ecx
  int v20; // ebx
  __int64 v21; // rcx

  result = gfade[0];
  if ( (gfade[12] & 0x10) != 0 )
  {
    if ( !a2 )
      return StopFade();
    return result;
  }
  if ( !*(_QWORD *)(a1 + 96) )
    return result;
  v4 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_DWORD *)(a1 + 104);
  if ( !a2 || v4 > 0xA5 || ExGetExclusiveWaiterCount(gpresUser) || (result = ExGetSharedWaiterCount(gpresUser)) != 0 )
  {
    NtGdiBitBltInternal(
      *(HDC *)(a1 + 96),
      0,
      0,
      *(_DWORD *)(a1 + 116),
      *(_DWORD *)(a1 + 120),
      *(HDC *)(a1 + 136),
      0,
      0,
      -2134114272,
      0xFFFFFF,
      0);
LABEL_25:
    MNDestroyAnimationBitmap(a1);
    _ReleaseDC(*(_QWORD *)(a1 + 96));
    v21 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 96) = 0LL;
    return FindTimer(*(_QWORD *)(v21 + 56), 65531LL, 0, 1, 0LL);
  }
  v9 = *(_DWORD *)(a1 + 108);
  v10 = *(_DWORD *)(a1 + 112);
  if ( (*(_DWORD *)(a1 + 8) & 0x180000) != 0 )
  {
    DPIMetrics = GetDPIMetrics(v6, v5, v7, v8);
    v6 = *(unsigned int *)(a1 + 116);
    v12 = (int)(v4 * *(_DWORD *)(DPIMetrics + 8) + 4) >> 31;
    LODWORD(DPIMetrics) = v4 * *(_DWORD *)(DPIMetrics + 8) + 4;
    v5 = v12;
    v13 = __SPAIR64__(v12, DPIMetrics) % 8;
    result = __SPAIR64__(v12, DPIMetrics) / 8;
    LODWORD(v5) = v13;
    *(_DWORD *)(a1 + 108) = result;
    if ( result > (int)v6 )
      *(_DWORD *)(a1 + 108) = v6;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x600000) != 0 )
  {
    v14 = GetDPIMetrics(v6, v5, v7, v8);
    v15 = *(_DWORD *)(a1 + 120);
    result = (int)(v4 * *(_DWORD *)(v14 + 12) + 8) / 16;
    *(_DWORD *)(a1 + 112) = result;
    if ( result > v15 )
      *(_DWORD *)(a1 + 112) = v15;
  }
  v16 = *(_DWORD *)(a1 + 108);
  if ( v16 != v9 || *(_DWORD *)(a1 + 112) != v10 )
  {
    v17 = 0;
    v18 = *(_DWORD *)(a1 + 112);
    if ( ((*(_DWORD *)(a1 + 8) >> 19) & 8) == 0 )
      v17 = *(_DWORD *)(a1 + 120) - v18;
    v19 = 0;
    v20 = (*(_DWORD *)(a1 + 8) >> 19) & 2;
    if ( !v20 )
      v19 = *(_DWORD *)(a1 + 116) - v16;
    NtGdiBitBltInternal(
      *(HDC *)(a1 + 96),
      v20 != 0 ? *(_DWORD *)(a1 + 116) - v16 : 0,
      ((*(_DWORD *)(a1 + 8) >> 19) & 8) != 0 ? *(_DWORD *)(a1 + 120) - v18 : 0,
      v16,
      v18,
      *(HDC *)(a1 + 136),
      v19,
      v17,
      -2134114272,
      0xFFFFFF,
      0);
    result = *(_DWORD *)(a1 + 108);
    if ( *(_DWORD *)(a1 + 116) == result )
    {
      result = *(_DWORD *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 120) == result )
        goto LABEL_25;
    }
  }
  return result;
}
