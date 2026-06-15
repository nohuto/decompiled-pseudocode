/*
 * XREFs of pow @ 0x18006B56C
 * Callers:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180054BA0 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x180054C1C (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005D990 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18005DAA8 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18005DB90 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005DC2C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x18005DD0C (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x1800B92F0 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800C29B0 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800C7534 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
