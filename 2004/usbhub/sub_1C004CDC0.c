/*
 * XREFs of sub_1C004CDC0 @ 0x1C004CDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000174C @ 0x1C000174C (sub_1C000174C.c)
 *     sub_1C00018E8 @ 0x1C00018E8 (sub_1C00018E8.c)
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C00126A8 @ 0x1C00126A8 (sub_1C00126A8.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 *     sub_1C003AB30 @ 0x1C003AB30 (sub_1C003AB30.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 */

__int64 __fastcall sub_1C004CDC0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  _QWORD *v5; // r14
  __int64 v6; // rdx
  __int32 v7; // esi
  unsigned __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rax
  __int32 v13; // esi
  __int64 v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+28h] [rbp-50h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  v3 = 0LL;
  *(_DWORD *)(a2 + 544) = 0;
  *(_DWORD *)(a2 + 2408) = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v16 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xEu, (__int64)&unk_1C0062100, v16);
  }
  sub_1C000FD80(a1, 1024, 1883459406, a2, 0LL);
  sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062848);
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 0);
  v5 = (_QWORD *)sub_1C0004060(a1, a2 + 24, a1, 1129345907, 1);
  v7 = sub_1C0053F94(a1, a2);
  if ( v5 )
    sub_1C0003610(a1, v6, v5);
  if ( v7 >= 0 )
  {
    sub_1C00126A8(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    v8 = 0LL;
    _InterlockedExchange((volatile __int32 *)(a2 + 404), 0);
    v9 = MEMORY[0xFFFFF78000000008];
    v10 = MEMORY[0xFFFFF78000000008];
    v11 = MEMORY[0xFFFFF78000000008];
    do
    {
      if ( (unsigned __int64)(v11 - v9) > 0x1E8480 && v3 > 1 )
      {
        sub_1C00029EC(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
        sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062BA8);
        sub_1C003AB30(a1, *(_QWORD *)(a2 + 392), a2 + 24);
        sub_1C000FD80(a1, 1024, 1145205871, a2, *(unsigned __int16 *)(a2 + 4));
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        {
          LODWORD(v15) = *(unsigned __int16 *)(a2 + 4);
          sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xFu, (__int64)&unk_1C0062100, v15);
        }
        return 0LL;
      }
      sub_1C001853C(a1, 0x14u);
      v11 = MEMORY[0xFFFFF78000000008];
      v12 = MEMORY[0xFFFFF78000000008] - v10;
      v10 = MEMORY[0xFFFFF78000000008];
      v8 += v12;
      if ( _InterlockedExchange((volatile __int32 *)(a2 + 404), 0) )
      {
        ++v3;
        v8 = 0LL;
      }
    }
    while ( v8 < 0xF4240 );
    sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062888);
    v13 = sub_1C000174C(a1, a2, &P);
    if ( v13 >= 0 )
    {
      sub_1C00018E8(a1, a2, (__int64)P);
      _InterlockedExchange((volatile __int32 *)(a2 + 428), 9);
      return 1LL;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    sub_1C0037200(a1, a2);
    sub_1C00029EC(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    sub_1C003AB30(a1, *(_QWORD *)(a2 + 392), a2 + 24);
    sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062988);
    sub_1C004A608(a1, *(_WORD *)(a2 + 4), 2u, 0LL, 0, v13, -1, aBusfuncC, 650, 0);
  }
  else
  {
    sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062988);
    sub_1C004A608(a1, *(_WORD *)(a2 + 4), 2u, 0LL, 0, v7, -1, aBusfuncC, 551, 0);
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 3);
  return 0LL;
}
