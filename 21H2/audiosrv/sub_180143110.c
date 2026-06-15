/*
 * XREFs of sub_180143110 @ 0x180143110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180143110(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]
  int v8; // [rsp+78h] [rbp+10h] BYREF
  char v9; // [rsp+80h] [rbp+18h] BYREF

  v8 = 0;
  if ( !a2 )
    return 2147500035LL;
  v4 = *(_QWORD *)(a1 + 32);
  v6 = 4;
  v5 = xmmword_180178F08;
  v7 = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *, int, char *))(*(_QWORD *)v4 + 24LL))(
             v4,
             &v5,
             24LL,
             &v8,
             4,
             &v9);
  if ( (int)result >= 0 )
    *a2 = v8;
  return result;
}
