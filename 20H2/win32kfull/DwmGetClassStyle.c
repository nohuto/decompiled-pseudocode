/*
 * XREFs of DwmGetClassStyle @ 0x1C0081AD0
 * Callers:
 *     xxxEnableMenuItem @ 0x1C0034648 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00352B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C003621C (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxGetSystemMenu @ 0x1C0078FF4 (xxxGetSystemMenu.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00816D4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C010EA44 (xxxSetClassData.c)
 * Callees:
 *     MNLookUpItem @ 0x1C005C3E0 (MNLookUpItem.c)
 */

__int64 __fastcall DwmGetClassStyle(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v5; // edi
  _QWORD *v7; // rax

  v1 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 160);
  v4 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(v1 + 8) + 8LL);
  if ( v3 )
  {
    v7 = MNLookUpItem(v3, 0xF060u, 0, 0LL);
    if ( !v7
      && (v7 = MNLookUpItem(*(_QWORD *)(a1 + 160), 0x8060u, 0, 0LL)) == 0LL
      && (v7 = MNLookUpItem(*(_QWORD *)(a1 + 160), 0xC070u, 0, 0LL)) == 0LL
      || (*(_DWORD *)(*v7 + 4LL) & 3) != 0 )
    {
      v4 = 512;
    }
    v5 |= v4;
  }
  return v5;
}
