/*
 * XREFs of sub_1C004DDA0 @ 0x1C004DDA0
 * Callers:
 *     sub_1C004DFB0 @ 0x1C004DFB0 (sub_1C004DFB0.c)
 * Callees:
 *     sub_1C000174C @ 0x1C000174C (sub_1C000174C.c)
 *     sub_1C00018E8 @ 0x1C00018E8 (sub_1C00018E8.c)
 *     sub_1C0001BF8 @ 0x1C0001BF8 (sub_1C0001BF8.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00361E8 @ 0x1C00361E8 (sub_1C00361E8.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 */

__int64 __fastcall sub_1C004DDA0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int32 v7; // esi
  unsigned int v8; // eax
  int v10; // [rsp+28h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v12[2]; // [rsp+58h] [rbp-40h] BYREF
  __int16 v13; // [rsp+60h] [rbp-38h]
  __int16 v14; // [rsp+62h] [rbp-36h]

  v14 = 0;
  P = 0LL;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x10u, (__int64)&unk_1C0062100, v10);
  }
  sub_1C000FD80(a1, 1024, 1884443476, a2, *(unsigned int *)(a2 + 544));
  sub_1C00361E8(a1);
  v6 = sub_1C0001BF8(a1);
  *(_DWORD *)(a2 + 852) = v6;
  v12[0] = v6 - *(_DWORD *)(a2 + 848);
  v12[1] = *(_DWORD *)(a2 + 544);
  v13 = *(_WORD *)(a2 + 4);
  v7 = sub_1C000174C(a1, a2, &P);
  v8 = *(_DWORD *)(a2 + 544);
  if ( v8 >= 3 || v7 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    sub_1C0011220(a3)[705] = 1073807362;
    sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062B08);
    sub_1C004E668(a1, a2, a3, 28, (__int64)v12, v7);
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 544) = v8 + 1;
    sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062A90);
    sub_1C004A608(a1, *(_WORD *)(a2 + 4), 0x51u, (char *)v12, 0xCu, v7, -1, aBusfuncC, 726, 0);
    sub_1C00018E8(a1, a2, (__int64)P);
    return 1LL;
  }
}
