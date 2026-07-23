/*
 * XREFs of ObpDeleteSymbolicLink @ 0x14061E510
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeleteSymbolicLink(__int64 a1)
{
  void *v2; // rcx

  if ( (*(_DWORD *)(a1 + 28) & 0x10) == 0 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
