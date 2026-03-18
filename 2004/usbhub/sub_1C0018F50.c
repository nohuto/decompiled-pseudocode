/*
 * XREFs of sub_1C0018F50 @ 0x1C0018F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000174C @ 0x1C000174C (sub_1C000174C.c)
 *     sub_1C00018E8 @ 0x1C00018E8 (sub_1C00018E8.c)
 *     sub_1C0001BF8 @ 0x1C0001BF8 (sub_1C0001BF8.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C0019118 @ 0x1C0019118 (sub_1C0019118.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0036B2C @ 0x1C0036B2C (sub_1C0036B2C.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 */

__int64 __fastcall sub_1C0018F50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r14d
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // al
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v13; // eax
  PVOID v14; // rbx
  int v15; // ebp
  int v16; // eax
  int v17; // [rsp+20h] [rbp-88h]
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  _DWORD v19[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v20; // [rsp+60h] [rbp-48h]
  __int16 v21; // [rsp+62h] [rbp-46h]

  v21 = 0;
  P = 0LL;
  v6 = 1;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 28, (__int64)&unk_1C0062100, *(_WORD *)(a2 + 4));
  sub_1C000FD80(a1, 1024, 1884434787, a2, 0LL);
  v7 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 766);
  v8 = KeAcquireSpinLockRaiseToDpc(v7);
  KeReleaseSpinLock(v7, v8);
  sub_1C0013AE0(a1, a2, 0);
  v17 = *(unsigned __int16 *)(a2 + 4);
  sub_1C0012400(a1, 0LL, 0LL, &stru_1C0061EC8);
  v9 = sub_1C0001BF8(a1);
  v10 = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = v9;
  v11 = v9 - *(_DWORD *)(a2 + 848);
  v19[1] = v10;
  v19[0] = v11;
  v20 = *(_WORD *)(a2 + 4);
  sub_1C001853C(a1, v10 != 0 ? 100 : 32);
  if ( (int)sub_1C0019118(a1, a3, *(unsigned __int16 *)(a2 + 420), *(unsigned __int16 *)(a2 + 4), v17, 0) < 0 )
    goto LABEL_13;
  sub_1C0012400(a1, 0LL, 0LL, &stru_1C0061EB8);
  if ( (*(_WORD *)(a2 + 420) & 0x400) != 0
    && !*(_DWORD *)(a2 + 544)
    && !dword_1C006B68C
    && (sub_1C000F050(a1)[640] & 0x8000000) == 0 )
  {
    return sub_1C0010540(a1, a2, a3);
  }
  v13 = sub_1C000174C(a1, a2, &P);
  v14 = P;
  v15 = v13;
  if ( v13 >= 0 )
  {
    v6 = 2;
LABEL_17:
    sub_1C00018E8(a1, a2, (__int64)v14);
    return v6;
  }
  if ( !P )
  {
LABEL_13:
    v16 = sub_1C000174C(a1, a2, &P);
    v14 = P;
    v15 = v16;
  }
  if ( *(_DWORD *)(a2 + 544) >= 3u )
  {
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
  }
  else if ( v14 )
  {
    sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062A90);
    sub_1C001853C(a1, 0x1F4u);
    ++*(_DWORD *)(a2 + 544);
    sub_1C0036B2C(a1, a2, 0LL);
    goto LABEL_17;
  }
  sub_1C004E668(a1, a2, a3, 3, (__int64)v19, v15);
  return 0LL;
}
