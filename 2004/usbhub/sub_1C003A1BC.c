/*
 * XREFs of sub_1C003A1BC @ 0x1C003A1BC
 * Callers:
 *     sub_1C0039F00 @ 0x1C0039F00 (sub_1C0039F00.c)
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 * Callees:
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0034654 @ 0x1C0034654 (sub_1C0034654.c)
 *     sub_1C0038920 @ 0x1C0038920 (sub_1C0038920.c)
 */

__int64 __fastcall sub_1C003A1BC(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rsi
  KSPIN_LOCK *v7; // rsi
  char v8; // r9
  KIRQL v9; // al
  __int64 result; // rax

  v6 = sub_1C000F050((__int64)DeviceObject);
  sub_1C000FD80((__int64)DeviceObject, 16, 1347573553, 0LL, *(unsigned __int16 *)(a2 + 4));
  v7 = (KSPIN_LOCK *)(v6 + 1236);
  *(_BYTE *)(a2 + 2838) = v8;
  while ( 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(v7);
    if ( *(_DWORD *)(a2 + 696) == 3 )
    {
      KeReleaseSpinLock(v7, v9);
      result = sub_1C00038F0((__int64)DeviceObject, (void *)(a2 + 712), 500, 1347573623, 0xBu, a2);
    }
    else
    {
      KeReleaseSpinLock(v7, v9);
      result = 0LL;
    }
    if ( (_DWORD)result != 258 )
      break;
    sub_1C0034654((__int64)DeviceObject, a3, *(_WORD *)(a2 + 4));
  }
  if ( *(_BYTE *)(a2 + 2838) )
    return sub_1C0038920(DeviceObject, a3, a2);
  return result;
}
