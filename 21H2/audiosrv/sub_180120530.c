/*
 * XREFs of sub_180120530 @ 0x180120530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010FD8 @ 0x180010FD8 (sub_180010FD8.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012022C @ 0x18012022C (sub_18012022C.c)
 */

__int64 __fastcall sub_180120530(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v7; // esi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -2147024882;
  v8 = sub_180055F40(0x48uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 0;
    *((_OWORD *)v8 + 1) = 0LL;
    *((_OWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 6) = 0LL;
    *((_BYTE *)v8 + 56) = 0;
    *(_QWORD *)v8 = off_18014AFD0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    *((_QWORD *)v9 + 8) = a1;
    v10 = sub_180010FD8((struct _RTL_CRITICAL_SECTION *)(v9 + 4));
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 56) = 1;
      v10 = 0;
    }
    v7 = 0;
    if ( v10 < 0 )
      v7 = v10;
    if ( v7 || (v7 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, _QWORD *))v9)(v9, a2, a3)) != 0 )
      sub_18012022C(v9);
  }
  return v7;
}
