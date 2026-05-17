/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1800EC110
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x18004B790 (RtlClearBits.c)
 */

__int64 __fastcall RtlFindSetBitsAndClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // esi
  __int64 v6; // r13
  int v7; // ebx
  int v8; // r9d
  unsigned int v9; // ebx
  __int64 v10; // r10
  int v11; // r12d
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // r14
  unsigned int v15; // r8d
  unsigned int v16; // ebp
  __int64 v17; // r9
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rdx
  signed __int64 v20; // r9
  unsigned __int64 v21; // r10
  int v22; // ecx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r8
  char v26; // r9
  _QWORD *v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // rcx
  unsigned int v30; // r9d
  int v31; // ecx
  int v32; // ecx
  _QWORD *v33; // rdi
  __int64 v34; // rax
  unsigned int v35; // r10d
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  unsigned int v38; // r10d
  __int64 v39; // rax
  __int64 v40; // rax
  bool v41; // cc
  unsigned __int64 v42; // rax
  __int64 v44; // [rsp+28h] [rbp-50h]

  v3 = *(_DWORD *)a1;
  v4 = a3;
  v6 = a1;
  v7 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v8 = *(_DWORD *)a1 - 1;
  if ( !a2 )
  {
    v9 = v7 & 0xFFFFFFF8;
    goto LABEL_78;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v44 = v10;
  v11 = (v10 & 4) != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v12 = v11 + v8;
    v13 = v11 + v7;
    v14 = v10 - ((v44 & 4) != 0 ? 4 : 0);
    if ( v8 - v7 + 1 < a2 )
    {
      v15 = -1;
      goto LABEL_29;
    }
    v16 = v12 - a2 + 1;
    v17 = (1LL << (v13 & 0x3F)) - 1;
    v18 = v14 + 8 * ((unsigned __int64)v16 >> 6);
    v19 = (_QWORD *)(v14 + 8 * ((unsigned __int64)v13 >> 6));
    v20 = ~*v19 | v17;
    if ( a2 > 0x7F )
    {
      v21 = v18 + 8;
      if ( (v16 & 0x3F) == 0 )
        v21 = v14 + 8 * ((unsigned __int64)(v12 - a2 + 1) >> 6);
      if ( v20 )
      {
        if ( *++v19 != -1LL )
          goto LABEL_15;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v24, v20);
        if ( v23 )
LABEL_13:
          v22 = 64;
        else
          v22 = 63 - v24;
      }
      else
      {
        v22 = 0;
      }
LABEL_19:
      v15 = ((unsigned int)(((__int64)v19 - v14) >> 3) << 6) - v22;
      if ( v15 <= v16 )
      {
        v26 = a2 - v22;
        v27 = &v19[(unsigned __int64)(a2 - v22) >> 6];
        while ( ++v19 != v27 )
        {
          if ( *v19 != -1LL )
            goto LABEL_15;
        }
        v28 = v26 & 0x3F;
        if ( !v28 )
          goto LABEL_27;
        v23 = !_BitScanForward64((unsigned __int64 *)&v29, ~*v19);
        if ( v23 )
          LODWORD(v29) = 64;
        if ( (unsigned int)v29 >= v28 )
          goto LABEL_27;
LABEL_15:
        while ( (unsigned __int64)v19 <= v21 )
        {
          if ( *++v19 == -1LL )
          {
            v23 = !_BitScanReverse64((unsigned __int64 *)&v25, ~*(v19 - 1));
            if ( v23 )
              goto LABEL_13;
            v22 = 63 - v25;
            goto LABEL_19;
          }
        }
      }
      goto LABEL_67;
    }
    v31 = 64;
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v20 < 0 )
          {
            if ( (unsigned __int64)++v19 > v18 )
              goto LABEL_67;
            v20 = ~*v19;
          }
          v23 = !_BitScanReverse64((unsigned __int64 *)&v37, v20);
          if ( !v23 )
            v31 = 63 - v37;
          v15 = (((unsigned int)(((__int64)v19 - v14) >> 3) + 1) << 6) - v31;
          if ( v15 > v16 )
            goto LABEL_67;
          v38 = a2 - v31;
          if ( a2 == v31 )
            goto LABEL_27;
          ++v19;
          v31 = 64;
          v20 = ~*v19;
          if ( v38 >= 0x40 )
            break;
LABEL_58:
          v23 = !_BitScanForward64((unsigned __int64 *)&v39, v20);
          if ( v23 )
            LODWORD(v39) = 64;
          if ( (unsigned int)v39 >= v38 )
            goto LABEL_27;
        }
        if ( *v19 == -1LL )
        {
          v38 -= 64;
          if ( !v38 )
            goto LABEL_27;
          v20 = ~*++v19;
          goto LABEL_58;
        }
      }
    }
    if ( a2 <= 1 )
    {
      while ( v20 == -1 )
      {
        if ( (unsigned __int64)++v19 > v18 )
          goto LABEL_67;
        v20 = ~*v19;
      }
      _BitScanForward64(&v42, ~v20);
      v15 = v42 + ((unsigned int)(((__int64)v19 - v14) >> 3) << 6);
      v41 = v15 <= v16;
LABEL_70:
      if ( v41 )
      {
LABEL_27:
        if ( v15 != -1 )
          break;
        goto LABEL_28;
      }
    }
    else
    {
      v32 = 0;
      v33 = (_QWORD *)(v14 + 8 * ((unsigned __int64)v12 >> 6));
      while ( v20 != -1 )
      {
LABEL_40:
        v23 = !_BitScanForward64((unsigned __int64 *)&v34, v20);
        if ( v23 )
          LODWORD(v34) = 64;
        if ( v32 + (int)v34 >= a2 )
        {
          LODWORD(v36) = -v32;
LABEL_69:
          v15 = ((unsigned int)(((__int64)v19 - v14) >> 3) << 6) + v36;
          v41 = v15 <= v16;
          goto LABEL_70;
        }
        v35 = a2;
        v36 = ~v20;
        while ( 1 )
        {
          v36 &= v36 >> (v35 >> 1);
          if ( !v36 )
            break;
          v35 -= v35 >> 1;
          if ( v35 <= 1 )
          {
            _BitScanForward64(&v36, v36);
            goto LABEL_69;
          }
        }
        if ( v19 == v33 )
          goto LABEL_67;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v40, v20);
        if ( v23 )
          v32 = 64;
        else
          v32 = 63 - v40;
        v20 = ~*++v19;
      }
      while ( (unsigned __int64)++v19 <= v18 )
      {
        v20 = ~*v19;
        if ( *v19 )
        {
          v32 = 0;
          goto LABEL_40;
        }
      }
    }
LABEL_67:
    v15 = -1;
LABEL_28:
    v4 = a3;
LABEL_29:
    if ( !v7 )
      break;
    v10 = v44;
    v30 = a2 + v4;
    if ( a2 + v4 > v3 )
      v30 = v3;
    v8 = v30 - 1;
    v7 = 0;
  }
  v6 = a1;
  v9 = v15 - v11;
  if ( v15 == -1 )
    v9 = -1;
LABEL_78:
  if ( v9 != -1 )
    RtlClearBits(v6, v9, a2);
  return v9;
}
