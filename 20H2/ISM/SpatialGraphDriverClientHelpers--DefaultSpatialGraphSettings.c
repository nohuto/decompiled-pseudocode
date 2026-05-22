/*
 * XREFs of SpatialGraphDriverClientHelpers::DefaultSpatialGraphSettings @ 0x18015ACAC
 * Callers:
 *     ??$MakeAndInitialize@V?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x18014F1F0 (--$MakeAndInitialize@V-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows.c)
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x18015AC50 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18003A830 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 */

bool __fastcall SpatialGraphDriverClientHelpers::DefaultSpatialGraphSettings(RegistryHelpers *a1)
{
  return (unsigned int)RegistryHelpers::GetDwordWithDefault(
                         a1,
                         (const WCHAR *)&stru_1801D9690,
                         L"SpatialGraphComputeMissingVelocities",
                         0LL) != 0;
}
