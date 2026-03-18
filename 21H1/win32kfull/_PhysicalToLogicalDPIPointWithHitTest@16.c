/*
 * XREFs of _PhysicalToLogicalDPIPointWithHitTest@16 @ 0x1514B5
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _EditionPhysicalToLogicalDPIPointWithInputDestHint@20 @ 0x151021 (_EditionPhysicalToLogicalDPIPointWithInputDestHint@20.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z @ 0x9B656 (-GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     _DCEHitTestWindow@16 @ 0x150745 (_DCEHitTestWindow@16.c)
 */

int __fastcall PhysicalToLogicalDPIPointWithHitTest(int *a1, int *a2, int a3, _DWORD *a4)
{
  struct tagWND *TopLevelOrDpiBoundaryWindow; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h] BYREF
  int v16; // [esp+1Ch] [ebp-4h]

  v14 = *(_DWORD *)(a4[5] + 184);
  if ( (v14 & 0xF) == 2 )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    return 0;
  }
  v13 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a4);
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v8 = *((_DWORD *)TopLevelOrDpiBoundaryWindow + 30);
    v13 = v8;
  }
  else
  {
    v8 = 0;
  }
  v9 = *a2;
  v10 = a2[1];
  v15 = *a2;
  v16 = v10;
  if ( v8 )
  {
    v11 = DCEHitTestWindow((int *)(*((_DWORD *)TopLevelOrDpiBoundaryWindow + 5) + 52), v13, &v15, a3);
    v10 = v16;
    v12 = v15;
  }
  else
  {
    if ( !TopLevelOrDpiBoundaryWindow )
      return PhysicalToLogicalDPIPoint(a1, a2, v14, 0);
    v11 = PtInRect((_DWORD *)(*((_DWORD *)TopLevelOrDpiBoundaryWindow + 5) + 52), v9, v10);
  }
  if ( v11 )
  {
    *a1 = v12;
    a1[1] = v10;
    return 1;
  }
  return PhysicalToLogicalDPIPoint(a1, a2, v14, 0);
}
