/*
 * XREFs of sub_1C00336FC @ 0x1C00336FC
 * Callers:
 *     sub_1C0002648 @ 0x1C0002648 (sub_1C0002648.c)
 *     sub_1C000B0E0 @ 0x1C000B0E0 (sub_1C000B0E0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C00180B8 @ 0x1C00180B8 (sub_1C00180B8.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 */

void __fastcall sub_1C00336FC(__int64 a1, __int64 a2, void *a3, char a4)
{
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // bl
  __int64 v11; // rdx
  int v12; // [rsp+28h] [rbp-20h]

  sub_1C000FD80(a1, 512, 1718898755, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v12 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x35u, (__int64)&unk_1C0062098, v12);
  }
  v8 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 1236);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  *(_QWORD *)(a2 + 680) = 0LL;
  *(_DWORD *)(a2 + 696) = 0;
  v10 = v9;
  KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
  KeReleaseSpinLock(v8, v10);
  v11 = *(_QWORD *)(a2 + 392);
  if ( v11 )
  {
    if ( a4 )
    {
      sub_1C001518C(a1, v11, -1073741823);
      if ( (unsigned int)sub_1C00180B8(a1, a2) )
        sub_1C0034DE4(a1, a2, 3LL);
    }
  }
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
}
