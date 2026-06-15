/*
 * XREFs of sub_180045570 @ 0x180045570
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180045570(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // edi
  __int64 v5; // rbp
  char *v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r15
  char *v10; // rax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  *(_DWORD *)a2 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 && !*(_DWORD *)(v5 + 8) )
  {
    v7 = *(char **)(v5 + 16);
    if ( v7 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)&v7[2 * v8] );
      v9 = v8 + 1;
      *(_QWORD *)(a2 + 8) = 0LL;
      if ( v8 + 1 >= v8 && is_mul_ok(v9, 2uLL) )
      {
        v10 = (char *)CoTaskMemAlloc(2 * v9);
        *(_QWORD *)(a2 + 8) = v10;
        if ( v10 )
          sub_18002A0F0(v10, v8 + 1, v7, v8);
        else
          v4 = -2147024882;
      }
      else
      {
        v4 = -2147024362;
      }
    }
    else
    {
      v11 = 0LL;
      sub_1800461B8(&v11);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)&dwCreationFlags + 32LL))(
             *(_QWORD *)&dwCreationFlags,
             0LL,
             *(unsigned int *)(v5 + 24),
             &v11) >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, a2 + 8);
      sub_1800461B8(&v11);
    }
    LOBYTE(v2) = *(_QWORD *)(a2 + 8) != 0LL;
    *(_DWORD *)a2 = v2;
  }
  return v4;
}
