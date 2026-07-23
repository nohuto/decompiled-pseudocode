/*
 * XREFs of ExpParseEfiPath @ 0x140950D80
 * Callers:
 *     ExpTranslateEfiPath @ 0x14095240C (ExpTranslateEfiPath.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpParseEfiPath(char *Src, _QWORD *a2, _QWORD *a3, char *a4)
{
  _WORD *PoolWithTag; // rbx
  _QWORD *v5; // r14
  char *v6; // r15
  unsigned int v7; // esi
  _QWORD *v8; // rbp
  unsigned int v10; // edi
  char v11; // r11
  char v12; // al
  char *v13; // r13
  unsigned int v14; // r12d
  char *v15; // r10
  char v16; // cl
  int v17; // eax
  char v18; // al
  unsigned int v19; // esi
  unsigned int v20; // r14d
  unsigned int v21; // ebp
  unsigned __int64 v23; // rax
  PVOID v24; // rax

  PoolWithTag = 0LL;
  v5 = a3;
  v6 = 0LL;
  v7 = 0;
  v8 = a2;
  v10 = -1073741811;
  v11 = 1;
  while ( 1 )
  {
    v12 = *Src & 0x7F;
    if ( v12 == 127 )
      return v10;
    if ( v12 == 4 && Src[1] == 1 )
      break;
    Src += *((unsigned __int16 *)Src + 1);
  }
  v13 = Src;
  v10 = 0;
  v14 = *((unsigned __int16 *)Src + 1);
  v15 = &Src[(unsigned __int8)Src[2] | (unsigned __int64)((unsigned __int8)Src[3] << 8)];
  v16 = *v15;
  if ( (*v15 & 0x7F) == 4 && v15[1] == 4 )
  {
    v6 = v15;
    while ( 1 )
    {
      v17 = *((unsigned __int16 *)v15 + 1);
      if ( v17 + v7 - 4 < v7 )
        break;
      v7 = v17 + v7 - 4;
      if ( v17 + v14 < v14 )
      {
        v14 = -1;
        goto LABEL_16;
      }
      v14 += v17;
      v10 = 0;
      v15 += (unsigned __int8)v15[2] | (unsigned __int64)((unsigned __int8)v15[3] << 8);
      v16 = *v15;
      if ( (*v15 & 0x7F) != 4 || v15[1] != 4 )
        goto LABEL_17;
    }
    v7 = -1;
LABEL_16:
    v16 = *v15;
    v10 = -1073741675;
  }
LABEL_17:
  if ( (v16 & 0x7F) != 0x7F )
    v10 = -1073741811;
  if ( (v10 & 0x80000000) != 0 )
    return v10;
  v18 = v13[41];
  if ( v18 == 2 )
  {
LABEL_23:
    *a4 = v11;
    if ( v7 )
    {
      v19 = v7 + 2;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x72766E45u);
      if ( !PoolWithTag )
        return 3221225626LL;
      v20 = 0;
      while ( (*v6 & 0x7F) != 0x7F )
      {
        v21 = *((unsigned __int16 *)v6 + 1) - 4;
        if ( v21 >= v19 )
          goto LABEL_29;
        memmove((char *)PoolWithTag + v20, v6 + 4, v21);
        v19 -= v21;
        v20 += v21;
        v6 += *((unsigned __int16 *)v6 + 1);
      }
      v8 = a2;
      v23 = v20;
      v5 = a3;
      PoolWithTag[v23 >> 1] = 0;
    }
    v24 = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x72766E45u);
    *v8 = v24;
    if ( !v24 )
    {
      if ( PoolWithTag )
LABEL_29:
        ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225626LL;
    }
    memmove(v24, v13, v14);
    *v5 = PoolWithTag;
    return v10;
  }
  if ( v18 == 1 )
  {
    v11 = 0;
    goto LABEL_23;
  }
  return 3221225485LL;
}
