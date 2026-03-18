/*
 * XREFs of sub_1C00528A8 @ 0x1C00528A8
 * Callers:
 *     sub_1C0052948 @ 0x1C0052948 (sub_1C0052948.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

char __fastcall sub_1C00528A8(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r10
  __int64 v3; // r11
  char v4; // dl
  __int64 v6; // rax

  v2 = a2;
  v3 = a1;
  v4 = 1;
  if ( *v2 == 20 )
  {
    if ( v2[3] )
    {
      sub_1C000FD80(a1, 256, 1447250226, v2[3], 0LL);
      v4 = 0;
    }
    v6 = *(_QWORD *)(v2 + 4);
    if ( !v6 )
      v6 = *(_QWORD *)(v2 + 12);
    if ( !v6 )
    {
      sub_1C000FD80(v3, 256, 1447250227, 0LL, 0LL);
      return 0;
    }
    return v4;
  }
  else
  {
    sub_1C000FD80(a1, 256, 1447250225, *v2, 0LL);
    return 0;
  }
}
