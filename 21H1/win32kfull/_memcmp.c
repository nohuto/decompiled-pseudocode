/*
 * XREFs of _memcmp @ 0xF9295
 * Callers:
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     ?SmartRectInRegion@@YGIPAUHRGN__@@PAUtagRECT@@@Z @ 0x34A8E (-SmartRectInRegion@@YGIPAUHRGN__@@PAUtagRECT@@@Z.c)
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     _SbGetContextDetailsByGuid@8 @ 0x97B98 (_SbGetContextDetailsByGuid@8.c)
 *     ?bSubtractComplex@RGNOBJ@@QAEHPAU_RECTL@@0H@Z @ 0x98D9E (-bSubtractComplex@RGNOBJ@@QAEHPAU_RECTL@@0H@Z.c)
 *     ?IsRealFlickId@@YGHU_GUID@@@Z @ 0x9CEDC (-IsRealFlickId@@YGHU_GUID@@@Z.c)
 *     _MagpRemoveTransformOutputMagFac@4 @ 0xA3ACC (_MagpRemoveTransformOutputMagFac@4.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 *     ?PreventInterMonitorBlts@@YGXPAUtagCVR@@@Z @ 0x13F989 (-PreventInterMonitorBlts@@YGXPAUtagCVR@@@Z.c)
 *     ?DeviceCDROMNotify@@YGJPAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PAU_CDROM_NOTIFY@@@Z @ 0x14AC55 (-DeviceCDROMNotify@@YGJPAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PAU_CDROM_NOTIFY@@@Z.c)
 *     ?DeviceClassCDROMNotify@@YGJPAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PAX@Z @ 0x14ADAE (-DeviceClassCDROMNotify@@YGJPAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PAX@Z.c)
 *     _NtUserGetHimetricScaleFactorFromPixelLocation@20 @ 0x162E74 (_NtUserGetHimetricScaleFactorFromPixelLocation@20.c)
 *     ?HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B2FF7 (-HandleIntObjUsageTelemetry@@YGXPAURawInputManagerDeviceObject@@PAUtagWND@@UtagINTERACTIVECTRL_I.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z @ 0x1B4305 (-HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z.c)
 *     CompareEventEntry @ 0x1B65E8 (CompareEventEntry.c)
 *     ?bMatchRealization@RFONTOBJ@@AAEHPAU_FD_XFORM@@KKPAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209428 (-bMatchRealization@RFONTOBJ@@AAEHPAU_FD_XFORM@@KKPAVEXFORMOBJ@@PAVPFE@@HHHK@Z.c)
 *     ?bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z @ 0x21C828 (-bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QAEHV1@@Z @ 0x222E1E (-bEqualEntries@XEPALOBJ@@QAEHV1@@Z.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z @ 0x249C82 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z.c)
 *     ??8CBackTrace@NSInstrumentation@@QBE_NABV01@@Z @ 0x24A114 (--8CBackTrace@NSInstrumentation@@QBE_NABV01@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return _memcmp(Buf1, Buf2, Size);
}
