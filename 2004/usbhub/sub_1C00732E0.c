/*
 * XREFs of sub_1C00732E0 @ 0x1C00732E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C00732E0(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __m128 *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r13
  unsigned int v7; // ebx
  __int64 v9; // rbp
  unsigned int v10; // edi
  __int64 v11; // rax
  char **v12; // r15
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  char *v15; // rcx
  __int32 *v16; // rsi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // rdi
  _DWORD *v20; // rdx
  bool v21; // zf
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a1 <= 3u )
    return (unsigned int)-1073741808;
  if ( a1 > 5u )
  {
    if ( a1 <= 7u )
      return v7;
    if ( a1 == 8 )
    {
      v9 = a5;
      v10 = 0;
      v11 = a5;
      v12 = *(char ***)(a5 + 32);
      do
      {
        v11 = *(_QWORD *)(v11 + 16);
        ++v10;
      }
      while ( v11 );
      if ( v10 > 0x3F )
        return (unsigned int)-1073741811;
      v13 = 32 * v10 + 24;
      if ( v12 )
      {
        v14 = 32 * v10 + 24;
        v13 += *(unsigned __int16 *)v12 + 2;
      }
      else
      {
        v14 = 0;
      }
      if ( v13 > a3 )
      {
        v7 = -1073741789;
        if ( a3 >= 4 )
        {
          a4->m128_i32[0] = v13;
          *v6 = 4;
        }
      }
      else
      {
        sub_1C001D340(a4, 0, a3);
        a4->m128_i32[0] = v13;
        a4->m128_i32[2] = v14;
        a4[1].m128_i32[0] = v10;
        if ( v12 )
        {
          v15 = (char *)a4 + v14;
          *(_WORD *)v15 = *(_WORD *)v12;
          sub_1C001D080(v15 + 2, v12[1], *(unsigned __int16 *)v12);
        }
        if ( v10 )
        {
          v16 = &a4[2].m128_i32[2];
          v17 = v10;
          do
          {
            v18 = *(_OWORD *)*(_QWORD *)(v9 + 8);
            *v16 = 528384;
            v16 += 8;
            *((_OWORD *)v16 - 3) = v18;
            *(_BYTE *)(v9 + 41) = 0;
            *(_DWORD *)(v9 + 44) = 0;
            v9 = *(_QWORD *)(v9 + 16);
            --v17;
          }
          while ( v17 );
        }
        *v6 = v13;
      }
      return v7;
    }
    return (unsigned int)-1073741808;
  }
  v19 = a5;
  v24 = 0;
  LODWORD(a6) = 0;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  do
  {
    v20 = *(_DWORD **)(v19 + 8);
    if ( *v20 == a4[1].m128_i32[2]
      && v20[1] == a4[1].m128_i32[3]
      && v20[2] == a4[2].m128_i32[0]
      && v20[3] == a4[2].m128_i32[1] )
    {
      break;
    }
    v19 = *(_QWORD *)(v19 + 16);
  }
  while ( v19 );
  if ( !v19 )
    return (unsigned int)-1073741163;
  if ( a1 == 5 )
  {
    *(_DWORD *)(v19 + 44) = 0;
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_BYTE *)(v19 + 41) = 0;
  }
  else
  {
    v21 = dword_1C006B738 == 2;
    v23 = a4->m128_u64[1];
    *(_QWORD *)(v19 + 24) = v23;
    if ( v21 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, __m128 *))qword_1C006B740)(
                            3LL,
                            &v24,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v19 + 41) = v24;
      return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, __m128 *))qword_1C006B740)(
                             2LL,
                             v19 + 44,
                             4LL,
                             &a6,
                             a4);
    }
    else
    {
      *(_DWORD *)(v19 + 44) = HIDWORD(v23);
      *(_BYTE *)(v19 + 41) = BYTE2(v23);
    }
  }
  return v7;
}
