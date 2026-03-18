/*
 * XREFs of VfZwDeleteFile @ 0x1409E6430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409E97DC (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x1409E9910 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeleteFile(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckObjectAttributes(a1, retaddr);
  return ((__int64 (__fastcall *)(__int64))pXdvZwDeleteFile)(a1);
}
