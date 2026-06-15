/*
 * XREFs of sub_18004BC54 @ 0x18004BC54
 * Callers:
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 *     sub_18004AA1C @ 0x18004AA1C (sub_18004AA1C.c)
 *     sub_1800D86F0 @ 0x1800D86F0 (sub_1800D86F0.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004BC54(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( *a2 && (unsigned __int64)(*a2 - 50000LL) > 0xE7EF0 )
  {
    v3 = -2005139386;
    v5 = 8343LL;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    v7 = a2;
    v6 = 0LL;
    DWORD2(v6) = 8;
    LOWORD(v6) = 65;
    v3 = (*(__int64 (__fastcall **)(__int64, void *, __int128 *))(*(_QWORD *)v2 + 48LL))(v2, &unk_18015C4E0, &v6);
    if ( v3 >= 0 )
      return 0LL;
    v5 = 8351LL;
  }
  sub_18004BD84(
    retaddr,
    v5,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (unsigned int)v3);
  return (unsigned int)v3;
}
