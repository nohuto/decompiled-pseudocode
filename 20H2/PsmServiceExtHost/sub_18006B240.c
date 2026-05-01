/*
 * XREFs of sub_18006B240 @ 0x18006B240
 * Callers:
 *     sub_180071A28 @ 0x180071A28 (sub_180071A28.c)
 * Callees:
 *     sub_180021E08 @ 0x180021E08 (sub_180021E08.c)
 *     sub_18002A048 @ 0x18002A048 (sub_18002A048.c)
 *     sub_180032C18 @ 0x180032C18 (sub_180032C18.c)
 *     sub_180032CE4 @ 0x180032CE4 (sub_180032CE4.c)
 *     sub_180063CBC @ 0x180063CBC (sub_180063CBC.c)
 *     sub_18006B4F0 @ 0x18006B4F0 (sub_18006B4F0.c)
 */

void __fastcall sub_18006B240(__int64 a1, __int16 a2, int a3)
{
  int v4; // r12d
  __int16 v5; // r14
  __int64 v6; // r15
  int v7; // r8d
  unsigned int v8; // esi
  unsigned int v9; // ebp
  bool v10; // dl
  unsigned __int64 v11; // rbx
  __int16 v12; // r13
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned int v16; // ebp
  unsigned __int64 v17; // rbx
  __int64 v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+90h] [rbp+8h]
  bool v22; // [rsp+A8h] [rbp+20h]

  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v6 = *(_QWORD *)a1;
    LOWORD(v7) = 1;
    v8 = 0;
    v9 = 0;
    v10 = (a2 & 2) != 0;
    LOBYTE(v19) = (v5 & 1) != 0;
    v22 = v10;
    do
    {
      v11 = v6 + ((unsigned __int64)v9 << 6);
      v12 = *(_WORD *)(v11 + 62);
      v13 = *(_QWORD *)(v11 + 48);
      v18 = v13;
      if ( !_bittest16(&v12, v7) && v10 )
      {
        v14 = sub_180021E08(
                v13,
                (unsigned __int64 *)(v11 + 8),
                0LL,
                (unsigned __int64 *)(v6 + ((unsigned __int64)v9 << 6)));
        v13 = v18;
        if ( v14 >= 0 )
          *(_WORD *)(v11 + 62) |= 2u;
      }
      if ( (((v12 & 1) == 0) & (unsigned __int8)v19) != 0 )
      {
        v4 = a3;
        if ( (int)sub_18006B4F0(v13, *(_QWORD *)v11, v11 + 56) >= 0 )
          *(_WORD *)(v11 + 62) |= 1u;
        else
          *(_DWORD *)(v11 + 56) = 101;
      }
      if ( (v5 & 1) == 0 || (int)sub_180063CBC(*(_DWORD *)(v11 + 56), v4) < 0 )
      {
        if ( (v12 & 0x40) == 0 && (v5 & 0x40) != 0 && (int)sub_18002A048(v18, (__int64 *)(v11 + 40)) >= 0 )
          *(_WORD *)(v11 + 62) |= 0x40u;
        if ( v9 != v8 )
        {
          v15 = (unsigned __int64)v8 << 6;
          *(_OWORD *)(v15 + v6) = *(_OWORD *)v11;
          *(_OWORD *)(v15 + v6 + 16) = *(_OWORD *)(v11 + 16);
          *(_OWORD *)(v15 + v6 + 32) = *(_OWORD *)(v11 + 32);
          *(_OWORD *)(v15 + v6 + 48) = *(_OWORD *)(v11 + 48);
        }
        v7 = 1;
        ++v8;
      }
      v10 = v22;
      v9 += v7;
    }
    while ( v9 < *(_DWORD *)(a1 + 36) );
    *(_DWORD *)(a1 + 36) = v8;
    if ( (v5 & 0x2C) != 0 )
    {
      sub_180032CE4(v6, v8, v5 & 0x2C);
      v8 = *(_DWORD *)(a1 + 36);
    }
    v16 = 0;
    if ( v8 )
    {
      do
      {
        v17 = v6 + ((unsigned __int64)v16 << 6);
        if ( (v5 & 0x10) != 0
          && (*(_BYTE *)(v17 + 62) & 0x10) == 0
          && (*(_BYTE *)(v17 + 62) & 8) != 0
          && (int)sub_180032C18(v6 + ((unsigned __int64)v16 << 6)) >= 0 )
        {
          *(_WORD *)(v17 + 62) |= 0x10u;
          if ( v19 )
            *(_WORD *)(v17 + 60) |= 1u;
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a1 + 36) );
      v5 = a2;
    }
  }
  *(_WORD *)(a1 + 44) |= v5;
}
