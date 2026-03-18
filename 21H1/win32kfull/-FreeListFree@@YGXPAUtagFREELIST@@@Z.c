/*
 * XREFs of ?FreeListFree@@YGXPAUtagFREELIST@@@Z @ 0x17EA47
 * Callers:
 *     _xxxCleanupAndFreeDdeConv@4 @ 0x180056 (_xxxCleanupAndFreeDdeConv@4.c)
 * Callees:
 *     <none>
 */

void __stdcall FreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v2; // [esp-4h] [ebp-8h]

  while ( a1 )
  {
    v2 = a1;
    a1 = *(struct tagFREELIST **)a1;
    Win32FreePool(v2);
  }
}
