/*
 * XREFs of RtlpFilterSacl @ 0x1800E88F0
 * Callers:
 *     RtlQuerySecurityObject @ 0x1800D7090 (RtlQuerySecurityObject.c)
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 */

void __fastcall RtlpFilterSacl(__int64 a1, __int64 i, unsigned int *a3, unsigned int a4)
{
  _WORD *v4; // rbp
  __int64 v5; // r14
  int v8; // r10d
  unsigned __int8 *v9; // r11
  unsigned int v10; // ecx
  bool v11; // zf
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // r10d
  char *v15; // rsi
  unsigned int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // eax
  char v19; // al
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  bool v22; // zf
  __int64 v23; // rax

  v4 = (_WORD *)(a1 + 8);
  v5 = i;
  LODWORD(i) = 0;
  v8 = 8;
  v9 = (unsigned __int8 *)(a1 + 8);
  if ( *(_WORD *)(a1 + 4) )
  {
    for ( i = *(unsigned __int16 *)(a1 + 4); i; --i )
    {
      v10 = *v9;
      if ( v10 > 0x12 )
      {
        v12 = v10 - 19;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            if ( (a4 & 0x80u) != 0 )
              goto LABEL_17;
            goto LABEL_18;
          }
          if ( v13 != 1 )
            goto LABEL_7;
          v11 = (a4 & 0x100) == 0;
        }
        else
        {
          v11 = (a4 & 0x40) == 0;
        }
      }
      else
      {
        if ( v10 != 18 )
        {
          if ( v10 > 0x10 )
          {
            v11 = (a4 & 0x10) == 0;
            goto LABEL_16;
          }
LABEL_7:
          v11 = (a4 & 8) == 0;
          goto LABEL_16;
        }
        v11 = (a4 & 0x20) == 0;
      }
LABEL_16:
      if ( !v11 )
LABEL_17:
        v8 += *((unsigned __int16 *)v9 + 1);
LABEL_18:
      v9 += *((unsigned __int16 *)v9 + 1);
    }
  }
  v14 = (v8 + 3) & 0xFFFFFFFC;
  if ( *a3 < v14 )
  {
    *a3 = v14;
    return;
  }
  v15 = (char *)(v5 + 8);
  *(_QWORD *)v5 = *(_QWORD *)a1;
  v16 = i;
  for ( *(_DWORD *)(v5 + 2) = 8; v16 < *(unsigned __int16 *)(a1 + 4); v4 = (_WORD *)((char *)v4 + (unsigned __int16)v23) )
  {
    v17 = *(unsigned __int8 *)v4;
    if ( v17 > 0x12 )
    {
      v20 = v17 - 19;
      if ( !v20 )
      {
        if ( (a4 & 0x40) == 0 )
          goto LABEL_45;
        v19 = 1;
        goto LABEL_42;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
        {
LABEL_37:
          v22 = (a4 & 8) == 0;
          goto LABEL_43;
        }
        v18 = a4 >> 8;
      }
      else
      {
        v18 = a4 >> 7;
      }
    }
    else if ( v17 == 18 )
    {
      v18 = a4 >> 5;
    }
    else
    {
      if ( v17 < 2 )
        goto LABEL_37;
      if ( v17 <= 3 )
        goto LABEL_31;
      if ( v17 <= 6 )
        goto LABEL_37;
      if ( v17 <= 8 )
        goto LABEL_31;
      if ( v17 <= 0xC )
        goto LABEL_37;
      if ( v17 <= 0x10 )
LABEL_31:
        v18 = a4 >> 3;
      else
        v18 = a4 >> 4;
    }
    v19 = v18 & 1;
LABEL_42:
    v22 = v19 == 0;
LABEL_43:
    if ( v22 )
    {
LABEL_45:
      LOWORD(v23) = v4[1];
      goto LABEL_46;
    }
    memmove(v15, v4, (unsigned __int16)v4[1]);
    ++*(_WORD *)(v5 + 4);
    *(_WORD *)(v5 + 2) += v4[1];
    v23 = (unsigned __int16)v4[1];
    v15 += v23;
LABEL_46:
    ++v16;
  }
}
