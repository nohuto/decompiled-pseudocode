/*
 * XREFs of PnpRegSzToString @ 0x1407401EC
 * Callers:
 *     PiDevCfgBuildIndirectString @ 0x14073D36C (PiDevCfgBuildIndirectString.c)
 *     PiFindDevInstMatch @ 0x14073FFE4 (PiFindDevInstMatch.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077C050 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407C1450 (PipApplyFunctionToServiceInstances.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089C9EC (PipGetDriverKsrGuidRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A1900 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A6F54 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9BEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PipGetDriverTagPriority @ 0x140A5E9BC (PipGetDriverTagPriority.c)
 *     PpInitGetGroupOrderIndex @ 0x140A5FC00 (PpInitGetGroupOrderIndex.c)
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
