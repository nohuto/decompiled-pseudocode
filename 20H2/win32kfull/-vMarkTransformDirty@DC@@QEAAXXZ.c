/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454
 * Callers:
 *     GreGetTextFaceW @ 0x1C005AF50 (GreGetTextFaceW.c)
 *     NtGdiGetDCObject @ 0x1C00990B0 (NtGdiGetDCObject.c)
 *     GreGetDIBitsInternal @ 0x1C009B01C (GreGetDIBitsInternal.c)
 *     NtGdiPolyPatBlt @ 0x1C009D680 (NtGdiPolyPatBlt.c)
 *     GreStretchDIBitsInternal @ 0x1C009FCF0 (GreStretchDIBitsInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00A6200 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00AA350 (NtGdiAlphaBlend.c)
 *     NtGdiModifyWorldTransform @ 0x1C00ADD10 (NtGdiModifyWorldTransform.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiGetDCDword @ 0x1C00EB280 (NtGdiGetDCDword.c)
 *     GreTransformPoints @ 0x1C00EC98C (GreTransformPoints.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00EE180 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0104E10 (-iSetMapMode@DC@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  int v1; // eax
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ecx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_DWORD *)this + 130);
  v2 = *((_QWORD *)this + 122);
  v3 = *(_DWORD *)(v2 + 340);
  if ( (v1 & 1) != 0 )
    v4 = v3 | 0x16090;
  else
    v4 = v3 | 0x6090;
  *(_DWORD *)(v2 + 340) = v4;
}
