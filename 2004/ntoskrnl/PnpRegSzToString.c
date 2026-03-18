/*
 * XREFs of PnpRegSzToString @ 0x14072A4C4
 * Callers:
 *     PiFindDevInstMatch @ 0x14072A2BC (PiFindDevInstMatch.c)
 *     PiDevCfgBuildIndirectString @ 0x14072CF50 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407698D0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407AEBF0 (PipApplyFunctionToServiceInstances.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089978C (PipGetDriverKsrGuidRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14089E6A0 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A3CF4 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A698C (PiDevCfgResolveVariableKeyHandle.c)
 *     PipGetDriverTagPriority @ 0x140A4DEB4 (PipGetDriverTagPriority.c)
 *     PpInitGetGroupOrderIndex @ 0x140A4F0F8 (PpInitGetGroupOrderIndex.c)
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
