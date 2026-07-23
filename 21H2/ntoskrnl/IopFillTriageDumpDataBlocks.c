/*
 * XREFs of IopFillTriageDumpDataBlocks @ 0x140503F20
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x140501D40 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlULongLongSub @ 0x140281B84 (RtlULongLongSub.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140502B60 (IoUpdateBugCheckProgressEnvVariable.c)
 */

int __fastcall IopFillTriageDumpDataBlocks(unsigned int *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // rdi
  char *v9; // rbx
  unsigned int i; // r14d
  __int64 v11; // rcx
  ULONGLONG *v12; // rsi
  unsigned int v13; // r15d
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  int v16; // r11d
  char *v17; // rcx
  unsigned int v18; // ecx
  ULONGLONG pullResult; // [rsp+28h] [rbp-70h] BYREF
  char *v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  ULONGLONG *v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-48h]
  __int64 v27; // [rsp+B0h] [rbp+18h]

  v27 = a3;
  v4 = a4;
  LODWORD(v5) = a2;
  pullResult = 0LL;
  v7 = a4 + a1[30];
  v24 = v7;
  v8 = v7;
  v22 = v7;
  v9 = (char *)(v7 + 16LL * a1[31]);
  v21 = v9;
  for ( i = 0; i < (unsigned int)v5; ++i )
  {
    v11 = i;
    v25 = i;
    v12 = *(ULONGLONG **)(a3 + 16LL * i + 8);
    v13 = 0;
    while ( 1 )
    {
      v23 = v12;
      if ( v13 >= *(_DWORD *)(a3 + 16 * v11) )
        break;
      v5 = (v8 - v7) >> 4;
      if ( (unsigned int)v5 >= a1[31] )
        return v5;
      LODWORD(v5) = v8 + 16;
      if ( v8 + 16 > v4 + (unsigned __int64)a1[1] )
        return v5;
      LODWORD(v5) = RtlULongLongSub(v12[1], *v12, &pullResult);
      if ( (int)v5 < 0 )
        return v5;
      v17 = &v9[(unsigned int)pullResult];
      if ( v17 < v9 || (unsigned __int64)v17 > v15 )
        return v5;
      *(_QWORD *)v8 = v14;
      *(_DWORD *)(v8 + 8) = (_DWORD)v9 - v16;
      v18 = *((_DWORD *)v12 + 2) - *(_DWORD *)v12;
      *(_DWORD *)(v8 + 12) = v18;
      memmove(v9, (const void *)*v12, v18);
      v9 += *(unsigned int *)(v8 + 12);
      v21 = v9;
      v8 += 16LL;
      v22 = v8;
      ++v13;
      v12 += 2;
      v11 = v25;
      v4 = a4;
      a3 = v27;
    }
    LODWORD(v5) = a2;
  }
  return v5;
}
