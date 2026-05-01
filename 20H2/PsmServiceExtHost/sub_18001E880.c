/*
 * XREFs of sub_18001E880 @ 0x18001E880
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 * Callees:
 *     sub_1800027E8 @ 0x1800027E8 (sub_1800027E8.c)
 *     sub_180007F10 @ 0x180007F10 (sub_180007F10.c)
 *     sub_180035594 @ 0x180035594 (sub_180035594.c)
 *     sub_180080B8C @ 0x180080B8C (sub_180080B8C.c)
 */

_QWORD *__fastcall sub_18001E880(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx
  _QWORD *result; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  _QWORD **v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *i; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10

  v1 = a1 + 72;
  v2 = *(_QWORD *)(a1 + 80);
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      result = 0LL;
    else
      result = (_QWORD *)(v2 ^ (v1 | 1));
  }
  else
  {
    result = (_QWORD *)v2;
  }
  if ( result )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)result[10];
      v5 = 0LL;
      if ( v4 != result + 10 )
        v5 = v4 - 2;
      if ( v5 )
        break;
      v6 = (_QWORD **)result[1];
      v7 = result;
      if ( v6 )
      {
        result = (_QWORD *)result[1];
        for ( i = *v6; i; i = (_QWORD *)*i )
          result = i;
      }
      else
      {
        for ( result = (_QWORD *)(result[2] & 0xFFFFFFFFFFFFFFFCuLL);
              result;
              result = (_QWORD *)(result[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*result == v7 )
            break;
          v7 = result;
        }
      }
      if ( !result )
        return result;
    }
    while ( 1 )
    {
      do
      {
        v9 = v5[6];
        v10 = *v5;
        if ( v5[8] == *(_QWORD *)(v9 + 800) )
        {
          if ( (*(_BYTE *)(v10 + 544) & 8) == 0 )
          {
            if ( (*(_DWORD *)(v10 + 112) & 0x80000) != 0 )
            {
              v12 = 960LL;
              v13 = *(_QWORD *)(v5[7] + 1112LL);
              *(_OWORD *)(v5 + 9) = *(_OWORD *)(v9 + 904);
              *(_OWORD *)(v5 + 11) = *(_OWORD *)(v9 + 920);
              v11 = *(_QWORD *)(v9 + 960);
            }
            else
            {
              v11 = *(_QWORD *)(v9 + 952);
              v12 = 952LL;
              v13 = *(_QWORD *)(v10 + 456);
            }
            sub_180007F10(v11, v13, (__int64 *)(v9 + v12));
          }
        }
        else
        {
          LOBYTE(v4) = 1;
          if ( (unsigned int)sub_180080B8C(*v5, v4) )
            sub_1800027E8(v15, 1u, 11, 0, 6912, 0, 0LL);
        }
        v14 = v5[1];
        v4 = (_QWORD *)v5[2];
        if ( v4 == (_QWORD *)(v14 + 80) )
          break;
        v5 = v4 - 2;
      }
      while ( v4 != (_QWORD *)16 );
      result = (_QWORD *)sub_180035594(v14);
      if ( !result )
        break;
      while ( 1 )
      {
        v4 = (_QWORD *)result[10];
        v5 = 0LL;
        if ( v4 != result + 10 )
          v5 = v4 - 2;
        if ( v5 )
          break;
        result = (_QWORD *)sub_180035594(result);
        if ( !result )
          return result;
      }
    }
  }
  return result;
}
