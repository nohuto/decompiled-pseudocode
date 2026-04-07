/*
 * XREFs of ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18002A7D8
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180022EF0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180027FEC (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180044D98 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x180092560 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x180092BA0 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x1800952A4 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x180053C34 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::GetOutsideMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v2; // esi
  char v5; // al
  int v6; // edx
  __int64 v7; // rax
  int *v8; // rcx
  int v9; // r11d
  int v10; // esi
  int v11; // ebp
  int v12; // r10d
  int v13; // r8d
  int v14; // eax
  int v15; // eax

  v2 = *((_DWORD *)this + 148);
  *a2 = 0LL;
  v5 = IsOpenThemeDataPresent();
  v6 = 0;
  if ( v5 && (v2 & 6) != 0 || (*((_DWORD *)this + 148) & 0x200000) != 0 )
  {
    v7 = *((_QWORD *)this + 91);
    v8 = (int *)((char *)this + ((*((_BYTE *)this + 240) & 4) != 0 ? 644LL : 628LL));
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[3];
    if ( v7 && (*(_BYTE *)(v7 + 608) & 8) == 0 )
    {
      a2->cyTopHeight = v8[2];
      a2->cxLeftWidth = v9;
      a2->cxRightWidth = v10;
      a2->cyBottomHeight = v11;
    }
    else
    {
      v12 = *((_DWORD *)this + 154) - v10 - *(_DWORD *)(*((_QWORD *)this + 42) + 24LL);
      v13 = *((_DWORD *)this + 156) - v11 - *(_DWORD *)(*((_QWORD *)this + 44) + 28LL);
      v14 = 0;
      if ( *((_DWORD *)this + 153) - *v8 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL) >= 0 )
        v14 = *((_DWORD *)this + 153) - *v8 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
      a2->cxLeftWidth = v9 + v14;
      a2->cyTopHeight = v8[2];
      v15 = 0;
      if ( v12 >= 0 )
        v15 = v12;
      a2->cxRightWidth = v10 + v15;
      if ( v13 >= 0 )
        v6 = v13;
      a2->cyBottomHeight = v11 + v6;
    }
  }
}
