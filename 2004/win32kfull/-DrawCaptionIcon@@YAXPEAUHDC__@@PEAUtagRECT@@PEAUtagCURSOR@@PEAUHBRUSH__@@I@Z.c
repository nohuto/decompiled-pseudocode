/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C024847C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 * Callees:
 *     FillRect @ 0x1C0062024 (FillRect.c)
 *     _DrawIconEx @ 0x1C0063888 (_DrawIconEx.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02482E8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, char a5)
{
  int v6; // ebp
  unsigned int DpiForSystem; // eax
  __int64 i; // rcx
  int v12; // edi
  struct tagCURSOR **v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int128 *v19; // rcx
  __int128 v20; // xmm1
  unsigned int v21; // edi
  __int64 v22; // rcx
  HDC v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rcx
  char *OemBitmapInfoForDpi; // rax
  LONG left; // edi
  LONG top; // esi
  __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v32; // rcx
  unsigned int v33; // eax
  int v34; // eax
  RECT v35; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2->bottom - a2->top;
  DpiForSystem = GetDpiForSystem((__int64)a1);
  if ( v6 != *((__int16 *)GetOemBitmapInfoForDpi(29LL, DpiForSystem) + 3)
    || a4 == *(HBRUSH *)(gpsi + 4944LL)
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v35.left = left;
    v35.top = top;
    v35.right = left + v6;
    v35.bottom = top + v6;
    FillRect(a1, &v35, a4);
    v30 = GetDpiForSystem(v29);
    DpiDependentMetric = GetDpiDependentMetric(20LL, v30);
    v33 = GetDpiForSystem(v32);
    v34 = GetDpiDependentMetric(21LL, v33);
    DrawIconEx(
      a1,
      (int)(v6 - DpiDependentMetric) / 2 + left + 1,
      top + (v6 - v34) / 2,
      (__int64)a3,
      DpiDependentMetric,
      v34,
      0,
      0LL,
      3);
  }
  else
  {
    if ( (a5 & 0x10) != 0 )
    {
      i = (__int64)a3 - gcachedCaptions[0];
      v12 = a3 != (struct tagCURSOR *)gcachedCaptions[0] ? 5 : 0;
    }
    else
    {
      v12 = 1;
      i = 1LL;
      v13 = (struct tagCURSOR **)&gcachedCaptions[2];
      do
      {
        if ( *v13 == a3 )
          break;
        ++v12;
        ++i;
        v13 += 2;
      }
      while ( i < 5 );
    }
    if ( v12 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v12 = 0;
      }
      else
      {
        v12 = 1;
        v14 = &gcachedCaptions[2];
        for ( i = 1LL; i < 4; ++i )
        {
          if ( !*v14 )
            break;
          ++v12;
          v14 += 2;
        }
      }
      v15 = GetDpiForSystem(i);
      v16 = GetDpiDependentMetric(20LL, v15);
      BltMe4Times(gcachedCaptions[2 * v12 + 1], v6, v16, *(HDC *)ghdcMem, a3, a5);
      *(_QWORD *)&v35.right = a3;
      *(_QWORD *)&v35.left = &gcachedCaptions[2 * v12];
      HMAssignmentLock(&v35);
    }
    if ( v12 > 1LL )
    {
      v17 = v12 - 1LL;
      v18 = 16LL * v12;
      v12 = 1;
      do
      {
        v19 = (__int128 *)(v18 + gcachedCaptions[0]);
        v18 -= 16LL;
        v20 = *v19;
        *v19 = *(_OWORD *)(v18 + gcachedCaptions[0]);
        *(_OWORD *)(v18 + gcachedCaptions[0]) = v20;
        --v17;
      }
      while ( v17 );
    }
    v21 = gcachedCaptions[2 * v12 + 1];
    v23 = (HDC)PrepareHDCBITSBitmap(0LL);
    if ( v23 )
    {
      v24 = GetDpiForSystem(v22);
      v25 = v21 + 1;
      if ( (a5 & 1) != 0 )
        v25 = v21;
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v25, v24);
      NtGdiBitBltInternal(
        a1,
        a2->left,
        a2->top,
        v6,
        v6,
        v23,
        *(__int16 *)OemBitmapInfoForDpi,
        *((__int16 *)OemBitmapInfoForDpi + 1),
        13369376,
        0,
        0);
    }
  }
  a2->left += v6;
}
