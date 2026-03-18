/*
 * XREFs of PnpRegSzToString @ 0x14067AB94
 * Callers:
 *     PiFindDevInstMatch @ 0x14067A98C (PiFindDevInstMatch.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406E67F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgBuildIndirectString @ 0x1407468A0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140805024 (PiDevCfgResolveVariableKeyHandle.c)
 *     PipApplyFunctionToServiceInstances @ 0x140851A60 (PipApplyFunctionToServiceInstances.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x140941588 (PipGetDriverKsrGuidRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140946900 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14094C79C (PiDevCfgMakeServiceBootStart.c)
 *     PipGetDriverTagPriority @ 0x140B1131C (PipGetDriverTagPriority.c)
 *     PpInitGetGroupOrderIndex @ 0x140B1244C (PpInitGetGroupOrderIndex.c)
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
