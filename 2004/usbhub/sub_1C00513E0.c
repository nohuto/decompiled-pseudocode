/*
 * XREFs of sub_1C00513E0 @ 0x1C00513E0
 * Callers:
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 *     sub_1C0053A08 @ 0x1C0053A08 (sub_1C0053A08.c)
 *     sub_1C0053B04 @ 0x1C0053B04 (sub_1C0053B04.c)
 *     sub_1C00552B8 @ 0x1C00552B8 (sub_1C00552B8.c)
 */

__int64 __fastcall sub_1C00513E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v5; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  __m128 *PoolWithTag; // rax
  char *v9; // r14
  __int32 v10; // eax
  __int32 v11; // edi
  unsigned int v12; // r12d
  unsigned __int32 v13; // r8d
  unsigned int v14; // eax
  _WORD *v15; // rsi
  char *v16; // rdi
  __int64 i; // rcx
  __int32 v18; // edi
  char v20; // [rsp+30h] [rbp-30h]
  __int32 v21; // [rsp+30h] [rbp-30h]
  __int32 v22; // [rsp+40h] [rbp-20h]
  unsigned __int16 v23[2]; // [rsp+50h] [rbp-10h] BYREF
  __int32 v24; // [rsp+54h] [rbp-Ch] BYREF
  __int32 v25; // [rsp+58h] [rbp-8h]
  int v26; // [rsp+A8h] [rbp+48h]
  char v28; // [rsp+B8h] [rbp+58h] BYREF

  v26 = a2;
  v4 = 0;
  v24 = 0;
  v5 = a2;
  v6 = sub_1C0011220(a2);
  v7 = v6;
  if ( (v6[358] & 0x800) == 0 && *((_BYTE *)v6 + 1416) )
  {
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, 0xFFuLL, 0x42554855u);
    v9 = (char *)PoolWithTag;
    if ( PoolWithTag )
      sub_1C001D340(PoolWithTag, 0, 0xFFuLL);
    v28 = 0;
    if ( v9 )
    {
      v20 = *((_BYTE *)v7 + 1416);
      v23[0] = 255;
      v10 = sub_1C00552B8(a1, v5, (unsigned int)&v24, (_DWORD)v9, (__int64)v23, 1033, v20);
      v25 = v10;
      v11 = v10;
      if ( (v10 & 0xC0000000) == 0xC0000000 )
      {
        sub_1C004A608(a1, *((_WORD *)v7 + 714), 0x59u, v9, v23[0], v10, v24, aIdstringC, 1337, 0);
      }
      else
      {
        v12 = v23[0];
        if ( (unsigned __int8)sub_1C0053B04(3221225472LL, v9, v23[0], &v24) )
        {
          v14 = ((unsigned __int8)*v9 >> 1) - 1;
          if ( (unsigned __int8)*v9 >> 1 != 1 )
          {
            v15 = v9 + 2;
            v16 = v9;
            for ( i = v14; i; --i )
            {
              *(_WORD *)v16 = *v15++;
              v16 += 2;
            }
            v18 = v25;
            *(_WORD *)&v9[2 * v14] = 0;
            *(_DWORD *)(a3 + 4) = v12;
            *(_QWORD *)(a3 + 8) = v9;
            if ( !(unsigned __int8)sub_1C0053A08(a1, v26, a3, (unsigned int)&v24, (__int64)&v28) )
            {
              sub_1C004A608(a1, *((_WORD *)v7 + 714), 0x25u, v9, v12, v18, v24, aIdstringC, 1402, 0);
              sub_1C0050D40(a3);
              if ( v28 )
              {
                v7[705] = 1073807369;
                return (unsigned int)-1073741811;
              }
            }
            return v4;
          }
          v13 = 59;
          v22 = 1423;
          v21 = v24;
        }
        else
        {
          v13 = 38;
          v22 = 1350;
          v21 = v24;
        }
        sub_1C004A608(a1, *((_WORD *)v7 + 714), v13, v9, v12, v11, v21, aIdstringC, v22, 0);
      }
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v4;
  }
  return 0LL;
}
