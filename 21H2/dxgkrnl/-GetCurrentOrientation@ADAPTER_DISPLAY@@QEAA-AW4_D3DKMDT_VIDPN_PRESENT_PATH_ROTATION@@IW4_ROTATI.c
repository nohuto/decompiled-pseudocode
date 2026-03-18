/*
 * XREFs of ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01A24CC
 * Callers:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0045804 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0159A40 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C015A2D4 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C01B633C (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C01A25AC (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCurrentOrientation(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v6; // edi
  __int64 v7; // rax
  void *v8; // rcx
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF

  v3 = a2;
  v6 = D3DKMDT_VPPR_ROTATE90;
  if ( a3 == 1 )
  {
    if ( *(_BYTE *)(a1 + 289) )
      return 1LL;
  }
  else
  {
    if ( !a3 )
    {
      if ( *(_BYTE *)(a1 + 289) )
        goto LABEL_4;
      return 1LL;
    }
    if ( a3 != 2 )
    {
      WdLogSingleEntry1(1LL, 8146LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(Type == ROTATION_MODE_TYPE_HARDWARE) || (Type == ROTATION_MODE_TYPE_SOFTWARE) || (Type == ROTATION_MODE_TYPE_OVERALL)",
        8146LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
LABEL_4:
  v7 = *(_QWORD *)(a1 + 128);
  if ( *(_DWORD *)(v7 + 4000 * v3 + 1036) != 1 )
  {
    switch ( *(_DWORD *)(v7 + 4000 * v3 + 1036) )
    {
      case 2:
        goto LABEL_6;
      case 3:
        v6 = D3DKMDT_VPPR_ROTATE180;
        goto LABEL_6;
      case 4:
        v6 = D3DKMDT_VPPR_ROTATE270;
        goto LABEL_6;
    }
    WdLogSingleEntry2(2LL, *(int *)(v7 + 4000 * v3 + 1036), *(_QWORD *)(a1 + 16));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"m_DisplayModeInfo does not have a valid rotation mode (0x%I64x) on adapter 0x%I64x!",
      *(int *)(*(_QWORD *)(a1 + 128) + 4000 * v3 + 1036),
      *(_QWORD *)(a1 + 16),
      0LL,
      0LL,
      0LL);
  }
  v6 = D3DKMDT_VPPR_IDENTITY;
LABEL_6:
  if ( a3 != 1 )
  {
    v8 = *(void **)(a1 + 16);
    v10 = 0;
    if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v8, v3, 0LL, &v10) >= 0 )
      return (unsigned int)ADAPTER_DISPLAY::AddingMonitorOrientation((ADAPTER_DISPLAY *)a1, v6, v10);
  }
  return (unsigned int)v6;
}
