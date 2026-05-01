/*
 * XREFs of sub_180024038 @ 0x180024038
 * Callers:
 *     sub_180023224 @ 0x180023224 (sub_180023224.c)
 *     sub_1800345CC @ 0x1800345CC (sub_1800345CC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180024038(_QWORD *a1, __int64 *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v6; // rax

  v3 = 0;
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v6 = *a1;
  *a2 = 0LL;
  if ( v6 )
  {
    if ( *a1 )
      return (*(unsigned int (__fastcall **)(_QWORD, void *, __int64 *))(*(_QWORD *)*a1 + 24LL))(
               *a1,
               &unk_180051C30,
               a2);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
