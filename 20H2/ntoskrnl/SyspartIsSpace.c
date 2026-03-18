/*
 * XREFs of SyspartIsSpace @ 0x140975EF4
 * Callers:
 *     BiMapEfiDeviceForSpaces @ 0x1405C2644 (BiMapEfiDeviceForSpaces.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405C27AC (BiSpacesUpdatePhysicalDevicePath.c)
 * Callees:
 *     SiQueryProperty @ 0x1409761D0 (SiQueryProperty.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SyspartIsSpace(__int64 a1, _BYTE *a2)
{
  int v3; // eax
  PVOID v4; // rcx
  unsigned int v5; // ebx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  *a2 = 0;
  v3 = SiQueryProperty(a1, 0LL, 8LL, &P);
  v4 = P;
  v5 = v3;
  if ( v3 >= 0 && *((_DWORD *)P + 7) == 16 )
    *a2 = 1;
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
