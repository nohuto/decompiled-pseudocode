/*
 * XREFs of sub_1C0051210 @ 0x1C0051210
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C0055FD0 @ 0x1C0055FD0 (sub_1C0055FD0.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 *     sub_1C0051670 @ 0x1C0051670 (sub_1C0051670.c)
 *     sub_1C0053B04 @ 0x1C0053B04 (sub_1C0053B04.c)
 *     sub_1C00552B8 @ 0x1C00552B8 (sub_1C00552B8.c)
 */

__int64 __fastcall sub_1C0051210(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // r13
  __m128 *PoolWithTag; // rax
  char *v12; // rbx
  __int32 v13; // edi
  __int64 v14; // rcx
  int v15; // r15d
  char *v16; // rcx
  unsigned int v17; // eax
  _WORD *v18; // rsi
  char *v19; // rdi
  __int64 i; // rcx
  char v21; // [rsp+30h] [rbp-58h]
  __int32 v22[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v23; // [rsp+A8h] [rbp+20h] BYREF

  v22[0] = 0;
  v9 = sub_1C0011220(a2);
  if ( *(_QWORD *)(a4 + 8) && *(_WORD *)a4 == a3 )
    return 0LL;
  if ( !(unsigned __int8)sub_1C0051670(v8, a2, a3) )
    return 3221225659LL;
  sub_1C0050D40(a4);
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, 0xFFuLL, 0x42554855u);
  v12 = (char *)PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, 0xFFuLL);
    v21 = *((_BYTE *)v9 + 1415);
    v23 = 255;
    v13 = sub_1C00552B8(a1, a2, (unsigned int)v22, (_DWORD)v12, (__int64)&v23, a3, v21);
    v14 = v13 & 0xC0000000;
    if ( (_DWORD)v14 == -1073741824 || (v15 = v23, !(unsigned __int8)sub_1C0053B04(v14, v12, v23, v22)) )
    {
      sub_1C004A608(a1, *((_WORD *)v9 + 714), 0x26u, v12, v23, v13, v22[0], aIdstringC, 1560, 0);
      v16 = v12;
    }
    else
    {
      v16 = v12;
      v17 = ((unsigned __int8)*v12 >> 1) - 1;
      if ( (unsigned __int8)*v12 >> 1 != 1 )
      {
        v18 = v12 + 2;
        v19 = v12;
        for ( i = v17; i; --i )
        {
          *(_WORD *)v19 = *v18++;
          v19 += 2;
        }
        *(_WORD *)&v12[2 * v17] = 0;
        *(_DWORD *)(a4 + 4) = v15;
        *(_QWORD *)(a4 + 8) = v12;
        *(_WORD *)a4 = a3;
        return 0LL;
      }
    }
    ExFreePoolWithTag(v16, 0);
    return 3221225659LL;
  }
  return 3221225626LL;
}
