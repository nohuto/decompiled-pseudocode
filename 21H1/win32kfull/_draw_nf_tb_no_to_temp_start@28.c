/*
 * XREFs of _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A
 * Callers:
 *     ?vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRUSHOBJ@@PAU_POINTL@@@Z @ 0x553A0 (-vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRU.c)
 * Callees:
 *     _IsGreIsCurrentProcessSystemCriticalSupported@0 @ 0x12374 (_IsGreIsCurrentProcessSystemCriticalSupported@0.c)
 *     _or_all_1_wide_rotated_need_last@24 @ 0x9CA4A (_or_all_1_wide_rotated_need_last@24.c)
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
 *     _or_first_2_wide_rotated_no_last@24 @ 0xBB3D6 (_or_first_2_wide_rotated_no_last@24.c)
 *     _mov_first_1_wide_unrotated@24 @ 0xBB414 (_mov_first_1_wide_unrotated@24.c)
 *     _or_first_2_wide_rotated_need_last@24 @ 0xBB436 (_or_first_2_wide_rotated_need_last@24.c)
 *     _mov_first_2_wide_unrotated@24 @ 0x24700A (_mov_first_2_wide_unrotated@24.c)
 *     _mov_first_3_wide_unrotated@24 @ 0x247036 (_mov_first_3_wide_unrotated@24.c)
 *     _mov_first_4_wide_unrotated@24 @ 0x24706E (_mov_first_4_wide_unrotated@24.c)
 *     _or_all_N_wide_rotated_need_last@28 @ 0x2472E3 (_or_all_N_wide_rotated_need_last@28.c)
 *     _or_all_N_wide_rotated_no_last@28 @ 0x247358 (_or_all_N_wide_rotated_no_last@28.c)
 *     _or_all_N_wide_unrotated@28 @ 0x2473C8 (_or_all_N_wide_unrotated@28.c)
 *     _or_first_3_wide_rotated_need_last@24 @ 0x247403 (_or_first_3_wide_rotated_need_last@24.c)
 *     _or_first_3_wide_rotated_no_last@24 @ 0x247454 (_or_first_3_wide_rotated_no_last@24.c)
 *     _or_first_4_wide_rotated_need_last@24 @ 0x24749F (_or_first_4_wide_rotated_need_last@24.c)
 *     _or_first_4_wide_rotated_no_last@24 @ 0x2474E7 (_or_first_4_wide_rotated_no_last@24.c)
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

char __stdcall draw_nf_tb_no_to_temp_start(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi
  int v8; // edi
  _DWORD *v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ebx
  int v13; // edx
  int v14; // esi
  BOOL v15; // ecx
  char result; // al
  int v17; // [esp+4h] [ebp-8h]
  int v18; // [esp+8h] [ebp-4h]
  int v19; // [esp+14h] [ebp+8h]
  int v20; // [esp+18h] [ebp+Ch]

  v7 = a2;
  if ( a2 )
  {
    v8 = a1 + 4;
    do
    {
      v20 = v7 - 1;
      v9 = **(_DWORD ***)v8;
      v10 = *v9 + *(_DWORD *)(v8 + 4) - a4;
      v11 = v9[2];
      v12 = v10 & 7;
      v13 = a3 + (v10 >> 3);
      v19 = (v12 + v11 + 7) >> 3;
      v14 = (v11 + 7) >> 3;
      v18 = (int)(v9 + 4);
      v17 = v9[3];
      v15 = v19 > v14;
      if ( v19 > 4 )
        result = ((int (__stdcall *)())OrAllTableWide[(v12 == 0) | (2 * v15)])();
      else
        result = OrInitialTableNarrow[(v12 == 0) | (2 * ((2 * v19) | v15))](v17, (char)v12, a5, v18, v13, v14);
      v7 = v20;
      v8 += 16;
    }
    while ( v20 );
  }
  return result;
}
