/*
 * XREFs of PnpRegSzToString @ 0x140738F54
 * Callers:
 *     PiFindDevInstMatch @ 0x140738D4C (PiFindDevInstMatch.c)
 *     PiDevCfgBuildIndirectString @ 0x14073B9CC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140777EE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407BCB30 (PipApplyFunctionToServiceInstances.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089F2BC (PipGetDriverKsrGuidRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A41D0 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A9824 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408AC4BC (PiDevCfgResolveVariableKeyHandle.c)
 *     PipGetDriverTagPriority @ 0x140A5CE50 (PipGetDriverTagPriority.c)
 *     PpInitGetGroupOrderIndex @ 0x140A5E094 (PpInitGetGroupOrderIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpRegSzToString(_WORD *a1, unsigned int a2, int *a3)
{
  _WORD *v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // r9d

  v3 = a1;
  v4 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  if ( (unsigned __int64)a1 < v4 )
  {
    do
    {
      if ( !*v3 )
        break;
      ++v3;
    }
    while ( (unsigned __int64)v3 < v4 );
  }
  v5 = (_DWORD)v3 - (_DWORD)a1;
  if ( a3 )
    *a3 = v5;
  return 1LL;
}
