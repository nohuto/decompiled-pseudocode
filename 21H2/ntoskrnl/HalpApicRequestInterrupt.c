/*
 * XREFs of HalpApicRequestInterrupt @ 0x14020CAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpApicRequestInterrupt(__int64 a1, __int64 a2, __m128i *a3, unsigned int a4, _DWORD *a5)
{
  char v5; // r15
  __m128i *v7; // rsi
  bool v8; // zf
  unsigned int v9; // ebx
  unsigned int v10; // edi
  int v11; // ebx
  int v12; // ecx
  __int64 v14; // xmm0_8
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __m128i v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-38h]

  v5 = 0;
  v25 = 0LL;
  v7 = a3;
  v8 = *a5 == -1;
  v24 = 0LL;
  if ( !v8 )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) != -10 )
  {
    v14 = a3[1].m128i_i64[0];
    v15 = _mm_cvtsi128_si32(*a3);
    v24 = *a3;
    v25 = v14;
    v16 = v15 - 4;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 != 1 )
          return 3221225485LL;
        _BitScanForward(&v18, v24.m128i_u32[3]);
        v24.m128i_i32[3] = 1 << v18;
      }
      else
      {
        _BitScanForward(&v19, v24.m128i_u32[2]);
        v24.m128i_i32[2] = 1 << v19;
      }
    }
    v7 = &v24;
  }
  v9 = 0;
  v10 = (unsigned __int8)a4;
  switch ( v7->m128i_i32[0] )
  {
    case 5:
      v11 = v7->m128i_i32[2];
      v10 = (unsigned __int8)a4 | 0x800;
LABEL_5:
      v9 = v11 << 24;
      break;
    case 1:
      v10 = (unsigned __int8)a4 | 0x80000;
      break;
    case 2:
      v10 = (unsigned __int8)a4 | 0xC0000;
      break;
    case 3:
      v5 = HalpApicValidateSelfIpi;
      v10 = (unsigned __int8)a4 | 0x40000;
      break;
    case 4:
      v20 = v7->m128i_u32[2];
      v9 = v20;
      if ( !HalpApicX2Mode )
      {
        v9 = v20 << 24;
        if ( v20 != -1
          && HalpApicValidateSelfIpi
          && (unsigned int)((__int64 (__fastcall *)(__int64))HalpApicRead)(32LL) >> 24 == v7->m128i_i32[2] )
        {
          v5 = 1;
        }
      }
      break;
    case 6:
      v10 = (unsigned __int8)a4 | 0x800;
      if ( !HalpApicX2Mode )
      {
        v11 = (16 * v7->m128i_i32[2]) | v7->m128i_i32[3] & 0xF;
        goto LABEL_5;
      }
      v9 = (unsigned __int16)v7->m128i_i32[3] | (v7->m128i_i32[2] << 16);
      break;
    default:
      return 3221225485LL;
  }
  v12 = a5[1];
  if ( v12 == 1 )
    goto LABEL_7;
  v21 = v12 - 2;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 == 3 )
        {
          v10 |= 0x500u;
          goto LABEL_7;
        }
        return 3221225485LL;
      }
      v10 |= 0x700u;
    }
    else
    {
      v10 |= 0x200u;
    }
  }
  else
  {
    v10 |= 0x400u;
  }
LABEL_7:
  ((void (__fastcall *)(_QWORD, _QWORD))HalpApicWriteCommand)(v9, v10);
  if ( v5 && a5[1] == 1 )
  {
    while ( ((unsigned int)((__int64 (__fastcall *)(_QWORD))HalpApicRead)(((a4 >> 1) & 0x7FFFFFF0) + 512) & (1 << (a4 & 0x1F))) == 0 )
      ;
  }
  return 0LL;
}
