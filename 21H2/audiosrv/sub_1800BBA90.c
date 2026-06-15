/*
 * XREFs of sub_1800BBA90 @ 0x1800BBA90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_1800B91F4 @ 0x1800B91F4 (sub_1800B91F4.c)
 */

void __fastcall sub_1800BBA90(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  char *v7; // rax
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 **v10; // rcx
  char *v11; // [rsp+68h] [rbp+10h] BYREF

  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 && *(_DWORD *)(a3 + 8) == 1 )
    {
      v4 = *(char **)(a3 + 16);
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)&v4[2 * v5] );
      v6 = v5 + 1;
      if ( v5 + 1 >= v5 && is_mul_ok(v6, 2uLL) )
      {
        v7 = (char *)CoTaskMemAlloc(2 * v6);
        v11 = v7;
        if ( v7 )
        {
          sub_18002A0F0(v7, v5 + 1, v4, v5);
          v8 = *(_QWORD **)a2;
          v9 = sub_1800B91F4(*(_QWORD *)a2, (__int64 *)&v11, *(_QWORD *)(*(_QWORD *)a2 + 8LL));
          v10 = (__int64 **)v8[1];
          if ( v10 )
            *v10 = v9;
          else
            *v8 = v9;
          v8[1] = v9;
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a3 + 8);
  }
  CoTaskMemFree(0LL);
}
