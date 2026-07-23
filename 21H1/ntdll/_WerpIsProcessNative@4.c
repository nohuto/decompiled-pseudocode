/*
 * XREFs of _WerpIsProcessNative@4 @ 0x4B33B266
 * Callers:
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

int WerpIsProcessNative()
{
  int result; // eax
  _BYTE ProcessInformation[16]; // [esp+0h] [ebp-30h] BYREF
  int v2; // [esp+10h] [ebp-20h]

  if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessImageInformation, ProcessInformation, 0x30u, 0) < 0 )
    return 0;
  result = 1;
  if ( v2 != 1 )
    return 0;
  return result;
}
