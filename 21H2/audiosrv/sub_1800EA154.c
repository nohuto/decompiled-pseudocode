/*
 * XREFs of sub_1800EA154 @ 0x1800EA154
 * Callers:
 *     sub_1800EA1F4 @ 0x1800EA1F4 (sub_1800EA1F4.c)
 *     sub_180138B20 @ 0x180138B20 (sub_180138B20.c)
 *     sub_18013A77C @ 0x18013A77C (sub_18013A77C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1800EA154(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r10
  __int64 *v4; // rax
  unsigned __int16 *v5; // rcx
  __int64 *v6; // r9
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int16 v10; // bx
  int v11; // ecx
  bool v12; // sf

  v2 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v4 + 25) )
  {
    v5 = (unsigned __int16 *)a2;
    if ( *(_QWORD *)(a2 + 24) >= 8uLL )
      v5 = *(unsigned __int16 **)a2;
    v6 = v4 + 4;
    if ( (unsigned __int64)v4[7] >= 8 )
      v6 = (__int64 *)v4[4];
    v7 = v4[6];
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 >= v7 )
      v8 = v4[6];
    if ( v8 )
    {
      v9 = (char *)v6 - (char *)v5;
      while ( 1 )
      {
        v10 = *(unsigned __int16 *)((char *)v5 + v9);
        if ( v10 != *v5 )
          break;
        ++v5;
        if ( !--v8 )
          goto LABEL_12;
      }
      v11 = v10 < *v5 ? -1 : 1;
    }
    else
    {
LABEL_12:
      v11 = 0;
    }
    v12 = v11 < 0;
    if ( !v11 )
    {
      if ( v7 < *(_QWORD *)(a2 + 16) )
        goto LABEL_20;
      if ( v7 > *(_QWORD *)(a2 + 16) )
        goto LABEL_18;
      v12 = 0;
    }
    if ( v12 )
    {
LABEL_20:
      v4 = (__int64 *)v4[2];
    }
    else
    {
LABEL_18:
      v2 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  return v2;
}
