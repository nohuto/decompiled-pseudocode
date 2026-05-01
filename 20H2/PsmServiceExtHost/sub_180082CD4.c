/*
 * XREFs of sub_180082CD4 @ 0x180082CD4
 * Callers:
 *     sub_180083178 @ 0x180083178 (sub_180083178.c)
 * Callees:
 *     sub_180082A4C @ 0x180082A4C (sub_180082A4C.c)
 *     sub_180082C2C @ 0x180082C2C (sub_180082C2C.c)
 */

__int64 __fastcall sub_180082CD4(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  char v7; // bl
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // rax

  result = sub_180082C2C(a1, *(_QWORD *)(a2 + 24), a3);
  v7 = 0;
  if ( (int)result < 0 )
  {
    v8 = a1 + 16;
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 24) - 32LL);
    v10 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
    {
      if ( v10 )
        v10 ^= v8;
      else
        v10 = 0LL;
    }
    v11 = *(_BYTE *)(v8 + 8) & 1;
    if ( v10 )
    {
      while ( 1 )
      {
        sub_180082A4C();
        if ( v12 < 0 )
        {
          v13 = *(_QWORD *)v10;
          if ( v11 )
          {
            if ( !v13 )
              break;
            v13 ^= v10;
          }
          if ( !v13 )
            break;
        }
        else
        {
          v13 = *(_QWORD *)(v10 + 8);
          if ( v11 )
          {
            if ( !v13 )
              goto LABEL_12;
            v13 ^= v10;
          }
          if ( !v13 )
          {
LABEL_12:
            v7 = 1;
            break;
          }
        }
        v10 = v13;
      }
    }
    LOBYTE(v9) = v7;
    result = RtlRbInsertNodeEx(v8, v10, v9, a2);
    *a3 = a2;
  }
  return result;
}
