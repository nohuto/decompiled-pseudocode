/*
 * XREFs of PsspDumpObject_Semaphore @ 0x4B388020
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQuerySemaphore@20 @ 0x4B2F3F50 (_ZwQuerySemaphore@20.c)
 */

int __stdcall PsspDumpObject_Semaphore(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 >= 8 )
    return ZwQuerySemaphore(a1, 0, a2, 8, (int)a4);
  else
    return -1073741789;
}
