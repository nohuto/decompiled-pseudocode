/*
 * XREFs of sub_1C0003180 @ 0x1C0003180
 * Callers:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 * Callees:
 *     sub_1C0003300 @ 0x1C0003300 (sub_1C0003300.c)
 *     sub_1C0006460 @ 0x1C0006460 (sub_1C0006460.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 *     sub_1C00312A0 @ 0x1C00312A0 (sub_1C00312A0.c)
 */

__int64 __fastcall sub_1C0003180(PDEVICE_OBJECT DeviceObject, __int64 a2, int a3)
{
  __int64 v3; // rsi
  _DWORD *DeviceExtension; // rdx
  unsigned int v7; // ebp
  PVOID v8; // rdx
  __int64 v9; // rcx
  unsigned int *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax

  v3 = a3;
  if ( !DeviceObject )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_27;
  if ( *DeviceExtension != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceExtension);
  sub_1C000F050(*(_QWORD *)(a2 + 8));
  v7 = *(_DWORD *)(a2 + 80);
  if ( (dword_1C006B268 & 0x800) != 0 )
  {
    v8 = DeviceObject->DeviceExtension;
    if ( v8 )
    {
      v9 = *((_QWORD *)v8 + 111)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
      *(_DWORD *)v9 = 1314026338;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a2;
      *(_QWORD *)(v9 + 24) = v3;
    }
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 12, (__int64)&unk_1C0062C48, v3);
  if ( (_DWORD)v3 != 7 )
  {
    *(_DWORD *)(a2 + 128) = 1;
    if ( (_DWORD)v3 == 3 )
    {
      sub_1C0006460(DeviceObject);
      sub_1C0031080(DeviceObject, a2);
      return (unsigned int)sub_1C0003300(DeviceObject, a2, 2LL);
    }
    else if ( (_DWORD)v3 == 6 )
    {
      sub_1C0006460(DeviceObject);
      sub_1C00312A0(DeviceObject, a2);
      return (unsigned int)sub_1C0003300(DeviceObject, a2, 5LL);
    }
    else
    {
      return (unsigned int)sub_1C0003300(DeviceObject, a2, v7);
    }
  }
  if ( (sub_1C0006460(DeviceObject) & 0xC0000000) == 0xC0000000 )
    return (unsigned int)sub_1C0003300(DeviceObject, a2, 3LL);
  v10 = (unsigned int *)DeviceObject->DeviceExtension;
  if ( !v10 )
LABEL_27:
    sub_1C002DC78(DeviceObject, 0LL);
  if ( *v10 != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
  v11 = 4;
  if ( v10[610] != 4 )
  {
    v10[610] = 4;
    *(_DWORD *)(a2 + 80) = 4;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v12 = v10[208];
  *((_QWORD *)v10 + 167) = 0LL;
  v10[8 * v12 + 137] = 4;
  KeReleaseSemaphore((PRKSEMAPHORE)(v10 + 612), 16, 1, 0);
  return v11;
}
