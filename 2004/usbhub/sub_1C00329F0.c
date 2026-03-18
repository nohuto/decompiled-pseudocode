/*
 * XREFs of sub_1C00329F0 @ 0x1C00329F0
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C00329F0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __m128 *PoolWithTag; // rax
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // edi
  void *v12; // rcx
  _BYTE v13[2]; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+42h] [rbp-26h]
  __int16 v15; // [rsp+46h] [rbp-22h]
  __int16 v16; // [rsp+80h] [rbp+18h] BYREF

  v6 = sub_1C0011220(a2);
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, *(unsigned __int16 *)(a3 + 4), 0x42554855u);
  *((_QWORD *)v6 + 355) = PoolWithTag;
  v8 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, *(unsigned __int16 *)(a3 + 4));
    v8 = *((_QWORD *)v6 + 355);
  }
  if ( v8 )
  {
    v10 = *((_QWORD *)v6 + 148);
    v13[1] = *(_BYTE *)(a3 + 6);
    v15 = *(_WORD *)(a3 + 4);
    v16 = v15;
    v13[0] = -64;
    v14 = 458752;
    v11 = sub_1C00177A8(v10, a2, v13, v8, &v16);
    if ( v11 >= 0 )
    {
      *((_WORD *)v6 + 1414) = v16;
    }
    else
    {
      sub_1C000FD80(a1, 4, 1297297969, 0LL, 0LL);
      v12 = (void *)*((_QWORD *)v6 + 355);
      *((_WORD *)v6 + 1414) = 0;
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0);
        *((_QWORD *)v6 + 355) = 0LL;
      }
    }
    return (unsigned int)v11;
  }
  else
  {
    sub_1C000FD80(a1, 4, 1297297968, 0LL, 0LL);
    result = 3221225626LL;
    *((_WORD *)v6 + 1414) = 0;
  }
  return result;
}
