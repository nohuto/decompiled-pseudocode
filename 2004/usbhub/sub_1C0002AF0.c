/*
 * XREFs of sub_1C0002AF0 @ 0x1C0002AF0
 * Callers:
 *     sub_1C0002978 @ 0x1C0002978 (sub_1C0002978.c)
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 *     sub_1C0031390 @ 0x1C0031390 (sub_1C0031390.c)
 *     sub_1C0031404 @ 0x1C0031404 (sub_1C0031404.c)
 *     sub_1C0036230 @ 0x1C0036230 (sub_1C0036230.c)
 *     sub_1C0036430 @ 0x1C0036430 (sub_1C0036430.c)
 *     sub_1C0036A00 @ 0x1C0036A00 (sub_1C0036A00.c)
 *     sub_1C0036A40 @ 0x1C0036A40 (sub_1C0036A40.c)
 *     sub_1C0041F88 @ 0x1C0041F88 (sub_1C0041F88.c)
 *     sub_1C00430F0 @ 0x1C00430F0 (sub_1C00430F0.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 * Callees:
 *     sub_1C0002D20 @ 0x1C0002D20 (sub_1C0002D20.c)
 *     sub_1C0003070 @ 0x1C0003070 (sub_1C0003070.c)
 *     sub_1C0003180 @ 0x1C0003180 (sub_1C0003180.c)
 *     sub_1C0003300 @ 0x1C0003300 (sub_1C0003300.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00312A0 @ 0x1C00312A0 (sub_1C00312A0.c)
 *     sub_1C003148C @ 0x1C003148C (sub_1C003148C.c)
 *     sub_1C0031548 @ 0x1C0031548 (sub_1C0031548.c)
 *     sub_1C0031600 @ 0x1C0031600 (sub_1C0031600.c)
 */

__int64 __fastcall sub_1C0002AF0(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  _DWORD *DeviceExtension; // rdx
  PVOID v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // r15
  char v11; // cl
  __int64 v12; // rcx
  PVOID v13; // rdx
  __int64 v14; // rcx

  v3 = a3;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_33;
  if ( *DeviceExtension != 541218120 )
    sub_1C002DC78(a1, DeviceExtension);
  if ( a3 == 3 )
    sub_1C00312A0(a1, a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 16, (__int64)&unk_1C0062C48, v3);
  if ( (dword_1C006B268 & 0x800) != 0 )
  {
    v7 = a1->DeviceExtension;
    if ( v7 )
    {
      v8 = *((_QWORD *)v7 + 111)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v7 + 220) & *((_DWORD *)v7 + 221));
      *(_DWORD *)v8 = 724267874;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = a2;
      *(_QWORD *)(v8 + 24) = v3;
    }
  }
  v9 = a1->DeviceExtension;
  if ( !v9 )
LABEL_33:
    sub_1C002DC78(a1, 0LL);
  if ( *v9 != 541218120 )
    sub_1C002DC78(a1, a1->DeviceExtension);
  KeWaitForSingleObject(v9 + 612, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 76) = 2020889410;
  *(_DWORD *)(a2 + 84) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v10 = (int)v9[610];
  *(_DWORD *)(a2 + 80) = v10;
  v11 = v9[208] + 1;
  *((_QWORD *)v9 + 167) = a2;
  v12 = v11 & 7;
  v9[208] = v12;
  v12 *= 32LL;
  *(_DWORD *)((char *)v9 + v12 + 540) = v3;
  *(_DWORD *)((char *)v9 + v12 + 544) = v9[610];
  if ( (dword_1C006B268 & 0x800) != 0 )
  {
    v13 = a1->DeviceExtension;
    if ( v13 )
    {
      v14 = *((_QWORD *)v13 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
      *(_DWORD *)v14 = 757953378;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = a2;
      *(_QWORD *)(v14 + 24) = v10;
    }
  }
  switch ( (_DWORD)v10 )
  {
    case 4:
      return sub_1C0003070(a1, a2, (unsigned int)v3);
    case 3:
      return sub_1C0003180(a1);
    case 1:
      return sub_1C003148C(a1, a2, (unsigned int)v3);
    case 2:
      return sub_1C0031600(a1, a2, (unsigned int)v3);
    case 5:
      return sub_1C0002D20(a1, a2, (unsigned int)v3);
    case 6:
      return sub_1C0031548(a1, a2, (unsigned int)v3);
  }
  sub_1C0003300(a1, a2, (unsigned int)v10);
  return (unsigned int)v10;
}
