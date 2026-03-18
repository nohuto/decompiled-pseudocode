/*
 * XREFs of PiIommuFreeExtension @ 0x140762EEC
 * Callers:
 *     PipDmgDestroyIommuExtension @ 0x140762BF4 (PipDmgDestroyIommuExtension.c)
 *     PiIommuAllocateExtension @ 0x140762C4C (PiIommuAllocateExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiIommuFreeExtension(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( (*(_BYTE *)(BugCheckParameter2 + 16) & 2) != 0 )
    KeBugCheckEx(0xCAu, 0x11uLL, BugCheckParameter2, *(unsigned __int8 *)(BugCheckParameter2 + 16), 0x1001uLL);
  v2 = *(void **)BugCheckParameter2;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x64706E50u);
    *(_QWORD *)BugCheckParameter2 = 0LL;
  }
  v3 = *(void **)(BugCheckParameter2 + 24);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x64706E50u);
    *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0x64706E50u);
}
