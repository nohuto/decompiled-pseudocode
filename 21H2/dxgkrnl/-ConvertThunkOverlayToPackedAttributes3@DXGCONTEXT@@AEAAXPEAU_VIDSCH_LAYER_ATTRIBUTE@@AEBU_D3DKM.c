/*
 * XREFs of ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C0174888
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01739B0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(
        DXGCONTEXT *this,
        struct _VIDSCH_LAYER_ATTRIBUTE *a2,
        const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *a3)
{
  int v3; // ebx
  int v4; // ecx
  D3DDDI_ROTATION Rotation; // eax
  unsigned __int32 v8; // ecx
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // edx
  int v10; // eax
  unsigned int v11; // eax

  v3 = 0;
  v4 = *((_DWORD *)a2 + 7);
  *(_WORD *)a2 = a3->SrcRect.left;
  *((_WORD *)a2 + 1) = a3->SrcRect.right;
  *((_WORD *)a2 + 2) = a3->SrcRect.top;
  *((_WORD *)a2 + 3) = a3->SrcRect.bottom;
  *((_WORD *)a2 + 4) = a3->DstRect.left;
  *((_WORD *)a2 + 5) = a3->DstRect.right;
  *((_WORD *)a2 + 6) = a3->DstRect.top;
  *((_WORD *)a2 + 7) = a3->DstRect.bottom;
  *((_WORD *)a2 + 8) = a3->ClipRect.left;
  *((_WORD *)a2 + 9) = a3->ClipRect.right;
  *((_WORD *)a2 + 10) = a3->ClipRect.top;
  *((_WORD *)a2 + 11) = a3->ClipRect.bottom;
  *((_DWORD *)a2 + 7) ^= (a3->Flags ^ v4) & 1;
  *((_DWORD *)a2 + 7) ^= (a3->Flags ^ *((_DWORD *)a2 + 7)) & 2;
  Rotation = a3->Rotation;
  if ( !Rotation )
  {
    WdLogSingleEntry1(1LL, 2281LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"1 <= static_cast< UINT >(PlaneAttributes.Rotation)",
      2281LL,
      0LL,
      0LL,
      0LL,
      0LL);
    Rotation = a3->Rotation;
  }
  if ( (unsigned int)Rotation > D3DDDI_ROTATION_270 )
  {
    WdLogSingleEntry1(1LL, 2282LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"4 >= static_cast< UINT >(PlaneAttributes.Rotation)",
      2282LL,
      0LL,
      0LL,
      0LL,
      0LL);
    Rotation = a3->Rotation;
  }
  *((_DWORD *)a2 + 7) ^= (*((_DWORD *)a2 + 7) ^ (8 * Rotation - 8)) & 0x18;
  v8 = *((_DWORD *)a2 + 7) & 0xFFFFFF9B | (4 * (a3->Blend & 1));
  *((_DWORD *)a2 + 7) = v8;
  ColorSpace = a3->ColorSpace;
  if ( ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601
    || ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709 )
  {
    v8 |= 0x80u;
    *((_DWORD *)a2 + 7) = v8;
    ColorSpace = a3->ColorSpace;
  }
  v10 = v8;
  if ( ColorSpace >= D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709
    && ColorSpace <= D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P709 )
  {
    v10 = v8 | 0x100;
  }
  v11 = v10 & 0xFFFFFDFF;
  *((_DWORD *)a2 + 7) = v11;
  if ( a3->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
    v3 = 0x400000;
  *((_DWORD *)a2 + 7) = v11 & 0xFFBFFFFF | v3;
  *((_DWORD *)a2 + 6) = a3->ColorSpace;
  *((_DWORD *)a2 + 8) = a3->SDRWhiteLevel;
}
