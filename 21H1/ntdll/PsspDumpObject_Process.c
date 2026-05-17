/*
 * XREFs of PsspDumpObject_Process @ 0x4B387FC0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

int __stdcall PsspDumpObject_Process(int a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 < 0x20 )
    return -1073741789;
  *a2 = 32;
  return ZwQueryInformationProcess(a1, 0, (int)a2, 32, (int)a4);
}
