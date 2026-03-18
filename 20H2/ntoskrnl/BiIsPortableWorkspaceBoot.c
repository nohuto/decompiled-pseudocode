/*
 * XREFs of BiIsPortableWorkspaceBoot @ 0x140972190
 * Callers:
 *     BiBindEfiEntries @ 0x140972F10 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x140974380 (BiExportBcdObjects.c)
 * Callees:
 *     BiGetRegistryValue @ 0x140780018 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140780624 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407807AC (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

bool BiIsPortableWorkspaceBoot()
{
  char v0; // di
  int v1; // ebx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  void *v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v0 = 0;
  P = 0LL;
  v4 = 0LL;
  v3 = 0;
  if ( (int)BiOpenKey(0LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT", 0x20019u, &v4) < 0 )
  {
    if ( (int)BiGetRegistryValue(
                0LL,
                L"PortableOperatingSystem",
                (__int64)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
                4,
                &P,
                &v3) >= 0 )
    {
      v1 = *(_DWORD *)P;
      ExFreePoolWithTag(P, 0x4B444342u);
      return v1 != 0;
    }
  }
  else
  {
    BiCloseKey(v4);
  }
  return v0;
}
