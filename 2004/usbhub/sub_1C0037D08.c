/*
 * XREFs of sub_1C0037D08 @ 0x1C0037D08
 * Callers:
 *     sub_1C0037720 @ 0x1C0037720 (sub_1C0037720.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C00319B4 @ 0x1C00319B4 (sub_1C00319B4.c)
 *     sub_1C0038340 @ 0x1C0038340 (sub_1C0038340.c)
 *     sub_1C003ABE4 @ 0x1C003ABE4 (sub_1C003ABE4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0053050 @ 0x1C0053050 (sub_1C0053050.c)
 */

__int64 __fastcall sub_1C0037D08(__int64 a1, __int64 a2)
{
  int v3; // r12d
  _DWORD *v4; // rbx
  unsigned __int16 v5; // r14
  unsigned int v6; // eax
  __m128 *PoolWithTag; // rax
  __int64 v8; // rdi
  int v9; // r15d
  char v11; // al
  unsigned __int8 *v12; // rcx
  _BYTE *v13; // r8
  char v14; // al
  int v15; // eax
  char v16; // cl
  unsigned __int8 *v17; // rax
  unsigned __int8 *v18; // r14
  unsigned __int8 *v19; // rax
  int v20; // [rsp+20h] [rbp-40h]
  int v21; // [rsp+20h] [rbp-40h]
  int v22; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+50h] BYREF
  int v25; // [rsp+B8h] [rbp+58h] BYREF

  v25 = 0;
  v3 = 0;
  v4 = sub_1C0011220(a2);
  v22 = 18;
  v5 = 255;
  v6 = 255;
  v24 = 255;
  while ( 1 )
  {
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v6, 0x42554855u);
    v8 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    sub_1C001D340(PoolWithTag, 0, v24);
    v9 = sub_1C003ABE4(a1, *((_QWORD *)v4 + 145), (int)v4 + 1400, (unsigned int)&v22, v8, (__int64)&v24);
    if ( v9 < 0 || v24 >= *(unsigned __int16 *)(v8 + 2) || v3 )
      break;
    v5 = *(_WORD *)(v8 + 2);
    v24 = v5;
    ExFreePoolWithTag((PVOID)v8, 0);
    v6 = v24;
    v3 = 1;
  }
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    v4[705] = 1073807367;
    sub_1C0012400(a1, 0LL, 0LL, &stru_1C00628B0);
    sub_1C004A608(a1, *((unsigned __int16 *)v4 + 714), 36, v8, v24, v9, -1, (__int64)aBusC, 3773, 0);
    ExFreePoolWithTag((PVOID)v8, 0);
    return (unsigned int)v9;
  }
  v9 = sub_1C0038340(a1, a2);
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    sub_1C0012400(a1, 0LL, 0LL, &stru_1C00628E0);
    return (unsigned int)v9;
  }
  if ( (unsigned __int8)sub_1C0053050(v8, v24, &v25, dword_1C006B630 != 0) )
  {
    if ( v9 >= 0 && v5 < *(_WORD *)(v8 + 2) )
      *(_WORD *)(v8 + 2) = v5;
    if ( *((_BYTE *)v4 + 1417) > 1u )
    {
      v4[701] |= 0x80u;
      if ( *((_BYTE *)v4 + 1417) > 1u && *(_BYTE *)(v8 + 4) > 1u )
      {
        v11 = *((_BYTE *)v4 + 1404);
        if ( !v11 || v11 == -17 && *((_BYTE *)v4 + 1405) == 2 && *((_BYTE *)v4 + 1406) == 1 )
        {
          v12 = (unsigned __int8 *)(v8 + 9);
          while ( (unsigned __int64)v12 < v8 + (unsigned __int64)*(unsigned __int16 *)(v8 + 2) )
          {
            v13 = v12;
            v12 += *v12;
            v14 = v13[1];
            if ( v14 == 11 && v13[4] == 1 || v14 == 4 && v13[5] == 1 )
            {
              v4[355] |= 0x20u;
              break;
            }
          }
        }
      }
    }
    v15 = v4[355];
    if ( (v15 & 0x20) == 0
      && *((_BYTE *)v4 + 1417) == 1
      && *(_BYTE *)(v8 + 4) > 1u
      && ((v16 = *((_BYTE *)v4 + 1404)) == 0 || v16 == -17 && *((_BYTE *)v4 + 1405) == 2 && *((_BYTE *)v4 + 1406) == 1) )
    {
      v4[355] = v15 | 0x20;
    }
    else
    {
      v17 = sub_1C00319B4(a1, v8, (unsigned __int8 *)v8, -1, v20, -1, -1, -1);
      v18 = v17;
      if ( v17 )
      {
        if ( v17[5] == 9 )
        {
          v4[355] |= 4u;
        }
        else if ( *((_WORD *)v4 + 701) > 0x200u && (v4[358] & 0x10000) == 0 )
        {
          v19 = sub_1C00319B4(a1, v8, v17, v17[2], v21, 8, 6, 98);
          if ( v19 )
          {
            if ( v4[292] == 2 )
            {
              v4[355] |= 0x200000u;
              v18 = v19;
            }
          }
        }
        *(_QWORD *)((char *)v4 + 2433) = *(_QWORD *)v18;
        *((_BYTE *)v4 + 2441) = v18[8];
      }
    }
    if ( (*(_BYTE *)(v8 + 7) & 0x20) != 0 )
      v4[355] |= 0x100u;
    *((_QWORD *)v4 + 299) = v8;
    return (unsigned int)v9;
  }
  v4[705] = 1073807364;
  sub_1C0012400(a1, 0LL, 0LL, &stru_1C00626E0);
  sub_1C004A608(a1, *((unsigned __int16 *)v4 + 714), 36, v8, v24, -1073741811, v25, (__int64)aBusC, 3807, 0);
  ExFreePoolWithTag((PVOID)v8, 0);
  return 3221225485LL;
}
