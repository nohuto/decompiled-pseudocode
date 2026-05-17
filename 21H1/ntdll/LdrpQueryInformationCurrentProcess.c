/*
 * XREFs of LdrpQueryInformationCurrentProcess @ 0x4B32F4C0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

int __stdcall LdrpQueryInformationCurrentProcess(int a1, int a2, int a3, int a4, int a5)
{
  return ZwQueryInformationProcess(-1, a2, a3, a4, a5);
}
