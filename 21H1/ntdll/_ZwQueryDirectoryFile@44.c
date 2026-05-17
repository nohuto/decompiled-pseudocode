/*
 * XREFs of _ZwQueryDirectoryFile@44 @ 0x4B2F2CD0
 * Callers:
 *     _LdrpCnvrtShortToLongFileName@12 @ 0x4B33F31F (_LdrpCnvrtShortToLongFileName@12.c)
 *     _RtlpMUIEnumerateFolder@12 @ 0x4B354614 (_RtlpMUIEnumerateFolder@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwQueryDirectoryFile(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  return Wow64SystemServiceCall();
}
