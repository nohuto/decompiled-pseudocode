/*
 * XREFs of sub_1800651D0 @ 0x1800651D0
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_180065238 @ 0x180065238 (sub_180065238.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800651D0(__int64 *a1)
{
  void *v2; // rax
  void *v3; // rbx
  __int64 v4; // rbx

  *a1 = 0LL;
  v2 = (void *)sub_18006A18C(88LL, &unk_18019F848);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x58uLL);
    v4 = sub_180065238(v3);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
  }
  return a1;
}
