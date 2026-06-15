/*
 * XREFs of sub_180024FD8 @ 0x180024FD8
 * Callers:
 *     sub_180024B50 @ 0x180024B50 (sub_180024B50.c)
 *     sub_18002A1BC @ 0x18002A1BC (sub_18002A1BC.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18001A074 @ 0x18001A074 (sub_18001A074.c)
 */

_QWORD *__fastcall sub_180024FD8(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // r11
  int v4; // r9d
  __int64 v6; // rdi
  __int64 v7; // r10
  unsigned __int16 *v8; // rcx
  __int64 v9; // rbx
  int v10; // r8d
  int v11; // eax
  __int64 v13; // r8
  __int64 v14; // rcx

  v3 = *(int *)(a1 + 16);
  v4 = 0;
  if ( (int)v3 <= 0 )
  {
LABEL_9:
    v4 = -1;
  }
  else
  {
    v6 = *a3;
    v7 = 0LL;
    while ( 1 )
    {
      if ( !v6 )
        sub_18000A174(-2147467259);
      v8 = *(unsigned __int16 **)(*(_QWORD *)a1 + 8 * v7);
      v9 = v6 - (_QWORD)v8;
      do
      {
        v10 = *(unsigned __int16 *)((char *)v8 + v9);
        v11 = *v8 - v10;
        if ( v11 )
          break;
        ++v8;
      }
      while ( v10 );
      if ( !v11 )
        break;
      ++v4;
      if ( ++v7 >= v3 )
        goto LABEL_9;
    }
  }
  if ( v4 == -1 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    if ( v4 < 0 || v4 >= (int)v3 )
    {
      sub_18001A074();
      JUMPOUT(0x1800250B5LL);
    }
    v13 = *(_QWORD *)(a1 + 8);
    *a2 = 0LL;
    a2[1] = 0LL;
    v14 = *(_QWORD *)(v13 + 16LL * v4 + 8);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v14 = *(_QWORD *)(v13 + 16LL * v4 + 8);
    }
    *a2 = *(_QWORD *)(v13 + 16LL * v4);
    a2[1] = v14;
  }
  return a2;
}
