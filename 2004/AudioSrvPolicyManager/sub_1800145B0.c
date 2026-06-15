/*
 * XREFs of sub_1800145B0 @ 0x1800145B0
 * Callers:
 *     sub_180006770 @ 0x180006770 (sub_180006770.c)
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 *     sub_1800197E0 @ 0x1800197E0 (sub_1800197E0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800145B0(volatile signed __int32 *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  if ( *a2 == 0x48DCAA1AAA6A2D84LL && a2[1] == 0x5AAC6E20D5A0918CLL )
  {
    v4 = (unsigned __int64)(a1 + 4);
LABEL_9:
    *a3 = v4 & -(__int64)(a1 != 0LL);
    _InterlockedIncrement(a1 + 2);
    return v3;
  }
  if ( *a2 == 0x414C75742EA99478LL && a2[1] == 0xA416175B610CA38BuLL )
  {
    v4 = (unsigned __int64)(a1 + 6);
    goto LABEL_9;
  }
  if ( *a2 == unk_180042888 && a2[1] == 0x46000000000000C0LL )
  {
    *a3 = a1;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  return v3;
}
