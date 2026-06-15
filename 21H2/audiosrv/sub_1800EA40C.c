/*
 * XREFs of sub_1800EA40C @ 0x1800EA40C
 * Callers:
 *     sub_1800ED0E0 @ 0x1800ED0E0 (sub_1800ED0E0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_BYTE *__fastcall sub_1800EA40C(_BYTE *a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 *i; // r14
  __int64 v8; // rcx
  __int64 (__fastcall **v10)(); // [rsp+20h] [rbp-48h] BYREF
  char v11; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall ***v12)(); // [rsp+58h] [rbp-10h]

  for ( i = a2; i != a3; ++i )
  {
    v8 = *i;
    v10 = off_180155698;
    v11 = a4;
    v12 = &v10;
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)v8 + 352LL))(v8, &v10);
  }
  *a1 = a4;
  return a1;
}
