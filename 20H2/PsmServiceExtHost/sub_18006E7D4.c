/*
 * XREFs of sub_18006E7D4 @ 0x18006E7D4
 * Callers:
 *     sub_18006EF94 @ 0x18006EF94 (sub_18006EF94.c)
 * Callees:
 *     sub_18006E308 @ 0x18006E308 (sub_18006E308.c)
 *     sub_18006E328 @ 0x18006E328 (sub_18006E328.c)
 */

__int64 __fastcall sub_18006E7D4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  char v4; // bl
  __int64 v5; // r15
  unsigned int v7; // r12d
  __int64 v8; // rdi
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // r12d
  __int64 v13; // rdi
  int v14; // ebp
  __int64 v15; // rax

  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 56);
  v7 = *(_DWORD *)(v5 + 108);
  v8 = *(_QWORD *)(v3 + 72);
  if ( (*(_BYTE *)(v3 + 80) & 1) != 0 )
  {
    if ( v8 )
      v8 ^= v3 + 72;
    else
      v8 = 0LL;
  }
  LOBYTE(a3) = 0;
  v9 = *(_BYTE *)(v3 + 80) & 1;
  if ( v8 )
  {
    while ( 1 )
    {
      if ( (int)sub_18006E308(v7, v8) < 0 )
      {
        v10 = *(_QWORD *)v8;
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_17;
          v10 ^= v8;
        }
        if ( !v10 )
        {
LABEL_17:
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v8 + 8);
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_11;
          v10 ^= v8;
        }
        if ( !v10 )
        {
LABEL_11:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v8 = v10;
    }
  }
  RtlRbInsertNodeEx(v3 + 72, v8, a3, a1);
  v12 = *(_DWORD *)(v3 + 108);
  v13 = *(_QWORD *)(v5 + 72);
  if ( (*(_BYTE *)(v5 + 80) & 1) != 0 )
  {
    if ( v13 )
      v13 ^= v5 + 72;
    else
      v13 = 0LL;
  }
  v14 = *(_BYTE *)(v5 + 80) & 1;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( (int)sub_18006E328(v12, v13) < 0 )
      {
        v15 = *(_QWORD *)v13;
        if ( v14 )
        {
          if ( !v15 )
            break;
          v15 ^= v13;
        }
        if ( !v15 )
          break;
      }
      else
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( v14 )
        {
          if ( !v15 )
            goto LABEL_28;
          v15 ^= v13;
        }
        if ( !v15 )
        {
LABEL_28:
          v4 = 1;
          break;
        }
      }
      v13 = v15;
    }
  }
  LOBYTE(v11) = v4;
  return RtlRbInsertNodeEx(v5 + 72, v13, v11, a1 + 24);
}
