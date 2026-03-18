/*
 * XREFs of VfZwLoadDriver @ 0x1409E6BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x1409E982C (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x1409E9910 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwLoadDriver(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(BugCheckParameter3, retaddr);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvZwLoadDriver)(BugCheckParameter3);
}
