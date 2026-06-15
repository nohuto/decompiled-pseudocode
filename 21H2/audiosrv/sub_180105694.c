/*
 * XREFs of sub_180105694 @ 0x180105694
 * Callers:
 *     sub_180105764 @ 0x180105764 (sub_180105764.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180105694(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  ppunkMarshal = 0LL;
  v1 = (__int64 *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = &off_180146ED0;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, _DWORD *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      dword_18015B8E0,
      v1);
  }
  sub_1800461B8((__int64 *)&ppunkMarshal);
  v4 = qword_18019E418;
  *(_QWORD *)a1 = &off_180155958;
  *(_QWORD *)(a1 + 8) = off_1801559A0;
  *(_QWORD *)(a1 + 16) = off_180155910;
  *(_DWORD *)(a1 + 52) = 1;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
