/*
 * XREFs of sub_1C0038B7C @ 0x1C0038B7C
 * Callers:
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 *     sub_1C002C474 @ 0x1C002C474 (sub_1C002C474.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0038B7C(__int64 a1, __int64 a2, _DWORD *a3)
{
  _WORD *PoolWithTag; // rax
  _WORD *v7; // rax
  int v8; // eax
  __int64 v9; // r15
  int v10; // edi
  unsigned __int16 *v11; // r8
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-40h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v17[2]; // [rsp+58h] [rbp-8h] BYREF
  int v18; // [rsp+5Ah] [rbp-6h]
  __int16 v19; // [rsp+5Eh] [rbp-2h]
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  v20 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PoolType, 0xAuLL, 0x42554855u);
  P = PoolWithTag;
  if ( PoolWithTag && (*(_QWORD *)PoolWithTag = 0LL, PoolWithTag[4] = 0, P) )
  {
    *((_WORD *)P + 2) = 4;
    v7 = P;
    *(_DWORD *)a2 = 0;
    v7[3] = 0;
    *((_WORD *)P + 1) = 0;
    *(_WORD *)P = 0;
    v17[0] = -96;
    *((_BYTE *)P + 8) = 0;
    v17[1] = 0;
    v18 = 0;
    v19 = *((_WORD *)P + 2);
    v8 = sub_1C000A740(a1, (__int64)v17, (__int64)P, (_WORD *)P + 2, v15, &v20);
    v9 = v20;
    v10 = v8;
    sub_1C000FD80(a1, 4, 1365799796, v8, v20);
    v11 = (unsigned __int16 *)P;
    if ( v10 < 0 || *((_WORD *)P + 2) == 4 )
    {
      if ( (v10 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v10) )
      {
        sub_1C000FD80(a1, 4, 1366324018, v11[2], v9);
        sub_1C004A608(a1, 0, 8, (unsigned int)&P, 10, v10, v9, (__int64)aBusC, 1758, 0);
        v11 = (unsigned __int16 *)P;
      }
      if ( v10 >= 0 )
      {
        v13 = v11[1];
        *(_WORD *)(a2 + 2) = v13;
        v14 = *v11;
        *(_WORD *)a2 = v14;
        sub_1C000FD80(a1, 4, 1215329140, v13, v14);
        v11 = (unsigned __int16 *)P;
      }
      if ( a3 )
        *a3 = v9;
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      return (unsigned int)v10;
    }
    else
    {
      sub_1C000FD80(a1, 4, 1366324017, *((unsigned __int16 *)P + 2), v9);
      sub_1C004A608(a1, 0, 9, (unsigned int)&P, 10, v10, v9, (__int64)aBusC, 1745, 0);
      if ( a3 )
        *a3 = v9;
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3221225473LL;
    }
  }
  else
  {
    sub_1C000FD80(a1, 4, 1365795180, 0LL, 0LL);
    if ( a3 )
      *a3 = -1073737728;
    return 3221225626LL;
  }
}
