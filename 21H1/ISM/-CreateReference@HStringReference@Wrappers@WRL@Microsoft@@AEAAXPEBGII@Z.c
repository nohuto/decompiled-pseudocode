/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18007FA2C
 * Callers:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18007F8B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x180080224 (--0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x180082660 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x18008B748 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x1800A2C64 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800CFDC4 (-EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1801139EC (-CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPro.c)
 *     ?InitCausality@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180116650 (-InitCausality@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Wind.c)
 *     ?Initialize@SystemCursorService@@QEAAJXZ @ 0x18013FF80 (-Initialize@SystemCursorService@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJXZ @ 0x18016ED98 (-RuntimeClassInitialize@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@Q.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18007FA70 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        UINT32 a3,
        UINT32 a4)
{
  UINT32 v4; // eax
  HRESULT StringReference; // eax
  int v6; // edx
  unsigned int v7; // r8d

  v4 = a4;
  if ( a4 >= a3 )
    v4 = a3 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference, v6, v7);
    __debugbreak();
  }
}
