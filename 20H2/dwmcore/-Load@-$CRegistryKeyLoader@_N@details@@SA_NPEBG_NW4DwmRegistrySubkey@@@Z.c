/*
 * XREFs of ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800DD678
 * Callers:
 *     _dynamic_initializer_for__CCommonRegistryData::ConfigureInput__ @ 0x180002B20 (_dynamic_initializer_for__CCommonRegistryData--ConfigureInput__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::DisableDrawListCaching__ @ 0x180002B50 (_dynamic_initializer_for__CCommonRegistryData--DisableDrawListCaching__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::DisableProjectedShadows__ @ 0x180002B80 (_dynamic_initializer_for__CCommonRegistryData--DisableProjectedShadows__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::EnableBloom__ @ 0x180002BB0 (_dynamic_initializer_for__CCommonRegistryData--Scene--EnableBloom__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnableCommonSuperSets__ @ 0x180002BE0 (_dynamic_initializer_for__CCommonRegistryData--EnableCommonSuperSets__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnableCpuClipping__ @ 0x180002C10 (_dynamic_initializer_for__CCommonRegistryData--EnableCpuClipping__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::EnableDrawToBackbuffer__ @ 0x180002C40 (_dynamic_initializer_for__CCommonRegistryData--Scene--EnableDrawToBackbuffer__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnableEffectCaching__ @ 0x180002C70 (_dynamic_initializer_for__CCommonRegistryData--EnableEffectCaching__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnableFrontBufferRenderChecks__ @ 0x180002CA0 (_dynamic_initializer_for__CCommonRegistryData--EnableFrontBufferRenderChecks__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::EnableImageProcessing__ @ 0x180002CD0 (_dynamic_initializer_for__CCommonRegistryData--Scene--EnableImageProcessing__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnableMegaRects__ @ 0x180002D00 (_dynamic_initializer_for__CCommonRegistryData--EnableMegaRects__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnablePrimitiveReordering__ @ 0x180002D30 (_dynamic_initializer_for__CCommonRegistryData--EnablePrimitiveReordering__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::EnableShadow__ @ 0x180002D60 (_dynamic_initializer_for__CCommonRegistryData--Scene--EnableShadow__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::GammaBlendPencil__ @ 0x180002DD0 (_dynamic_initializer_for__CCommonRegistryData--GammaBlendPencil__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::GammaBlendWithFP16__ @ 0x180002E00 (_dynamic_initializer_for__CCommonRegistryData--GammaBlendWithFP16__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessing8bit__ @ 0x180002E30 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessing8bit__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::InkGPUAccelOverrideVendorWhitelist__ @ 0x180002F50 (_dynamic_initializer_for__CCommonRegistryData--InkGPUAccelOverrideVendorWhitelist__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::LogExpressionPerfStats__ @ 0x180002F80 (_dynamic_initializer_for__CCommonRegistryData--LogExpressionPerfStats__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::OptimizeForDirtyExpressions__ @ 0x1800030E0 (_dynamic_initializer_for__CCommonRegistryData--OptimizeForDirtyExpressions__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetEnabled__ @ 0x180003370 (_dynamic_initializer_for__CCommonRegistryData--SuperWetEnabled__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::UniformSpaceDpiMode__ @ 0x180003460 (_dynamic_initializer_for__CCommonRegistryData--UniformSpaceDpiMode__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::UseHWDrawListEntriesOnWARP__ @ 0x180003490 (_dynamic_initializer_for__CCommonRegistryData--UseHWDrawListEntriesOnWARP__.c)
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800DD6A8 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

bool __fastcall details::CRegistryKeyLoader<bool>::Load(__int64 a1, char a2, __int64 a3)
{
  int v5; // [rsp+48h] [rbp+20h] BYREF

  if ( (unsigned __int8)RegGetDwmDwordHelper(a1, &v5, a3) )
    return v5 != 0;
  else
    return a2;
}
