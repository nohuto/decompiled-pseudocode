/*
 * XREFs of _SetDpiSetting@8 @ 0xED0FA
 * Callers:
 *     <none>
 * Callees:
 *     _SetDpiAllHWProfileSetting@4 @ 0xED186 (_SetDpiAllHWProfileSetting@4.c)
 */

NTSTATUS __stdcall SetDpiSetting(int a1, int ValueData)
{
  NTSTATUS v2; // edi
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v5 = 1;
  if ( !a1 )
    return RtlWriteRegistryValue(5u, L"Control Panel\\Desktop", L"LogPixels", 4u, &ValueData, 4u);
  if ( a1 != 1 )
    return -1073741811;
  v2 = RtlWriteRegistryValue(
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts",
         L"LogPixels",
         4u,
         &ValueData,
         4u);
  if ( v2 >= 0 )
    v2 = RtlWriteRegistryValue(
           0,
           L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontDPI",
           L"LogPixels",
           4u,
           &ValueData,
           4u);
  SetDpiAllHWProfileSetting(ValueData);
  if ( v2 >= 0 )
    return RtlWriteRegistryValue(
             0,
             L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
             L"Overrode",
             4u,
             &v5,
             4u);
  return v2;
}
