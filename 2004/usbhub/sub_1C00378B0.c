/*
 * XREFs of sub_1C00378B0 @ 0x1C00378B0
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0053B04 @ 0x1C0053B04 (sub_1C0053B04.c)
 *     sub_1C00552B8 @ 0x1C00552B8 (sub_1C00552B8.c)
 */

__int64 __fastcall sub_1C00378B0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r12d
  _DWORD *v6; // r13
  __m128 *PoolWithTag; // rax
  __m128 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // r8d
  int v13; // r14d
  unsigned __int8 i; // r14
  int v15; // eax
  char v16; // [rsp+30h] [rbp-30h]
  char v17; // [rsp+30h] [rbp-30h]
  _DWORD v18[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v19; // [rsp+A8h] [rbp+48h] BYREF

  v18[0] = 0;
  v5 = a2;
  v6 = sub_1C0011220(a2);
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, 0xFFuLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, 0xFFuLL);
    LODWORD(v9) = 0;
    if ( *(_BYTE *)(a3 + 3) )
    {
      v16 = *(_BYTE *)(a3 + 3);
      v19 = 255;
      v9 = (int)sub_1C00552B8(a1, v5, (unsigned int)v18, (_DWORD)v8, (__int64)&v19, 1033, v16);
      v10 = (unsigned int)v9 & 0xC0000000;
      if ( (_DWORD)v10 == -1073741824 )
      {
        sub_1C004A608(a1, *((unsigned __int16 *)v6 + 714), 140, (_DWORD)v8, v19, v9, v18[0], (__int64)aBusC, 7615, 0);
        v11 = 4678194;
        goto LABEL_5;
      }
      v13 = v19;
      if ( !(unsigned __int8)sub_1C0053B04(v10, v8, v19, v18) )
      {
        sub_1C004A608(a1, *((unsigned __int16 *)v6 + 714), 38, (_DWORD)v8, v13, v9, v18[0], (__int64)aBusC, 7627, 0);
        v11 = 4678195;
        goto LABEL_5;
      }
    }
    for ( i = 0; i < *(_BYTE *)(a3 + 4); ++i )
    {
      if ( *(_BYTE *)(a3 + 4LL * i + 47) )
      {
        v17 = *(_BYTE *)(a3 + 4LL * i + 47);
        v19 = 255;
        v15 = sub_1C00552B8(a1, v5, (unsigned int)v18, (_DWORD)v8, (__int64)&v19, 1033, v17);
        v9 = v15;
        if ( (v15 & 0xC0000000) == 0xC0000000 )
        {
          sub_1C004A608(a1, *((unsigned __int16 *)v6 + 714), 141, (_DWORD)v8, v19, v15, v18[0], (__int64)aBusC, 7652, 0);
          v11 = 4678196;
LABEL_5:
          sub_1C000FD80(a1, 4, v11, 0LL, v9);
          break;
        }
        if ( !(unsigned __int8)sub_1C0053B04(3221225472LL, v8, v19, v18) )
        {
          sub_1C004A608(a1, *((unsigned __int16 *)v6 + 714), 38, (_DWORD)v8, v19, v9, v18[0], (__int64)aBusC, 7664, 0);
          v11 = 4678197;
          goto LABEL_5;
        }
      }
    }
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v9;
  }
  else
  {
    sub_1C000FD80(a1, 4, 4678193, 0LL, 0LL);
    return 3221225626LL;
  }
}
