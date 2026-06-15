/*
 * XREFs of sub_18013A5F8 @ 0x18013A5F8
 * Callers:
 *     sub_18013A6A4 @ 0x18013A6A4 (sub_18013A6A4.c)
 * Callees:
 *     sub_180139A2C @ 0x180139A2C (sub_180139A2C.c)
 *     sub_180139C34 @ 0x180139C34 (sub_180139C34.c)
 */

__int64 __fastcall sub_18013A5F8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  BOOL v7; // r10d
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v6 = sub_180139A2C(a3);
  if ( v6 )
  {
    while ( !v7 )
    {
      v8 = sub_180139C34(a2, *(unsigned __int16 **)v6, &v12);
      v9 = *(_QWORD *)(v6 + 16);
      v7 = v8 != 0;
      if ( !v9 )
      {
        v9 = 0LL;
        v10 = (unsigned int)(*(_DWORD *)(v6 + 24) % *(_DWORD *)(a3 + 16) + 1);
        do
        {
          if ( (unsigned int)v10 >= *(_DWORD *)(a3 + 16) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) )
            v9 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v10);
          v10 = (unsigned int)(v10 + 1);
        }
        while ( !v9 );
      }
      v6 = v9;
      if ( !v9 )
      {
        if ( !v8 )
          return v3;
        return (unsigned int)-2147024713;
      }
    }
    return (unsigned int)-2147024713;
  }
  return v3;
}
