/*
 * XREFs of sub_18010C780 @ 0x18010C780
 * Callers:
 *     sub_180072D4C @ 0x180072D4C (sub_180072D4C.c)
 *     sub_18010C6F8 @ 0x18010C6F8 (sub_18010C6F8.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18010C780(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  *a1 = off_180154C70;
  a1[1] = &off_180146ED0;
  v2 = a1 + 4;
  a1[4] = 0LL;
  ppunkMarshal = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, _DWORD *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      dword_18015B8E0,
      v2);
  }
  sub_1800461B8((__int64 *)&ppunkMarshal);
  return a1;
}
