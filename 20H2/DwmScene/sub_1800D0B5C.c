/*
 * XREFs of sub_1800D0B5C @ 0x1800D0B5C
 * Callers:
 *     sub_1800D0CC4 @ 0x1800D0CC4 (sub_1800D0CC4.c)
 * Callees:
 *     sub_18001D118 @ 0x18001D118 (sub_18001D118.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_3 @ 0x1800D0E20 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_3.c)
 *     memset @ 0x18011E09A (memset.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void *__fastcall sub_1800D0B5C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  _QWORD *v8; // r14
  __int64 v9; // r15
  size_t v10; // rbx
  const void *v11; // rdx
  char *v12; // rbx
  size_t v13; // r8
  char *v14; // rcx
  void *result; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  char v21[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a1[2];
  v5 = 1LL;
  if ( v4 )
    v5 = v4;
  while ( 1 )
  {
    v6 = v5 - v4;
    if ( v5 - v4 >= a2 && v5 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v5 < v5 )
      std::vector<void *>::_Xlen(a1);
    v5 *= 2LL;
  }
  v7 = a1[3] >> 1;
  v8 = sub_18001D118((__int64)v21, v5);
  v9 = 8 * v7;
  v10 = 8LL * a1[2] - 8 * v7;
  memmove(&v8[v7], (const void *)(a1[1] + 8 * v7), v10);
  v11 = (const void *)a1[1];
  v12 = (char *)&v8[v7] + v10;
  if ( v7 > v6 )
  {
    memmove(v12, v11, 8 * v6);
    memmove(v8, (const void *)(8 * v6 + a1[1]), v9 - 8 * v6);
    v14 = (char *)v8 + v9 - 8 * v6;
    v13 = 8 * v6;
  }
  else
  {
    memmove(v12, v11, 8 * v7);
    memset(&v12[v9], 0, 8 * (v6 - v7));
    v13 = 8 * v7;
    v14 = (char *)v8;
  }
  result = memset(v14, 0, v13);
  v16 = a1[1];
  if ( v16 )
  {
    v17 = 8LL * a1[2];
    if ( v17 >= 0x1000 )
    {
      v18 = *(_QWORD *)(v16 - 8);
      v19 = v17 + 39;
      v20 = v16 - v18;
      if ( (unsigned __int64)(v20 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v20, v19);
        __debugbreak();
      }
      v16 = v18;
    }
    result = (void *)j_j__o_free(v16);
  }
  a1[2] += v6;
  a1[1] = v8;
  return result;
}
