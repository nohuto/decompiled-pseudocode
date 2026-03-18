/*
 * XREFs of sub_1C002BE50 @ 0x1C002BE50
 * Callers:
 *     sub_1C00298F8 @ 0x1C00298F8 (sub_1C00298F8.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002B590 @ 0x1C002B590 (sub_1C002B590.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C002BE50(__int64 a1, unsigned __int16 **a2)
{
  int v4; // ebp
  unsigned __int16 v5; // ax
  unsigned int v6; // ebx
  __m128 *PoolWithTag; // rax
  unsigned __int16 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned int v11; // r10d
  __int64 v12; // r9
  unsigned __int16 v13; // bx
  int v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+40h] [rbp-28h]
  unsigned __int16 v17; // [rsp+78h] [rbp+10h] BYREF

  v4 = -1;
  sub_1C000F050(a1);
  *a2 = 0LL;
  v5 = 255;
  v17 = 255;
  while ( 1 )
  {
    v6 = v5;
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v5, 0x42554855u);
    v8 = (unsigned __int16 *)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    sub_1C001D340(PoolWithTag, 0, v6);
    v9 = (int)sub_1C002B590(a1, &v17, (__int64)v8, 2, v15, 0);
    sub_1C000FD80(a1, 8, 1734894385, v17, v9);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
      goto LABEL_12;
    if ( v11 < 9 )
    {
      v16 = 3945;
      goto LABEL_11;
    }
    sub_1C000FD80(a1, 8, 1734894386, v10, v8[1]);
    if ( v8[1] <= (unsigned __int16)v11 )
    {
      sub_1C000FD80(a1, 8, 1734894387, (__int64)v8, v9);
      *a2 = v8;
      return (unsigned int)v9;
    }
    if ( !v4 )
    {
      v16 = 3963;
LABEL_11:
      LODWORD(v9) = -1073741823;
      sub_1C004A608(a1, 0, 13, (_DWORD)v8, v11, -1073741823, -1, (__int64)aHubC, v16, 0);
LABEL_12:
      ExFreePoolWithTag(v8, 0);
      return (unsigned int)v9;
    }
    ++v4;
    sub_1C000FD80(a1, 8, 1734894418, v12, v9);
    v17 = v8[1];
    v13 = v17;
    ExFreePoolWithTag(v8, 0);
    v5 = v13;
  }
}
