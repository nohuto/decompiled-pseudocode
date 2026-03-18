/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246ECC
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C014DC4C (xxxDrawCaptionTemp.c)
 * Callees:
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00FE72C (PrepareHDCBITSBitmap.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0246D38 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, char a5)
{
  int v6; // ebp
  unsigned int DpiForSystem; // eax
  __int64 v11; // r8
  __int64 i; // rcx
  int v13; // edi
  struct tagCURSOR **v14; // rax
  _QWORD *v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int128 *v20; // rcx
  __int128 v21; // xmm1
  unsigned int v22; // edi
  __int64 v23; // rcx
  HDC v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rcx
  char *OemBitmapInfoForDpi; // rax
  LONG left; // edi
  LONG top; // esi
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v34; // rcx
  unsigned int v35; // eax
  int v36; // eax
  RECT v37; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2->bottom - a2->top;
  DpiForSystem = GetDpiForSystem((__int64)a1);
  if ( v6 != *((__int16 *)GetOemBitmapInfoForDpi(29LL, DpiForSystem, v11) + 3)
    || a4 == *(HBRUSH *)(gpsi + 4944LL)
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v37.left = left;
    v37.top = top;
    v37.right = left + v6;
    v37.bottom = top + v6;
    FillRect(a1, &v37, a4);
    v32 = GetDpiForSystem(v31);
    DpiDependentMetric = GetDpiDependentMetric(20LL, v32);
    v35 = GetDpiForSystem(v34);
    v36 = GetDpiDependentMetric(21LL, v35);
    DrawIconEx(
      a1,
      (int)(v6 - DpiDependentMetric) / 2 + left + 1,
      top + (v6 - v36) / 2,
      (__int64)a3,
      DpiDependentMetric,
      v36,
      0,
      0LL,
      3);
  }
  else
  {
    if ( (a5 & 0x10) != 0 )
    {
      i = (__int64)a3 - gcachedCaptions[0];
      v13 = a3 != (struct tagCURSOR *)gcachedCaptions[0] ? 5 : 0;
    }
    else
    {
      v13 = 1;
      i = 1LL;
      v14 = (struct tagCURSOR **)&gcachedCaptions[2];
      do
      {
        if ( *v14 == a3 )
          break;
        ++v13;
        ++i;
        v14 += 2;
      }
      while ( i < 5 );
    }
    if ( v13 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 1;
        v15 = &gcachedCaptions[2];
        for ( i = 1LL; i < 4; ++i )
        {
          if ( !*v15 )
            break;
          ++v13;
          v15 += 2;
        }
      }
      v16 = GetDpiForSystem(i);
      v17 = GetDpiDependentMetric(20LL, v16);
      BltMe4Times(gcachedCaptions[2 * v13 + 1], v6, v17, ghdcMem, a3, a5);
      *(_QWORD *)&v37.right = a3;
      *(_QWORD *)&v37.left = &gcachedCaptions[2 * v13];
      HMAssignmentLock(&v37);
    }
    if ( v13 > 1LL )
    {
      v18 = v13 - 1LL;
      v19 = 16LL * v13;
      v13 = 1;
      do
      {
        v20 = (__int128 *)(v19 + gcachedCaptions[0]);
        v19 -= 16LL;
        v21 = *v20;
        *v20 = *(_OWORD *)(v19 + gcachedCaptions[0]);
        *(_OWORD *)(v19 + gcachedCaptions[0]) = v21;
        --v18;
      }
      while ( v18 );
    }
    v22 = gcachedCaptions[2 * v13 + 1];
    v24 = (HDC)PrepareHDCBITSBitmap(0LL);
    if ( v24 )
    {
      v25 = GetDpiForSystem(v23);
      v27 = v22 + 1;
      if ( (a5 & 1) != 0 )
        v27 = v22;
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v27, v25, v26);
      NtGdiBitBltInternal(
        a1,
        a2->left,
        a2->top,
        v6,
        v6,
        v24,
        *(__int16 *)OemBitmapInfoForDpi,
        *((__int16 *)OemBitmapInfoForDpi + 1),
        13369376,
        0,
        0);
    }
  }
  a2->left += v6;
}
