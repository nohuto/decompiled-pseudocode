/*
 * XREFs of sub_1800054E0 @ 0x1800054E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800054E0(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = dword_18004F578;
  dword_18004F578 = *(_DWORD *)(a2 + 8);
  if ( v2 != dword_18004F578 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(a1, 0LL, a2);
  return 1;
}
