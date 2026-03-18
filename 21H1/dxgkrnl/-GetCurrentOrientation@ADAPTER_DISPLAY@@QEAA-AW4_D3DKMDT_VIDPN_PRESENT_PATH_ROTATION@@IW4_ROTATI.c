/*
 * XREFs of ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0128708
 * Callers:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0038F54 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D5EF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C0114C30 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01176F0 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C013627C (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01487FC (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C01490F0 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0180664 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C01287D0 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C0129954 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCurrentOrientation(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v6; // ebx
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = (unsigned int)a2;
  v6 = D3DKMDT_VPPR_ROTATE90;
  if ( a3 == 1 )
  {
    if ( *(_BYTE *)(a1 + 249) )
      return 1LL;
  }
  else
  {
    if ( !a3 )
      goto LABEL_14;
    if ( a3 != 2 )
    {
      v10 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v10 + 24) = 7943LL;
      WdLogEvent5_WdAssertion(v10);
    }
  }
  if ( a3 )
    goto LABEL_6;
LABEL_14:
  if ( !*(_BYTE *)(a1 + 249) )
    return 1LL;
LABEL_6:
  v7 = *(_QWORD *)(a1 + 112);
  if ( *(_DWORD *)(v7 + 3968 * v3 + 1040) != 1 )
  {
    switch ( *(_DWORD *)(v7 + 3968 * v3 + 1040) )
    {
      case 2:
        goto LABEL_8;
      case 3:
        v6 = D3DKMDT_VPPR_ROTATE180;
        goto LABEL_8;
      case 4:
        v6 = D3DKMDT_VPPR_ROTATE270;
        goto LABEL_8;
    }
    v11 = WdLogNewEntry5_WdError(v7, (unsigned int)(*(_DWORD *)(v7 + 3968 * v3 + 1040) - 3));
    *(_QWORD *)(v11 + 24) = *(int *)(*(_QWORD *)(a1 + 112) + 3968 * v3 + 1040);
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v11);
  }
  v6 = D3DKMDT_VPPR_IDENTITY;
LABEL_8:
  if ( a3 != 1 )
  {
    v8 = *(void **)(a1 + 16);
    v12 = 0;
    if ( DmmEnumClientVidPnPathTargetsFromSource(v8, v3, 0LL, &v12) >= 0 )
      return (unsigned int)ADAPTER_DISPLAY::AddingMonitorOrientation((ADAPTER_DISPLAY *)a1, v6, v12);
  }
  return (unsigned int)v6;
}
