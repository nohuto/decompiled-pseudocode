/*
 * XREFs of DwmAsyncChildStyleChange @ 0x1C00CB734
 * Callers:
 *     xxxEnableMenuItem @ 0x1C0034648 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00352B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C003621C (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     InternalInvalidate3 @ 0x1C0044D64 (InternalInvalidate3.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00493A0 (xxxSimpleDoSyncPaint.c)
 *     xxxCalcClientRect @ 0x1C004BFD0 (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x1C004CFF0 (xxxDispatchMessage.c)
 *     xxxDoPaint @ 0x1C004DFE8 (xxxDoPaint.c)
 *     xxxGetSystemMenu @ 0x1C0078FF4 (xxxGetSystemMenu.c)
 *     ComposeWindowIfNeeded @ 0x1C00918CC (ComposeWindowIfNeeded.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     UnsetLayeredWindow @ 0x1C00C0BC4 (UnsetLayeredWindow.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C2A48 (DecomposeWindowIfNeeded.c)
 *     ComposeWindow @ 0x1C00C2AD0 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ClearHungFlag @ 0x1C00D1F84 (ClearHungFlag.c)
 *     xxxSetScrollBar @ 0x1C00EBA98 (xxxSetScrollBar.c)
 *     xxxSetClassData @ 0x1C010EA44 (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-20h]
  int v9; // [rsp+48h] [rbp-18h]
  __int64 v10; // [rsp+4Ch] [rbp-14h]
  int v11; // [rsp+54h] [rbp-Ch]
  int v12; // [rsp+58h] [rbp-8h]

  v5 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    v12 = a4;
    v8 = 0LL;
    v10 = a2;
    memset(v7, 0, sizeof(v7));
    WORD2(v7[0]) = 0x8000;
    LODWORD(v7[0]) = 3932180;
    v9 = 1073741846;
    v11 = a3;
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
