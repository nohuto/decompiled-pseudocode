/*
 * XREFs of sub_18001DD10 @ 0x18001DD10
 * Callers:
 *     sub_18001C4E4 @ 0x18001C4E4 (sub_18001C4E4.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001DD10(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // rcx

  v2 = (__int64 *)(a1 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = 0LL;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v6 = *v2;
  }
  if ( a2 )
  {
    if ( v6 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)RoGetAgileReference(0LL, &xmmword_180051230, a2, v2);
  }
  else
  {
    *v2 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v3;
}
