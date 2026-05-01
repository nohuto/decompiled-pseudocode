/*
 * XREFs of sub_18007D71C @ 0x18007D71C
 * Callers:
 *     sub_180035534 @ 0x180035534 (sub_180035534.c)
 * Callees:
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_18002A3C4 @ 0x18002A3C4 (sub_18002A3C4.c)
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 */

__int64 __fastcall sub_18007D71C(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebp
  __int64 v4; // rdx
  int v5; // r12d
  BOOL v6; // r14d
  BOOL v7; // r15d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 688);
  v3 = 1;
  if ( v1 )
  {
    sub_18000E1BC(*(_QWORD *)(a1 + 688));
    v4 = *(_QWORD *)(a1 + 688);
    v5 = 1;
    v6 = *(_QWORD *)(v4 + 104) < *(_QWORD *)(a1 + 616);
    v7 = *(_DWORD *)(v4 + 92) != 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v5 = 0;
  }
  v8 = 0;
  if ( (*(_BYTE *)(a1 + 772) & 1) != 0 )
  {
    sub_1800468FC(a1, &v12, &v13);
    if ( !sub_18002A3C4(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL)) )
      goto LABEL_13;
    v9 = *(_QWORD *)(a1 + 648);
    if ( (v9 & 0x20000000000000LL) != 0 )
      goto LABEL_13;
    if ( (v12 & 0x80) != 0 || (v13 & 0x80) != 0 )
      v3 = 0;
    if ( (v9 & 0x30000) != 0 || !v3 )
    {
LABEL_13:
      if ( v6 )
      {
        v8 = v12 & 0x188;
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 648);
        if ( (v10 & 0x10000000000LL) != 0 )
        {
          if ( v7 )
            v8 = v12;
        }
        else
        {
          if ( v1 && *(_DWORD *)(v1 + 88) )
            v8 = v12 & 0x100 | 0x80;
          else
            v8 = 384;
          if ( (v10 & 0x2080000000000LL) == 0x2000000000000LL )
            v8 |= (v8 >> 5) & 8;
        }
      }
    }
  }
  else
  {
    v12 = 0;
  }
  if ( v5 )
    sub_18000E244(v1);
  return v8;
}
