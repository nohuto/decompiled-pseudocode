/*
 * XREFs of VfZwDeleteFile @ 0x1409EC4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409EF85C (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x1409EF990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeleteFile(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckObjectAttributes(a1, retaddr);
  return ((__int64 (__fastcall *)(__int64))pXdvZwDeleteFile)(a1);
}
