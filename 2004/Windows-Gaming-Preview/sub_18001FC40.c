/*
 * XREFs of sub_18001FC40 @ 0x18001FC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800442C0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FC40(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  `eh vector destructor iterator'(a1 + 5, 8uLL, 1uLL, (void (*)(void *))sub_1800081D0);
  v4 = a1[3];
  if ( v4 )
  {
    a1[3] = 0LL;
    sub_1800266E0(v4);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = a1[1];
  if ( v6 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *a1 = &off_18004ADE8;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 48LL);
  return a1;
}
