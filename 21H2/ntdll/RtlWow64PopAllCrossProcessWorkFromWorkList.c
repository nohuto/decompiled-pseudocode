/*
 * XREFs of RtlWow64PopAllCrossProcessWorkFromWorkList @ 0x1801032C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *__fastcall RtlWow64PopAllCrossProcessWorkFromWorkList(volatile signed __int64 *a1, _BYTE *a2)
{
  signed __int64 v4; // r9
  unsigned int v5; // eax
  bool v6; // zf
  signed __int64 v7; // rax
  int *v8; // rcx
  int *v9; // rdx
  int *i; // r11
  int *v11; // rbx
  int *v12; // r9
  int v13; // ecx
  bool v15; // [rsp+0h] [rbp-28h]
  int *v16; // [rsp+8h] [rbp-20h]
  signed __int64 v17; // [rsp+48h] [rbp+20h]

  v4 = *a1;
  do
  {
    v5 = (unsigned int)v4 >> 31;
    v15 = (int)v4 < 0;
    if ( (v4 & 0x7FFFFFFF) != 0 )
    {
      v16 = (int *)((char *)a1 + (v4 & 0x7FFFFFFF));
    }
    else
    {
      v16 = 0LL;
      if ( (int)v4 >= 0 )
        goto LABEL_20;
    }
    HIDWORD(v17) = HIDWORD(v4) + 1;
    LODWORD(v17) = 0;
    v7 = _InterlockedCompareExchange64(a1, v17, v4);
    v6 = v4 == v7;
    v4 = v7;
  }
  while ( !v6 );
  LOBYTE(v5) = v15;
  if ( !v15 )
  {
    v8 = 0LL;
    v9 = v16;
    for ( i = 0LL; ; i = v11 )
    {
      v11 = v9;
      if ( !v9 )
        break;
      if ( *v9 )
        v12 = (int *)((char *)a1 + (unsigned int)*v9);
      else
        v12 = 0LL;
      if ( i )
        v13 = (_DWORD)v8 - (_DWORD)a1;
      else
        v13 = 0;
      *v9 = v13;
      v8 = v9;
      v9 = v12;
    }
    v16 = v8;
  }
LABEL_20:
  *a2 = v5;
  return v16;
}
