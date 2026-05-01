/*
 * XREFs of sub_180035E40 @ 0x180035E40
 * Callers:
 *     sub_180037200 @ 0x180037200 (sub_180037200.c)
 *     sub_180037370 @ 0x180037370 (sub_180037370.c)
 *     sub_1800373D0 @ 0x1800373D0 (sub_1800373D0.c)
 *     sub_1800374A0 @ 0x1800374A0 (sub_1800374A0.c)
 *     sub_180037570 @ 0x180037570 (sub_180037570.c)
 *     sub_1800375C0 @ 0x1800375C0 (sub_1800375C0.c)
 *     sub_180037720 @ 0x180037720 (sub_180037720.c)
 * Callees:
 *     sub_180036C9C @ 0x180036C9C (sub_180036C9C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180035E40(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  _QWORD *v5; // r8

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
    || *a2 == -1350114592 && a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    v4 = sub_180036C9C();
    if ( v4 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return (unsigned int)v4;
  }
  return v3;
}
