/*
 * XREFs of CmpDelayedDerefKeys @ 0x14061B06C
 * Callers:
 *     CmpPostNotify @ 0x14061A9A8 (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x14061AE80 (CmpReportNotifyHelper.c)
 *     CmpCloseKeyObject @ 0x1406B8480 (CmpCloseKeyObject.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
