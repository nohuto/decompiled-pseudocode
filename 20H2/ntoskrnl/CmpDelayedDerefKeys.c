/*
 * XREFs of CmpDelayedDerefKeys @ 0x1405F3AAC
 * Callers:
 *     CmpReportNotifyHelper @ 0x1405F38C0 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x1405F3C84 (CmpPostNotify.c)
 *     CmpCloseKeyObject @ 0x1406B1340 (CmpCloseKeyObject.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDelayedDerefKeys(void **a1)
{
  void *v2; // rbx
  void **v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( *((void ***)v2 + 1) != a1 || (v3 = *(void ***)v2, *(void **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ObDereferenceObjectDeferDelete(*((PVOID *)v2 + 2));
    ExFreePoolWithTag(v2, 0);
  }
}
