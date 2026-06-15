/*
 * XREFs of sub_1800250BC @ 0x1800250BC
 * Callers:
 *     sub_180024994 @ 0x180024994 (sub_180024994.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800250BC(__int64 a1, int a2, int *a3)
{
  int v5; // ebx

  *a3 = a2;
  v5 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) && dword_180044A80[*a3] )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1)
      || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 376LL))(a1) )
    {
      v5 = *a3;
    }
    *a3 = v5;
  }
  return 0LL;
}
