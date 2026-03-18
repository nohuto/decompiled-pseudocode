/*
 * XREFs of sub_1C0038340 @ 0x1C0038340
 * Callers:
 *     sub_1C0037D08 @ 0x1C0037D08 (sub_1C0037D08.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0044F68 @ 0x1C0044F68 (sub_1C0044F68.c)
 *     sub_1C00450B4 @ 0x1C00450B4 (sub_1C00450B4.c)
 *     sub_1C0045408 @ 0x1C0045408 (sub_1C0045408.c)
 *     sub_1C0051ED0 @ 0x1C0051ED0 (sub_1C0051ED0.c)
 *     sub_1C0051F34 @ 0x1C0051F34 (sub_1C0051F34.c)
 *     sub_1C00530C8 @ 0x1C00530C8 (sub_1C00530C8.c)
 */

__int64 __fastcall sub_1C0038340(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  v4 = sub_1C0011220(a2);
  v4[358] = 768;
  if ( (unsigned __int8)sub_1C00530C8(a1, (int)v4 + 1400, v5, 0, (__int64)&v12) )
  {
    if ( v12 )
      v4[355] |= 0x40u;
    sub_1C00450B4(v6, a2);
    v9 = sub_1C0045408(v8, a2);
    *((_QWORD *)v4 + 142) = v9;
    if ( v9 && (v11 = sub_1C0044F68(v10, a2), (*((_QWORD *)v4 + 143) = v11) != 0LL) )
    {
      sub_1C0051F34(a1, a2);
      sub_1C0051ED0(a1, a2);
      return 0LL;
    }
    else
    {
      v4[705] = 1073807366;
      return 3221225626LL;
    }
  }
  else
  {
    v4[705] = 1073807365;
    return 3221225485LL;
  }
}
