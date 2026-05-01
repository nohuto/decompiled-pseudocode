/*
 * XREFs of ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x18001C218
 * Callers:
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x18001C174 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1801D3BB8 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1801D4990 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18020BB58 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x18020C220 (-GetCortanaHeightForImmersiveSearch@@YAHXZ.c)
 * Callees:
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18007AA9C (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetDWORD(CortanaFeatureConfiguration *a1, __int64 a2)
{
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *SharedFeatureTable; // rax
  __int64 v4; // r10
  unsigned int v5; // ebx
  CortanaFeatureConfiguration *v6; // rcx
  CortanaFeatureConfiguration *v7; // rcx
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *v8; // rax
  unsigned int v9; // r10d
  __int64 v10; // r11

  SharedFeatureTable = CortanaFeatureConfiguration::getSharedFeatureTable(a1);
  v5 = *((_DWORD *)SharedFeatureTable + 6 * v4 + 3);
  CortanaFeatureConfiguration::getSharedFeatureTable(v6);
  v8 = CortanaFeatureConfiguration::getSharedFeatureTable(v7);
  return CortanaFeatureConfiguration::GetDWORDCore(*((_QWORD *)v8 + v10), v9, v5, a2);
}
