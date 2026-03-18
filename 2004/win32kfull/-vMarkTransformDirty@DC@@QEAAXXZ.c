/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026FA74
 * Callers:
 *     NtGdiGetDCObject @ 0x1C0017D40 (NtGdiGetDCObject.c)
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 *     GreGetDIBitsInternal @ 0x1C0075B1C (GreGetDIBitsInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0076650 (GreSetDIBitsToDeviceInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C007AD40 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiAlphaBlend @ 0x1C007EE80 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     NtGdiModifyWorldTransform @ 0x1C0082AA0 (NtGdiModifyWorldTransform.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     NtGdiPolyPatBlt @ 0x1C0086AE0 (NtGdiPolyPatBlt.c)
 *     GreGetTextFaceW @ 0x1C009F270 (GreGetTextFaceW.c)
 *     NtGdiGetDCDword @ 0x1C00EFB50 (NtGdiGetDCDword.c)
 *     GreTransformPoints @ 0x1C00F211C (GreTransformPoints.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00F3DF0 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0104150 (-iSetMapMode@DC@@QEAAHH@Z.c)
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
