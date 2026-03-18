/*
 * XREFs of _SetDpiScalingSetting@8 @ 0x1B9A09
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SetDpiScalingSetting(int a1, char ValueData)
{
  if ( !a1 )
    return RtlWriteRegistryValue(5u, L"Software\\Microsoft\\Windows\\DWM", L"UseDpiScaling", 4u, &ValueData, 4u);
  if ( a1 == 1 )
    return RtlWriteRegistryValue(
             0,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\DWM",
             L"UseDpiScaling",
             4u,
             &ValueData,
             4u);
  return -1073741811;
}
