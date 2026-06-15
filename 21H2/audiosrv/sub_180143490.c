/*
 * XREFs of sub_180143490 @ 0x180143490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E7048 @ 0x1800E7048 (sub_1800E7048.c)
 */

__int64 __fastcall sub_180143490(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rbp
  __int64 v6; // rdx
  int v7; // eax

  v2 = 0;
  v3 = a1 + 24;
  if ( *(_QWORD *)(a1 + 24) && a2 != *(_DWORD *)(a1 + 52) )
  {
    sub_1800E7048((__int64 *)(a1 + 24), 0LL);
    LOBYTE(v6) = a2 != 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_18019EE58 + 56LL))(
           qword_18019EE58,
           v6,
           v3);
    if ( v7 >= 0 )
      *(_DWORD *)(a1 + 52) = a2;
    else
      return (unsigned int)v7;
  }
  return v2;
}
