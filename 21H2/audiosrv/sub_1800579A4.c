/*
 * XREFs of sub_1800579A4 @ 0x1800579A4
 * Callers:
 *     sub_18000E110 @ 0x18000E110 (sub_18000E110.c)
 *     sub_180045EE0 @ 0x180045EE0 (sub_180045EE0.c)
 *     sub_180055FFC @ 0x180055FFC (sub_180055FFC.c)
 *     sub_1800565B4 @ 0x1800565B4 (sub_1800565B4.c)
 *     sub_180056CA8 @ 0x180056CA8 (sub_180056CA8.c)
 *     sub_180057830 @ 0x180057830 (sub_180057830.c)
 *     sub_18005BC6C @ 0x18005BC6C (sub_18005BC6C.c)
 *     sub_180065FC8 @ 0x180065FC8 (sub_180065FC8.c)
 *     sub_1800667A8 @ 0x1800667A8 (sub_1800667A8.c)
 *     sub_1800C85C8 @ 0x1800C85C8 (sub_1800C85C8.c)
 *     sub_1800FBC38 @ 0x1800FBC38 (sub_1800FBC38.c)
 *     sub_18011020C @ 0x18011020C (sub_18011020C.c)
 *     sub_180113F9C @ 0x180113F9C (sub_180113F9C.c)
 *     sub_18012E520 @ 0x18012E520 (sub_18012E520.c)
 *     sub_18012EC00 @ 0x18012EC00 (sub_18012EC00.c)
 *     sub_18013E5F0 @ 0x18013E5F0 (sub_18013E5F0.c)
 *     sub_18013E810 @ 0x18013E810 (sub_18013E810.c)
 *     sub_180140028 @ 0x180140028 (sub_180140028.c)
 *     sub_18014059C @ 0x18014059C (sub_18014059C.c)
 *     sub_1801419F8 @ 0x1801419F8 (sub_1801419F8.c)
 *     sub_1801426AC @ 0x1801426AC (sub_1801426AC.c)
 *     sub_180142900 @ 0x180142900 (sub_180142900.c)
 *     sub_180142A90 @ 0x180142A90 (sub_180142A90.c)
 *     sub_180143284 @ 0x180143284 (sub_180143284.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800579A4(_QWORD *a1, __int64 a2)
{
  if ( !a1 )
    return 0LL;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = a2;
  return a2;
}
