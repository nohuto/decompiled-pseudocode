/*
 * XREFs of _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F
 * Callers:
 *     ?vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRUSHOBJ@@PAU_POINTL@@@Z @ 0x553A0 (-vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRU.c)
 * Callees:
 *     _IsGreIsCurrentProcessSystemCriticalSupported@0 @ 0x12374 (_IsGreIsCurrentProcessSystemCriticalSupported@0.c)
 *     _or_all_2_wide_rotated_no_last@24 @ 0x83020 (_or_all_2_wide_rotated_no_last@24.c)
 *     _or_all_2_wide_rotated_need_last@24 @ 0x9AF2A (_or_all_2_wide_rotated_need_last@24.c)
 *     _or_all_1_wide_rotated_need_last@24 @ 0x9CA4A (_or_all_1_wide_rotated_need_last@24.c)
 *     _or_all_3_wide_rotated_no_last@24 @ 0xA2C92 (_or_all_3_wide_rotated_no_last@24.c)
 *     _or_all_1_wide_unrotated@24 @ 0xA5040 (_or_all_1_wide_unrotated@24.c)
 *     _or_all_2_wide_unrotated@24 @ 0xA88E0 (_or_all_2_wide_unrotated@24.c)
 *     _exit_fast_text@24 @ 0xB5608 (_exit_fast_text@24.c)
 *     ?GetDrvType@DestroyFontRequest@@UBE?AW4FontDriverType@@XZ @ 0xB5776 (-GetDrvType@DestroyFontRequest@@UBE-AW4FontDriverType@@XZ.c)
 *     ?GetDrvType@EscapeRequest@@UBE?AW4FontDriverType@@XZ @ 0xB5780 (-GetDrvType@EscapeRequest@@UBE-AW4FontDriverType@@XZ.c)
 *     ?GetDrvType@UnloadFontFileRequest@@UBE?AW4FontDriverType@@XZ @ 0xB5788 (-GetDrvType@UnloadFontFileRequest@@UBE-AW4FontDriverType@@XZ.c)
 *     ?GetDrvType@QueryTrueTypeOutlineRequest@@UBE?AW4FontDriverType@@XZ @ 0xB5794 (-GetDrvType@QueryTrueTypeOutlineRequest@@UBE-AW4FontDriverType@@XZ.c)
 *     ?Hff@DestroyFontRequest@@UBEKXZ @ 0xB57B0 (-Hff@DestroyFontRequest@@UBEKXZ.c)
 *     ?Hff@TrueTypeFreeGlyphsetRequest@@UBEKXZ @ 0xB57B8 (-Hff@TrueTypeFreeGlyphsetRequest@@UBEKXZ.c)
 *     ?Hff@QueryTrueTypeOutlineRequest@@UBEKXZ @ 0xB57BC (-Hff@QueryTrueTypeOutlineRequest@@UBEKXZ.c)
 *     ?Zombied@QueryGlyphAttrsRequest@@UBE_NXZ @ 0xB57D0 (-Zombied@QueryGlyphAttrsRequest@@UBE_NXZ.c)
 *     ?Zombied@LoadFontFileRequest@@UBE_NXZ @ 0xB57DA (-Zombied@LoadFontFileRequest@@UBE_NXZ.c)
 *     ?Zombied@GetTrueTypeFileRequest@@UBE_NXZ @ 0xB57DE (-Zombied@GetTrueTypeFileRequest@@UBE_NXZ.c)
 *     ?Zombied@QueryAdvanceWidthsRequest@@UBE_NXZ @ 0xB57E6 (-Zombied@QueryAdvanceWidthsRequest@@UBE_NXZ.c)
 *     _or_all_3_wide_rotated_need_last@24 @ 0x24710D (_or_all_3_wide_rotated_need_last@24.c)
 *     _or_all_3_wide_unrotated@24 @ 0x247161 (_or_all_3_wide_unrotated@24.c)
 *     _or_all_4_wide_rotated_need_last@24 @ 0x247199 (_or_all_4_wide_rotated_need_last@24.c)
 *     _or_all_4_wide_rotated_no_last@24 @ 0x2471E1 (_or_all_4_wide_rotated_no_last@24.c)
 *     _or_all_4_wide_unrotated@24 @ 0x247244 (_or_all_4_wide_unrotated@24.c)
 *     _or_all_N_wide_rotated_need_last@28 @ 0x2472E3 (_or_all_N_wide_rotated_need_last@28.c)
 *     _or_all_N_wide_rotated_no_last@28 @ 0x247358 (_or_all_N_wide_rotated_no_last@28.c)
 *     _or_all_N_wide_unrotated@28 @ 0x2473C8 (_or_all_N_wide_unrotated@28.c)
 *     ?GetDrvType@FontManagementRequest@@UBE?AW4FontDriverType@@XZ @ 0x24A6D8 (-GetDrvType@FontManagementRequest@@UBE-AW4FontDriverType@@XZ.c)
 *     ?CaptureUsermodeParameters@EscapeRequest@@UAEXPAX@Z @ 0x24AB70 (-CaptureUsermodeParameters@EscapeRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UAEXPAX@Z @ 0x24ABF4 (-CaptureUsermodeParameters@FontManagementRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@GetTrueTypeFileRequest@@UAEXPAX@Z @ 0x24ACA3 (-CaptureUsermodeParameters@GetTrueTypeFileRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UAEXPAX@Z @ 0x24AD24 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEXPAX@Z @ 0x24AE6F (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEXPAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B15C (-CreateUsermodeParameters@EscapeRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B270 (-CreateUsermodeParameters@FontManagementRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@GetTrueTypeFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B431 (-CreateUsermodeParameters@GetTrueTypeFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B4E8 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B5B0 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 */

_DWORD **__stdcall draw_f_ntb_o_to_temp_start(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD **result; // eax
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // ecx
  int v11; // edx
  int v12; // ebx
  int v13; // ebx
  int v14; // eax
  BOOL v15; // ecx
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+20h] [ebp+8h]
  int v19; // [esp+20h] [ebp+8h]
  int v20; // [esp+24h] [ebp+Ch]
  int v21; // [esp+2Ch] [ebp+14h]

  result = (_DWORD **)a1;
  v8 = *(_DWORD *)(a1 + 8) - a4;
  v9 = a2;
  v16 = *(_DWORD *)(a1 + 12) - a7;
  if ( a2 )
  {
    result = (_DWORD **)(a1 + 4);
    v17 = a1 + 4;
    do
    {
      --v9;
      v10 = (_DWORD *)**result;
      v18 = v8 + *v10;
      v11 = v18 & 7;
      v12 = v10[2] + 7;
      v21 = v12 >> 3;
      v13 = (v11 + v12) >> 3;
      v19 = a3 + a5 * (v16 + v10[1]) + (v18 >> 3);
      v20 = (int)(v10 + 4);
      v14 = v10[3];
      v15 = v13 > v21;
      if ( v13 > 4 )
        ((void (__stdcall *)())OrAllTableWide[(v11 == 0) | (2 * v15)])();
      else
        OrAllTableNarrow[(v11 == 0) | (2 * ((2 * v13) | v15))](v14, (char)v11, a5, v20, v19, v21);
      v8 += a6;
      result = (_DWORD **)(v17 + 16);
      v17 += 16;
    }
    while ( v9 );
  }
  return result;
}
