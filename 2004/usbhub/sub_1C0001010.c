/*
 * XREFs of sub_1C0001010 @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0013058 @ 0x1C0013058 (sub_1C0013058.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001BB74 @ 0x1C001BB74 (sub_1C001BB74.c)
 *     sub_1C0039F00 @ 0x1C0039F00 (sub_1C0039F00.c)
 */

__int64 __fastcall sub_1C0001010(__int64 a1)
{
  __int64 v2; // rsi
  struct _DEVICE_OBJECT *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rbp
  __int64 v14; // rax

  v2 = sub_1C0011220();
  v3 = *(struct _DEVICE_OBJECT **)(v2 + 1184);
  v4 = sub_1C000F050(v3);
  if ( (*(_DWORD *)(v2 + 1420) & 4) != 0 )
  {
    v5 = sub_1C000F050(v3);
    v6 = v5 + 1912;
    v7 = sub_1C0004060((_DWORD)v3, (int)v5 + 1912, (_DWORD)v3, 1129476712, 0);
    v8 = sub_1C0012810(v3, 5LL, v6);
    if ( (v8 & 0xC0000000) == 0xC0000000 )
    {
      v9 = sub_1C000F050(v3);
      sub_1C0012810(v3, 6LL, v9 + 1912);
    }
    if ( v8 >= 0 || *(_BYTE *)(v4 + 3416) )
    {
      v13 = sub_1C0016B5C(v3, *(unsigned __int16 *)(v2 + 1428), 0LL, 1213425986LL);
      if ( !v13 )
      {
        v8 = -1073741661;
        goto LABEL_7;
      }
      sub_1C000F050(v3);
      if ( (int)sub_1C0039F00(v3) >= 0 )
        sub_1C000FE00(v3, *(unsigned __int16 *)(v2 + 1428), 2LL);
      v14 = sub_1C000F050(v3);
      v8 = sub_1C001BB74(v3, v14 + 1912, v13);
      sub_1C00171A0(v3, v13, 0LL, 1213425986LL);
    }
    v10 = sub_1C000F050(v3);
    sub_1C0013058(v3, a1, v10 + 1912);
LABEL_7:
    sub_1C0003610(v3, v11, v7);
    return (unsigned int)v8;
  }
  return 3221225473LL;
}
