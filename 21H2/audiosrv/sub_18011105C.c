/*
 * XREFs of sub_18011105C @ 0x18011105C
 * Callers:
 *     sub_180110FD0 @ 0x180110FD0 (sub_180110FD0.c)
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011105C(_QWORD **a1)
{
  char v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD, char *, char *))(*(_QWORD *)**a1 + 80LL))(**a1, *a1[1], &v4, &v3);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)**a1 + 96LL))(**a1, *a1[1], a1[2]);
}
