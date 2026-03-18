/*
 * XREFs of ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C0051580
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C0051470 (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C021D6D0 (xxxCleanupAndFreeDdeConv.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  struct tagFREELIST *v2; // rcx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v2);
    }
    while ( v1 );
  }
}
