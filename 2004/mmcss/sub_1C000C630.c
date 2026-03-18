/*
 * XREFs of sub_1C000C630 @ 0x1C000C630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 *     sub_1C0003180 @ 0x1C0003180 (sub_1C0003180.c)
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C000C630(char a1, __int64 a2, unsigned int a3, __m128 *a4, __int64 a5, unsigned int *a6)
{
  unsigned int *v6; // r13
  unsigned int v7; // ebx
  __int64 v10; // r14
  unsigned int v11; // edi
  __int64 v12; // rax
  char **v13; // r15
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  char *v16; // rcx
  __int8 *v17; // rsi
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rdi
  _DWORD *v21; // rcx
  bool v22; // zf
  unsigned __int64 v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  switch ( a1 )
  {
    case 4:
    case 5:
      v20 = a5;
      v25 = 0;
      LODWORD(a6) = 0;
      if ( a5 )
      {
        if ( a3 < 0x30 )
          goto LABEL_5;
        while ( 1 )
        {
          v21 = *(_DWORD **)(v20 + 8);
          if ( *v21 == a4[1].m128_i32[2]
            && v21[1] == a4[1].m128_i32[3]
            && v21[2] == a4[2].m128_i32[0]
            && v21[3] == a4[2].m128_i32[1] )
          {
            break;
          }
          v20 = *(_QWORD *)(v20 + 16);
          if ( !v20 )
            goto LABEL_19;
        }
        if ( a1 == 5 )
        {
          *(_DWORD *)(v20 + 44) = 0;
          *(_QWORD *)(v20 + 24) = 0LL;
          *(_BYTE *)(v20 + 41) = 0;
        }
        else
        {
          v22 = dword_1C0007318 == 2;
          v24 = a4->m128_u64[1];
          *(_QWORD *)(v20 + 24) = v24;
          if ( v22 )
          {
            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, __m128 *))qword_1C0007340)(
                                  3LL,
                                  &v25,
                                  4LL,
                                  &a6,
                                  a4) )
              *(_BYTE *)(v20 + 41) = v25;
            v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, __m128 *))qword_1C0007340)(
                   2LL,
                   v20 + 44,
                   4LL,
                   &a6,
                   a4);
          }
          else
          {
            *(_DWORD *)(v20 + 44) = HIDWORD(v24);
            *(_BYTE *)(v20 + 41) = BYTE2(v24);
          }
        }
      }
      else
      {
LABEL_19:
        v7 = -1073741163;
      }
      break;
    case 6:
    case 7:
      return v7;
    case 8:
      v10 = a5;
      v11 = 0;
      v12 = a5;
      v13 = *(char ***)(a5 + 32);
      do
      {
        v12 = *(_QWORD *)(v12 + 16);
        ++v11;
      }
      while ( v12 );
      if ( v11 <= 0x3F )
      {
        v14 = 32 * v11 + 24;
        if ( v13 )
        {
          v15 = 32 * v11 + 24;
          v14 += *(unsigned __int16 *)v13 + 2;
        }
        else
        {
          v15 = 0;
        }
        if ( v14 > a3 )
        {
          v7 = -1073741789;
          if ( a3 >= 4 )
          {
            a4->m128_i32[0] = v14;
            *v6 = 4;
          }
        }
        else
        {
          sub_1C0003440(a4, 0, a3);
          a4->m128_i32[0] = v14;
          a4->m128_i32[2] = v15;
          a4[1].m128_i32[0] = v11;
          if ( v13 )
          {
            v16 = (char *)a4 + v15;
            *(_WORD *)v16 = *(_WORD *)v13;
            sub_1C0003180(v16 + 2, v13[1], *(unsigned __int16 *)v13);
          }
          if ( v11 )
          {
            v17 = &a4[2].m128_i8[8];
            v18 = v11;
            do
            {
              v17 += 32;
              v19 = *(_OWORD *)*(_QWORD *)(v10 + 8);
              *((_DWORD *)v17 - 8) = 528384;
              *((_OWORD *)v17 - 3) = v19;
              *(_BYTE *)(v10 + 41) = 0;
              *(_DWORD *)(v10 + 44) = 0;
              v10 = *(_QWORD *)(v10 + 16);
              --v18;
            }
            while ( v18 );
          }
          *v6 = v14;
        }
      }
      else
      {
LABEL_5:
        v7 = -1073741811;
      }
      break;
    default:
      v7 = -1073741808;
      break;
  }
  return v7;
}
