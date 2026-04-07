/*
 * XREFs of ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x18004C494
 * Callers:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18004C4FC (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     ??R?$__func@V_lambda_890942bf62097d6c778291458fa4014d_@@$$A6AXW4RegistryChangeKind@wil@@@Z@__function@wistd@@UEAAX$$QEAW4RegistryChangeKind@wil@@@Z @ 0x1800809E0 (--R-$__func@V_lambda_890942bf62097d6c778291458fa4014d_@@$$A6AXW4RegistryChangeKind@wil@@@Z@__fun.c)
 * Callees:
 *     <none>
 */

__int64 PerceptionSimulationSettings::GetControlMode()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = 4;
  v0 = 0;
  v2 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\PerceptionSimulationExtensions",
          L"Mode",
          0x10010u,
          0LL,
          &v2,
          &v3) )
    return v2;
  return v0;
}
