/*
 * XREFs of PopDirectedDripsUmTestDeviceCompare @ 0x1408F4390
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1406B5F00 (RtlCompareUnicodeStrings.c)
 *     PopDirectedDripsUmGetDeviceInstancePath @ 0x1408F40BC (PopDirectedDripsUmGetDeviceInstancePath.c)
 */

__int64 __fastcall PopDirectedDripsUmTestDeviceCompare(_RTL_AVL_TABLE *a1, _DWORD *a2, PVOID a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // r8
  const WCHAR *DeviceInstancePath; // rax
  PCWCH v6; // r10
  LONG v7; // eax
  SIZE_T String2Length; // [rsp+48h] [rbp+10h] BYREF
  SIZE_T String1Length; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  LODWORD(String1Length) = 0;
  LODWORD(String2Length) = 0;
  PopDirectedDripsUmGetDeviceInstancePath(a2, &String1Length);
  DeviceInstancePath = (const WCHAR *)PopDirectedDripsUmGetDeviceInstancePath(v4, &String2Length);
  v7 = RtlCompareUnicodeStrings(v6, (unsigned int)String1Length, DeviceInstancePath, (unsigned int)String2Length, 1u);
  if ( v7 >= 0 )
    return 2 - (unsigned int)(v7 != 0);
  return v3;
}
