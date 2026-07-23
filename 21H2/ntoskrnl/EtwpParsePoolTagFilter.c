/*
 * XREFs of EtwpParsePoolTagFilter @ 0x1409401BC
 * Callers:
 *     EtwStartAutoLogger @ 0x14079B794 (EtwStartAutoLogger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpParsePoolTagFilter(__int64 a1, __int64 a2)
{
  __int16 *v2; // r10
  int v3; // r9d
  int v4; // r8d
  __int16 v5; // r11
  int v6; // eax
  __int16 v7; // cx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v12; // [rsp+8h] [rbp+8h]

  v2 = *(__int16 **)(a1 + 8);
  v12 = 0;
  v3 = 1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = *v2;
  if ( !*v2 )
    return 0LL;
  do
  {
    if ( v3 == 1 )
    {
      v8 = v7 == 42;
      v9 = v5;
      if ( v8 )
        v3 = 2;
      ++v5;
      *((_BYTE *)&v12 + v9) = *(_BYTE *)v2;
      v6 = v12;
      if ( v5 == 4 )
        v3 = 2;
    }
    else
    {
      if ( v7 != 59 || (unsigned __int16)v4 >= 4u )
        return 0LL;
      v10 = (unsigned __int16)v4;
      v5 = 0;
      LOWORD(v4) = v4 + 1;
      v12 = 0;
      v3 = 1;
      *(_DWORD *)(a2 + 4 * v10) = v6;
      v6 = 0;
    }
    v7 = *++v2;
  }
  while ( *v2 );
  if ( v3 != 2 || (unsigned __int16)v4 >= 4u )
    return 0LL;
  *(_DWORD *)(a2 + 4LL * (unsigned __int16)v4) = v6;
  return (unsigned int)(v4 + 1);
}
