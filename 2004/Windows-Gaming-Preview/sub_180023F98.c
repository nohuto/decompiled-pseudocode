/*
 * XREFs of sub_180023F98 @ 0x180023F98
 * Callers:
 *     sub_180021570 @ 0x180021570 (sub_180021570.c)
 *     sub_180033970 @ 0x180033970 (sub_180033970.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180023F98(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // rcx

  v2 = *a1;
  v3 = 0;
  *a1 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v5 = *a1;
  }
  if ( a2 )
  {
    if ( v5 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return (unsigned int)RoGetAgileReference(0LL, &unk_180051C30, a2, a1);
  }
  else
  {
    *a1 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v3;
}
