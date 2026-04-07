/*
 * XREFs of ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18001525C
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180015118 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180018E7C (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003C0E4 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 */

char __fastcall CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
        __int64 a1,
        __int16 a2,
        char a3,
        int *a4,
        struct _MARGINS *a5)
{
  __int64 v5; // rbp
  int v6; // edi
  char v9; // bl
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // r9d
  unsigned __int32 v15; // r8d
  int v16; // edx
  int v18; // edx
  int v19; // edi
  __int128 v20; // xmm0
  int v21; // eax
  struct _MARGINS v22; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 384);
  v6 = 0;
  v9 = a2;
  if ( v5 )
  {
    if ( (a2 & 0x100) == 0 && CDesktopManager::AdjustDesktopWindowSize(*(HWND *)(a1 + 40), (struct tagRECT *)&v22) )
    {
      v21 = 0;
      if ( v22.cyTopHeight - v22.cxLeftWidth >= 0 )
        v21 = v22.cyTopHeight - v22.cxLeftWidth;
      *a4 = v21;
      if ( v22.cyBottomHeight - v22.cxRightWidth >= 0 )
        v6 = v22.cyBottomHeight - v22.cxRightWidth;
      a4[1] = v6;
    }
    else
    {
      v11 = 0;
      if ( *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48) >= 0 )
        v11 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48);
      v12 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
      *a4 = v11;
      v13 = 0;
      if ( v12 >= 0 )
        v13 = v12;
      a4[1] = v13;
      if ( (v9 & 4) == 0 )
      {
        if ( v9 >= 0 )
        {
          CTopLevelWindow::GetOutsideMargins((CTopLevelWindow *)v5, &v22);
          *a5 = v22;
        }
        else
        {
          v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v5 + 628), 4)) - *(_DWORD *)(v5 + 664);
          v15 = _mm_srli_si128(*(__m128i *)(v5 + 628), 8).m128i_u32[0] - *(_DWORD *)(v5 + 668);
          v16 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v5 + 628), 12)) - *(_DWORD *)(v5 + 672);
          a5->cxLeftWidth = *(_OWORD *)(v5 + 628) - *(_DWORD *)(v5 + 660);
          a5->cxRightWidth = v14;
          a5->cyTopHeight = v15;
          a5->cyBottomHeight = v16;
        }
        return 1;
      }
      if ( a3 )
      {
        v20 = *(_OWORD *)(a1 + 64);
        goto LABEL_20;
      }
      v18 = 0;
      if ( *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184) >= 0 )
        v18 = *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184);
      if ( *(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 180) >= 0 )
        v6 = *(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 180);
      v19 = v6 - *(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 244);
      a4[1] = v18 - *(_DWORD *)(a1 + 256) - *(_DWORD *)(a1 + 252);
      *a4 = v19;
    }
    v20 = xmmword_1800CB6D8;
LABEL_20:
    *a5 = (struct _MARGINS)v20;
    return 1;
  }
  return 0;
}
