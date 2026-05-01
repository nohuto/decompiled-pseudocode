/*
 * XREFs of sub_18001E00C @ 0x18001E00C
 * Callers:
 *     sub_18001C810 @ 0x18001C810 (sub_18001C810.c)
 *     sub_18001C990 @ 0x18001C990 (sub_18001C990.c)
 * Callees:
 *     sub_18001E1D8 @ 0x18001E1D8 (sub_18001E1D8.c)
 *     sub_18001EE90 @ 0x18001EE90 (sub_18001EE90.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001E00C(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v10 = 0LL;
  v7 = sub_18001EE90(a2, &v10);
  v8 = v10;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_7;
  if ( v10 )
  {
    v9 = sub_18001E1D8(a1, v10, *(_QWORD *)(*(_QWORD *)a2 + 24LL), a3);
LABEL_7:
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return v9;
  }
  return (unsigned int)-2147024809;
}
