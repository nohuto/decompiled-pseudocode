/*
 * XREFs of RtlFindClearBitsEx @ 0x1800EBE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindClearBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  unsigned __int64 *v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r10
  bool v16; // zf
  __int64 v17; // rax
  unsigned __int64 *v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  unsigned int v21; // r10d
  unsigned __int64 *v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // r10d
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rax

  v3 = *a1;
  v5 = a1[1];
  v7 = a3 & -(__int64)(a3 < *a1);
  v8 = *a1 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v8 - v7 + 1 < a2 )
      {
LABEL_4:
        v10 = -1LL;
        goto LABEL_26;
      }
      v11 = v8 - a2 + 1;
      v12 = v5 + 8 * (v11 >> 6);
      v13 = (unsigned __int64 *)(v5 + 8 * (v7 >> 6));
      v14 = *v13 | ((1LL << (v7 & 0x3F)) - 1);
      if ( a2 <= 0x7F )
        break;
      v15 = v12 + 8;
      if ( (v11 & 0x3F) == 0 )
        v15 = v5 + 8 * ((v8 - a2 + 1) >> 6);
      if ( v14 )
      {
        if ( *++v13 )
          goto LABEL_11;
        v16 = !_BitScanReverse64((unsigned __int64 *)&v17, v14);
LABEL_14:
        if ( v16 )
          LODWORD(v14) = 64;
        else
          LODWORD(v14) = 63 - v17;
      }
      v10 = ((__int64)((__int64)v13 - v5) >> 3 << 6) - (unsigned int)v14;
      if ( v10 > v11 )
        goto LABEL_4;
      v18 = &v13[(a2 - (unsigned int)v14) >> 6];
      while ( ++v13 != v18 )
      {
        if ( *v13 )
          goto LABEL_11;
      }
      if ( (((_BYTE)a2 - (_BYTE)v14) & 0x3F) != 0 )
      {
        v16 = !_BitScanForward64((unsigned __int64 *)&v19, *v13);
        if ( v16 )
          LODWORD(v19) = 64;
        if ( (unsigned int)v19 < (((_BYTE)a2 - (_BYTE)v14) & 0x3Fu) )
        {
LABEL_11:
          while ( (unsigned __int64)v13 <= v15 )
          {
            if ( !*++v13 )
            {
              v16 = !_BitScanReverse64((unsigned __int64 *)&v17, *(v13 - 1));
              goto LABEL_14;
            }
          }
          goto LABEL_4;
        }
      }
LABEL_25:
      if ( v10 != -1LL )
        return v10;
LABEL_26:
      if ( !v7 )
        return v10;
      v20 = a2 + a3;
      if ( a2 + a3 > v3 )
        v20 = v3;
      v8 = v20 - 1;
      v7 = 0LL;
    }
    if ( a2 < 0x40 )
    {
      if ( a2 > 1 )
      {
        v21 = 0;
        v22 = (unsigned __int64 *)(v5 + 8 * (v8 >> 6));
        while ( v14 != -1 )
        {
LABEL_37:
          v16 = !_BitScanForward64((unsigned __int64 *)&v23, v14);
          if ( v16 )
            LODWORD(v23) = 64;
          if ( v21 + (unsigned int)v23 >= a2 )
          {
            v26 = -(__int64)v21;
LABEL_66:
            v10 = ((__int64)((__int64)v13 - v5) >> 3 << 6) + v26;
            goto LABEL_67;
          }
          v24 = a2;
          v25 = ~v14;
          while ( 1 )
          {
            v25 &= v25 >> (v24 >> 1);
            if ( !v25 )
              break;
            v24 -= v24 >> 1;
            if ( v24 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v26, v25);
              goto LABEL_66;
            }
          }
          if ( v13 == v22 )
            goto LABEL_4;
          v16 = !_BitScanReverse64((unsigned __int64 *)&v31, v14);
          if ( v16 )
            v21 = 64;
          else
            v21 = 63 - v31;
          v14 = *++v13;
        }
        while ( 1 )
        {
          if ( (unsigned __int64)++v13 > v12 )
            goto LABEL_4;
          v14 = *v13;
          if ( *v13 != -1LL )
          {
            v21 = 0;
            goto LABEL_37;
          }
        }
      }
      while ( v14 == -1 )
      {
        if ( (unsigned __int64)++v13 > v12 )
          goto LABEL_4;
        v14 = *v13;
      }
      _BitScanForward64(&v32, ~v14);
      v10 = v32 + ((__int64)((__int64)v13 - v5) >> 3 << 6);
LABEL_67:
      if ( v10 > v11 )
        goto LABEL_4;
      goto LABEL_25;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v14 < 0 )
        {
          if ( (unsigned __int64)++v13 > v12 )
            goto LABEL_4;
          v14 = *v13;
        }
        v16 = !_BitScanReverse64((unsigned __int64 *)&v27, v14);
        if ( v16 )
          v28 = 64;
        else
          v28 = 63 - v27;
        v10 = ((((__int64)((__int64)v13 - v5) >> 3) + 1) << 6) - v28;
        if ( v10 > v11 )
          goto LABEL_4;
        v29 = a2 - v28;
        if ( a2 == v28 )
          goto LABEL_25;
        v14 = *++v13;
        if ( v29 >= 0x40 )
          break;
LABEL_56:
        v16 = !_BitScanForward64(&v30, v14);
        if ( v16 )
          v30 = 64LL;
        if ( v30 >= v29 )
          goto LABEL_25;
      }
      if ( !v14 )
      {
        v29 -= 64LL;
        if ( !v29 )
          goto LABEL_25;
        v14 = *++v13;
        goto LABEL_56;
      }
    }
  }
  return v7 & 0xFFFFFFFFFFFFFFF8uLL;
}
