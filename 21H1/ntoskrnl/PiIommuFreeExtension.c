/*
 * XREFs of PiIommuFreeExtension @ 0x14074FC54
 * Callers:
 *     PipDmgDestroyIommuExtension @ 0x14074F990 (PipDmgDestroyIommuExtension.c)
 *     PiIommuAllocateExtension @ 0x14074F9E8 (PiIommuAllocateExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiIommuFreeExtension(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx

  if ( (*(_BYTE *)(BugCheckParameter2 + 16) & 2) != 0 )
    KeBugCheckEx(0xCAu, 0x11uLL, BugCheckParameter2, *(unsigned __int8 *)(BugCheckParameter2 + 16), 0x1001uLL);
  v2 = *(void **)BugCheckParameter2;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x64706E50u);
    *(_QWORD *)BugCheckParameter2 = 0LL;
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0x64706E50u);
}
