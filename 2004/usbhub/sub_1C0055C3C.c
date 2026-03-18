/*
 * XREFs of sub_1C0055C3C @ 0x1C0055C3C
 * Callers:
 *     sub_1C0056360 @ 0x1C0056360 (sub_1C0056360.c)
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 * Callees:
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C003D218 @ 0x1C003D218 (sub_1C003D218.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0055C3C(__int64 a1)
{
  _DWORD *v2; // rbx
  unsigned __int32 v3; // edi
  struct _DEVICE_OBJECT *v4; // rbp
  int v5; // r8d
  _DWORD *v7; // rax
  __int64 v8; // rcx

  v2 = sub_1C0011220(a1);
  v3 = 0;
  v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)v2 + 148);
  v5 = sub_1C0011220(a1)[280];
  if ( (v2[355] & 0x8000000) == 0 && v5 == 100 || (v2[283] & 4) != 0 )
    return 0LL;
  if ( ((v5 - 100) & 0xFFFFFFFC) == 0 && v5 != 101 )
  {
    sub_1C000FE00((__int64)v4, *((_WORD *)v2 + 714), 2, 0);
    v7 = sub_1C0011220(a1);
    v3 = sub_1C00162A8(v4, (__int64)(v7 + 236), a1);
    v8 = v3 & 0xC0000000;
    if ( (_DWORD)v8 != -1073741824 || sub_1C001CEB4(v3) )
    {
      v2[355] &= ~0x8000000u;
      sub_1C003D218(v8, a1);
    }
    else
    {
      sub_1C004A608((__int64)v4, *((_WORD *)v2 + 714), 0x56u, 0LL, 0, v3, -1, aPdoC, 2072, 0);
    }
  }
  return v3;
}
