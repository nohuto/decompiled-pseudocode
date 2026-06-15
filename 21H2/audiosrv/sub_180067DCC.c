/*
 * XREFs of sub_180067DCC @ 0x180067DCC
 * Callers:
 *     sub_180067D30 @ 0x180067D30 (sub_180067D30.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180067DCC(__int64 *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  __int64 v4; // rbx

  v1 = 0;
  *a1 = 0LL;
  v3 = sub_18006A18C(24LL, &unk_18019F848);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 12) = 1;
    *(_DWORD *)(v3 + 20) = 4;
    *(_QWORD *)v3 = off_180149778;
    sub_180053F40(v3);
    *a1 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
